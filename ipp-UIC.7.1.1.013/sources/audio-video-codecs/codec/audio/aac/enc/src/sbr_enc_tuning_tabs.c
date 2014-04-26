
/*//////////////////////////////////////////////////////////////////////////////
//
//                  INTEL CORPORATION PROPRIETARY INFORMATION
//     This software is supplied under the terms of a license agreement or
//     nondisclosure agreement with Intel Corporation and may not be copied
//     or disclosed except in accordance with the terms of that agreement.
//          Copyright(c) 2006-2012 Intel Corporation. All Rights Reserved.
//
*/

#include "umc_config.h"
#if defined (UMC_ENABLE_AAC_AUDIO_ENCODER)

/********************************************************************/

/* HEAAC profile*/

#include "aaccmn_const.h"
#include "sbr_enc_api_fp.h"
#include "sbr_enc_own_fp.h"

#include "aac_status.h"

/* AYAlog */
#ifdef SBR_NEED_LOG
#include "sbr_enc_dbg.h"
#endif

/********************************************************************

typedef struct {

Ipp32s bit_rate_min;
Ipp32s bit_rate_max;

Ipp32s sampleRate;

enum eId ID_XCE;

Ipp32s bs_start_freq;
Ipp32s bs_stop_freq;
Ipp32s bs_noise_bands;
Ipp32s bs_freq_scale;

Ipp32s nf_max_level;

} sSBREncTuningTab;

********************************************************************/

const sSBREncTuningTab SBR_TUNING_TABS[] = {
  //--------------------------------
  //         MONO
  //--------------------------------
  /* 8 kHz */
  { 16000, 48000,   8000, ID_SCE,  4,  7, 2, 2, 6},

  /* 11 kHz */
  { 16000, 48000,  11025, ID_SCE,  4,  7, 2, 2, 6},

  /* 16 kHz */
  { 10000, 12000,  16000, ID_SCE,  1,  3, 1, 3, 6 },
  { 12000, 16000,  16000, ID_SCE,  2,  0, 1, 3, 6 },
  { 16000, 20000,  16000, ID_SCE,  2,  3, 1, 3, 6 },
  { 20000, 48000,  16000, ID_SCE,  4,  7, 2, 2, 6 },

  /* 22.050 kHz  */
  { 12000, 18000,  22050, ID_SCE,  1,  4, 1, 3, 6 },
  { 18000, 22000,  22050, ID_SCE,  3,  5, 2, 2, 6 },
  { 22000, 28000,  22050, ID_SCE,  7,  8, 2, 2, 6 },
  { 28000, 36000,  22050, ID_SCE, 10,  9, 2, 2, 3 },
  { 36000, 40000,  22050, ID_SCE, 10,  9, 2, 1, 3 },
  { 40000, 48000,  22050, ID_SCE, 13,  9, 2, 1, 3 },

  /* 24 kHz */
  { 12000, 18000,  24000, ID_SCE,  1,  4, 1, 3, 6 },
  { 18000, 22000,  24000, ID_SCE,  3,  5, 2, 2, 6 },
  { 22000, 28000,  24000, ID_SCE,  7,  8, 2, 2, 6 },
  { 28000, 36000,  24000, ID_SCE, 10,  9, 2, 2, 3 },
  { 36000, 40000,  24000, ID_SCE, 10,  9, 2, 1, 3 },
  { 40000, 48000,  24000, ID_SCE, 12, 11, 2, 1, 3 },

  /* 32 kHz */
  { 16000, 20000,  32000, ID_SCE,  2,  7, 2, 2, 6 },
  { 20000, 24000,  32000, ID_SCE,  4,  8, 2, 2, 6 },
  { 24000, 28000,  32000, ID_SCE,  7,  8, 2, 2, 6 },
  { 28000, 32000,  32000, ID_SCE,  7,  9, 2, 2, 6 },
  { 32000, 40000,  32000, ID_SCE,  10, 9, 2, 2, 6 },
  { 40000, 48000,  32000, ID_SCE,  12,11, 2, 1, 6 },

  /* 44.1 kHz */
  { 16000, 20000,  44100, ID_SCE,  2,  7, 2, 2, 6 },
  { 20000, 24000,  44100, ID_SCE,  4,  8, 2, 2, 6 },
  { 24000, 28000,  44100, ID_SCE,  7,  8, 2, 2, 6 },
  { 28000, 32000,  44100, ID_SCE,  7,  9, 2, 2, 6 },
  { 32000, 40000,  44100, ID_SCE,  10, 9, 2, 2, 6 },
  { 40000, 48000,  44100, ID_SCE,  12,11, 2, 1, 6 },

  /* 48 kHz */
  { 16000, 20000,  48000, ID_SCE,  2,  7, 2, 2, 6 },
  { 20000, 24000,  48000, ID_SCE,  4,  8, 2, 2, 6 },
  { 24000, 28000,  48000, ID_SCE,  7,  8, 2, 2, 6 },
  { 28000, 32000,  48000, ID_SCE,  7,  9, 2, 2, 6 },
  { 32000, 40000,  48000, ID_SCE,  10, 9, 2, 2, 6 },
  { 40000, 48000,  48000, ID_SCE,  12,11, 2, 1, 6 },

  //--------------------------------
  //         STEREO
  //--------------------------------
  /* 8 kHz */
  { 16000, 20000,   8000, ID_CPE,  4,  8,  2, 2,  6},
  { 20000, 48000,   8000, ID_CPE,  4,  7,  2, 2,  6},
  { 48000, 96000,   8000, ID_CPE,  15, 12, 2, 1,  6},

  /* 11 kHz */
  { 16000, 20000,  11025, ID_CPE,  4,  8,  2, 2,  6 },
  { 20000, 48000,  11025, ID_CPE,  4,  7,  2, 2,  6 },
  { 48000, 96000,  11025, ID_CPE,  15, 12, 2, 1,  6 },

  /* 16 kHz */
  { 18000, 24000,  16000, ID_CPE,  4,  2,  1, 3, -3 },
  { 24000, 48000,  16000, ID_CPE,  4,  7,  2, 2, -3 },
  { 48000, 96000,  16000, ID_CPE,  15, 12, 1, 2,  6 },


  /* 22.050 kHz  */
  { 16000, 20000,  22050, ID_CPE,  5,  2, 2, 1, -3 },
  { 20000, 24000,  22050, ID_CPE,  4,  8, 2, 2, -3 },
  { 24000, 28000,  22050, ID_CPE,  5,  6, 1, 3, -3 },
  { 28000, 36000,  22050, ID_CPE,  7,  8, 2, 2, -3 },
  { 36000, 44000,  22050, ID_CPE, 10,  9, 2, 2, -3 },
  { 44000, 52000,  22050, ID_CPE, 12,  9, 3, 2, -3 },
  { 52000, 56000,  22050, ID_CPE, 14, 10, 2, 1, -3 },
  { 56000, 64000,  22050, ID_CPE, 13, 10, 2, 1, -3 },
  { 64000, 96000,  22050, ID_CPE, 14, 10, 2, 1, -3 },

  /* 24 kHz */
  { 16000, 20000,  24000, ID_CPE,  0,  5, 2, 2, -3 },
  { 20000, 24000,  24000, ID_CPE,  4,  8, 2, 2, -3 },
  { 24000, 28000,  24000, ID_CPE,  5,  6, 1, 3, -3 },
  { 28000, 36000,  24000, ID_CPE,  7,  8, 2, 2, -3 },
  { 36000, 44000,  24000, ID_CPE, 10,  9, 2, 2, -3 },
  { 44000, 52000,  24000, ID_CPE, 12,  9, 3, 2, -3 },
  { 52000, 56000,  24000, ID_CPE, 14, 11, 2, 1, -3 },
  { 56000, 64000,  24000, ID_CPE, 13,  9, 2, 1, -3 },
  { 64000, 80000,  24000, ID_CPE, 13,  9, 2, 1, -3 },
  { 80000, 96000,  24000, ID_CPE, 14, 10, 2, 1, -3 },

  /* 32 kHz */
  { 16000, 20000,  32000, ID_CPE,  0,  5, 2, 2, -3 },
  { 20000, 24000,  32000, ID_CPE,  4,  8, 2, 2, -3 },
  { 24000, 28000,  32000, ID_CPE,  7,  8, 2, 3, -3 },
  { 28000, 32000,  32000, ID_CPE,  7,  9, 2, 2, -3 },
  { 32000, 40000,  32000, ID_CPE, 10,  9, 2, 2, -3 },
  { 40000, 48000,  32000, ID_CPE, 12, 11, 2, 1, -3 },
  { 48000, 56000,  32000, ID_CPE, 14, 11, 2, 1, -3 },
  { 56000, 80000,  32000, ID_CPE, 13,  9, 2, 1, -3 },
  { 80000, 96000,  32000, ID_CPE, 14, 10, 2, 1, -3 },

  /* 44100 */
  { 16000, 20000,  44100, ID_CPE,  0,  5, 2, 2, -3 },
  { 20000, 24000,  44100, ID_CPE,  4,  8, 2, 2, -3 },
  { 24000, 28000,  44100, ID_CPE,  7,  8, 2, 3, -3 },
  { 28000, 32000,  44100, ID_CPE,  7,  9, 2, 2, -3 },
  { 32000, 40000,  44100, ID_CPE, 10,  9, 2, 2, -3 },
  { 40000, 48000,  44100, ID_CPE, 12, 11, 2, 1, -3 },
  { 48000, 56000,  44100, ID_CPE, 14, 11, 2, 1, -3 },
  { 56000, 80000,  44100, ID_CPE, 13,  9, 2, 1, -3 },
  { 80000, 96000,  44100, ID_CPE, 14, 10, 2, 1, -3 },

  /* 48 kHz */
  { 16000, 20000,  48000, ID_CPE,  0,  5, 2, 2, -3 },
  { 20000, 24000,  48000, ID_CPE,  4,  8, 2, 2, -3 },
  { 24000, 28000,  48000, ID_CPE,  7,  8, 2, 3, -3 },
  { 28000, 32000,  48000, ID_CPE,  7,  9, 2, 2, -3 },
  { 32000, 40000,  48000, ID_CPE, 10,  9, 2, 2, -3 },
  { 40000, 48000,  48000, ID_CPE, 12, 11, 2, 1, -3 },
  { 48000, 56000,  48000, ID_CPE, 14, 11, 2, 1, -3 },
  { 56000, 80000,  48000, ID_CPE, 13,  9, 2, 1, -3 },
  { 80000, 96000,  48000, ID_CPE, 14, 10, 2, 1, -3 },


  //--------------------------------
};

/********************************************************************/
/*                   TUNING TABLES INIT                             */
/********************************************************************/

AACStatus sbrencGetTuningTab( Ipp32s sampleRate, enum eId id, Ipp32s bitRate, Ipp32s* indx )
{
  //----------------------------------
  Ipp32s i;
  Ipp32s numSelect = sizeof (SBR_TUNING_TABS) / sizeof (SBR_TUNING_TABS [0]);

  for (i = 0 ; i < numSelect ; i++)  {
    if (id == SBR_TUNING_TABS[i].ID_XCE) {

      if ((sampleRate == SBR_TUNING_TABS[i].sampleRate) &&
        (bitRate >= SBR_TUNING_TABS[i].bit_rate_min) &&
        (bitRate < SBR_TUNING_TABS[i].bit_rate_max)) {

          *indx = i;
          return AAC_OK;
        }
    }
  }
  //----------------------------------
  return HEAAC_UNSUPPORTED;
}

/********************************************************************/
/* EOF */

#endif //UMC_ENABLE_AAC_AUDIO_ENCODER

