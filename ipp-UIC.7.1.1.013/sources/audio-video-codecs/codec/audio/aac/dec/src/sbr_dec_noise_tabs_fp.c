/*//////////////////////////////////////////////////////////////////////////////
//
//                  INTEL CORPORATION PROPRIETARY INFORMATION
//     This software is supplied under the terms of a license agreement or
//     nondisclosure agreement with Intel Corporation and may not be copied
//     or disclosed except in accordance with the terms of that agreement.
//          Copyright(c) 2005-2012 Intel Corporation. All Rights Reserved.
//
*/

#include "umc_config.h"
#if defined (UMC_ENABLE_AAC_AUDIO_DECODER)

#include "sbr_dec_tabs_fp.h"

/********************************************************************/

Ipp32f SBR_TABLE_FI_NOISE_RE[] =
{
-0.9994815588f,  0.9711345434f,  0.1413005143f, -0.4700549543f,
 0.8070506454f, -0.3898147941f, -0.0105304988f, -0.9126636982f,
 0.5484042168f,  0.4000925422f, -0.9986797571f, -0.9553107619f,
-0.4572593272f, -0.7292967439f,  0.7562280297f,  0.0706944242f,
 0.7449625134f, -0.9644018412f,  0.3042463064f,  0.6656503081f,
 0.9169700742f, -0.7077491879f, -0.7005141377f, -0.9949651361f,
 0.9816449285f, -0.5467157960f, -0.0168962907f, -0.8611034751f,
-0.9889298081f,  0.5175662637f, -0.9963502884f, -0.9996936917f,
 0.5526626110f,  0.3458117843f,  0.6266421080f, -0.7714970112f,
-0.9159224629f, -0.7628549337f,  0.7978833914f,  0.5447307825f,
-0.8563928008f, -0.9288240075f, -0.1170837134f,  0.2135674953f,
-0.7619169354f,  0.9811104536f, -0.8591327071f, -0.9330724478f,
 0.3048575521f,  0.8528965116f,  0.9132808447f, -0.0589019991f,
 0.2839868665f,  0.9525816441f, -0.7856632471f, -0.9578949809f,
 0.8241115808f, -0.6518544555f, -0.9364360571f,  0.9142715931f,
-0.7039568424f,  0.0056377202f,  0.8906505108f, -0.6868370771f,
 0.7216534019f, -0.6292824745f,  0.2993843555f, -0.9178195596f,
 0.9929871559f,  0.8236829638f, -0.9851283431f, -0.9591537118f,
-0.2141112685f, -0.6882147789f,  0.9185199738f, -0.9606276751f,
 0.5164618492f,  0.6113072038f,  0.4733612835f,  0.9099830985f,
 0.4484480023f,  0.6661489010f,  0.7492223978f, -0.9957158566f,
 0.9740108252f,  0.7268374562f,  0.9543219209f, -0.7296220660f,
-0.8535947800f, -0.8141242862f, -0.8793077469f, -0.7157332897f,
 0.8352429867f, -0.4808606505f,  0.9713912606f,  0.5199282765f,
-0.0084859123f, -0.7029437423f, -0.9589442611f,  0.9707925320f,
-0.9240429401f, -0.6950647235f,  0.2655920386f,  0.2803844213f,
-0.7413812280f, -0.0175279602f, -0.5512677431f,  0.9796090126f,
-0.9919630885f, -0.6768493056f,  0.0914003924f, -0.7165896297f,
 0.8101463914f,  0.4061699212f, -0.6768018603f,  0.8684977293f,
-0.9950038195f,  0.8432918787f, -0.0921596885f,  0.9995617270f,
-0.7973278165f,  0.9634997249f, -0.7994278073f, -0.1156603992f,
-0.3992295563f,  0.9908919930f,  0.2863128483f, -0.8330272436f,
 0.9540444613f, -0.0644986331f, -0.9957505465f, -0.6550114155f,
-0.8125444055f, -0.9964637160f,  0.0028784061f,  0.7017698884f,
 0.9636188149f, -0.6888375878f, -0.3487558663f,  0.9198008180f,
-0.9900904894f,  0.6886579394f, -0.9948440194f,  0.9421451092f,
-0.6741462946f, -0.4733935297f,  0.1432365179f, -0.2926829457f,
 0.4379386008f, -0.3634512722f, -0.0875060484f, -0.9649527073f,
 0.5552694201f,  0.7353821397f, -0.3088977337f,  0.0357499570f,
 0.9872068763f, -0.8168929815f,  0.6786686182f, -0.1580857038f,
 0.8072339296f,  0.4778875709f,  0.9636755586f, -0.9914387465f,
 0.8308187723f, -0.5875319242f,  0.9553810954f, -0.9649091959f,
-0.9732710123f,  0.9140036702f, -0.9992583990f, -0.8687590361f,
-0.2624003589f, -0.2466441244f,  0.0241627581f,  0.8206862211f,
 0.8854737282f, -0.1817307770f,  0.0935547650f, -0.5466841459f,
 0.3705098927f, -0.7037359476f, -0.3460078537f, -0.6877447963f,
-0.2684329152f,  0.4907233417f,  0.3897599280f, -0.9775712490f,
-0.1732555330f,  0.9994803667f, -0.6494624615f, -0.1201692075f,
-0.5894745588f, -0.4181514084f,  0.9988564849f, -0.5664961338f,
 0.9413802028f, -0.7572507858f,  0.2054197341f,  0.9998037219f,
 0.2907827795f, -0.6285877228f,  0.4344090521f, -0.9829858541f,
 0.1951302886f, -0.9547666311f,  0.9337963462f, -0.8523541093f,
-0.8642509580f,  0.3887977898f,  0.9204512239f,  0.8916253448f,
-0.3683433831f,  0.9389176369f,  0.9926765561f, -0.9406347275f,
 0.9974022508f, -0.3589941263f,  0.0523723736f,  0.3670358360f,
 0.9165318012f,  0.6900080442f, -0.3865875006f, -0.2925081551f,
-0.6018220186f, -0.9741858840f,  0.8846157193f,  0.0519893318f,
-0.5349962115f, -0.4942955971f, -0.9893514514f, -0.9808138013f,
-0.2733815014f,  0.0631080270f, -0.2046167701f,  0.6622384191f,
-0.8476434350f, -0.8903986216f,  0.9590330720f,  0.7350412607f,
-0.3174443543f, -0.3411082625f,  0.4780388474f,  0.9829919338f,
-0.3096307218f,  0.9999259114f, -0.9314973354f,  0.9992347360f,
-0.2602416873f, -0.3571251333f, -0.9989908338f,  0.8655717373f,
 0.3340804279f,  0.9901073575f, -0.6669427156f,  0.6401678920f,
 0.9957053661f, -0.6343146563f, -0.0770684704f,  0.9859008789f,
 0.8009933233f,  0.7836813331f,  0.0870780647f, -0.8681188226f,
-0.3946653008f,  0.9787532687f, -0.9503856301f,  0.1700523943f,
-0.7691079378f,  0.9974328279f,  0.9543738365f,  0.9957890511f,
 0.2805826068f,  0.8525652289f, -0.5060853958f, -0.9721073508f,
 0.9542405009f, -0.9692656994f,  0.3087216318f, -0.2452383935f,
-0.3381326497f, -0.0582682826f, -0.2289846092f, -0.1850991547f,
-0.1048823819f, -0.7188658714f,  0.9979387522f,  0.5756330490f,
 0.2890964746f,  0.4218899906f,  0.9333505034f, -0.9708737731f,
 0.3672287166f, -0.8109302521f, -0.2624060214f,  0.8399649858f,
-0.9990961552f,  0.7464946508f, -0.7477459311f,  0.9578166604f,
 0.9547230601f,  0.4870833158f,  0.4633203745f, -0.7649700642f,
 0.5739738941f,  0.7537431717f, -0.5917440057f,  0.7508790493f,
-0.9860785604f, -0.4076105654f,  0.6692926884f, -0.9746369720f,
 0.9014551044f, -0.8725928664f, -0.9152945876f, -0.0330573879f,
 0.0722305104f,  0.9949800968f, -0.7490493655f,  0.0458522849f,
-0.8905495405f, -0.8378214240f,  0.3345480561f, -0.9970757961f,
-0.2282752842f,  0.6724804640f, -0.0514653809f,  0.9994729757f,
 0.6695112586f, -0.9960295558f,  0.8210490346f,  0.9918650985f,
-0.6528459191f,  0.9388544559f,  0.9673525095f, -0.2222596854f,
-0.4413278401f, -0.8569497466f,  0.9178304076f,  0.7255697250f,
-0.9971157908f,  0.7763897777f,  0.0771732405f, -0.5604982972f,
 0.9839889407f,  0.4754694700f,  0.6567509174f,  0.0327337533f,
-0.3868414462f, -0.9734627008f, -0.5328215361f,  0.9981731176f,
-0.5025449991f,  0.0199587326f,  0.9993038177f,  0.8290776610f,
-0.5866070986f, -0.1757373661f,  0.8343428969f,  0.0594649129f,
 0.8150548339f, -0.4497638047f, -0.8974647522f,  0.3967725635f,
-0.0758894831f,  0.7634319663f, -0.7449010611f,  0.6488012075f,
 0.6231953502f,  0.4221581817f,  0.0270455405f,  0.8000177145f,
-0.7935183048f,  0.6387236118f,  0.5289052129f,  0.7423855066f,
 0.9909613132f, -0.8041232824f, -0.6461261511f,  0.1165777072f,
-0.9505318403f, -0.6222887039f,  0.0300447587f, -0.9798721671f,
-0.9998698235f,  0.8911064863f,  0.1040796041f,  0.9596473575f,
 0.5084323287f,  0.1700633466f,  0.2587267458f, -0.0111599872f,
-0.7959870100f, -0.9926471114f, -0.9982966185f, -0.7080101371f,
-0.7046705484f,  0.9984602332f, -0.6336497068f, -0.1625821739f,
-0.4364559352f, -0.9984847307f, -0.1679645926f, -0.8797922730f,
 0.4418309927f,  0.9331017733f, -0.9394193292f, -0.8859000206f,
 0.9997146130f, -0.7537638545f,  0.9388768673f,  0.8512643576f,
 0.3970142007f, -0.3702446520f, -0.3602482677f, -0.9338881373f,
-0.6529880166f,  0.1196031868f,  0.9429256320f,  0.7508114576f,
 0.5672197938f,  0.4685776532f,  0.9731231332f, -0.3829997778f,
 0.4102579951f,  0.0963806212f, -0.8528324962f,  0.8886680603f,
-0.4820242822f,  0.2757258117f, -0.6588913202f,  0.9883808494f,
-0.2065134943f, -0.6212641597f,  0.2032010555f, -0.9779055119f,
 0.1111253500f, -0.4136833847f,  0.2413303852f, -0.6639341116f,
-0.5369783044f, -0.9722473621f,  0.8739247918f,  0.1905036122f,
-0.4635344148f, -0.0706409663f, -0.9244408607f, -0.8382259607f,
 0.7521468401f, -0.4210299850f, -0.7209478617f,  0.7884331346f,
 0.9739402533f,  0.9920646548f,  0.7678961158f, -0.8200241923f,
 0.8192499280f, -0.2671985030f, -0.4331125915f,  0.9919497967f,
-0.8069199920f,  0.4308000505f,  0.6770949364f,  0.5615177155f,
 0.1083186269f,  0.9122941494f, -0.4897289276f, -0.8903365731f,
 0.6526944637f,  0.6743947864f, -0.4777083099f, -0.9971597791f,
-0.9088959098f, -0.0661862269f,  0.9943026900f,  0.9768640399f,
 0.9481365085f, -0.9543449879f, -0.4910478294f,  0.9988117218f,
 0.5044916868f,  0.4716289043f, -0.6208158135f, -0.4386701584f,
 0.9863056540f, -0.6151036024f, -0.0384151749f, -0.3010215759f,
 0.4188128412f, -0.8613545299f,  0.6722686291f, -0.7073739767f,
 0.9404494762f, -0.8238635063f, -0.3207066655f,  0.5759316087f,
-0.3632601798f,  0.9997904301f, -0.9236602187f, -0.4460717738f,
 0.4422680140f,  0.0367190726f,  0.5217542648f, -0.9470114112f,
-0.9875960946f,  0.8743479252f, -0.9341204166f,  0.9606394172f,
 0.9753425121f,  0.9964246750f, -0.9470508695f,  0.9159980416f,

};

Ipp32f SBR_TABLE_FI_NOISE_IM[] =
{
-0.5948341489f, -0.6752851605f, -0.9509098530f, -0.3734054863f,
 0.2965366840f,  0.8957260847f, -0.6695905924f, -0.1152293831f,
 0.7522136569f, -0.9892939925f, -0.8814706802f,  0.9090875983f,
-0.5671632290f, -0.9800827503f,  0.2095032930f, -0.7824789882f,
-0.9116900563f, -0.9473991990f, -0.4943826795f,  0.6465293765f,
 0.1751409769f,  0.5254865289f, -0.4534002841f, -0.9007191062f,
-0.7746315598f, -0.0257092845f,  0.0028750640f,  0.4254858494f,
-0.8788112998f,  0.6692678332f, -0.5810772777f,  0.9836999178f,
 0.5944905877f,  0.9487941861f, -0.7440297008f, -0.3388365805f,
 0.0368790142f, -0.9137187004f, -0.9318097234f, -0.1191920638f,
 0.4242985547f,  0.2787180841f, -0.9980084300f, -0.9071629643f,
 0.9976812005f, -0.9585446119f,  0.9576656818f,  0.4943175912f,
-0.7054003477f,  0.4676613212f, -0.9983959794f,  0.7074182630f,
 0.3463355601f, -0.5489341617f, -0.7556853890f, -0.2042319477f,
 0.9665461779f, -0.8873499036f,  0.9987078905f, -0.9829050303f,
 0.5879679918f,  0.6176819801f,  0.5278335214f,  0.8080694675f,
-0.6925985813f,  0.1362703741f, -0.4605132937f, -0.7401271462f,
 0.4081661105f, -0.7403604984f, -0.9997233152f, -0.9923779964f,
-0.9342482090f, -0.2689230740f,  0.0935822874f,  0.3609909415f,
-0.7137333155f,  0.4695014060f, -0.2733317912f,  0.9671566486f,
 0.9921157360f,  0.9659017324f, -0.8987985849f,  0.5278552175f,
-0.1685587019f, -0.4806077480f,  0.6884960532f, -0.7660844326f,
 0.8873812556f, -0.9748076797f,  0.7474830747f, -0.9857060909f,
 0.8370253444f, -0.9884850383f,  0.8009362221f,  0.8024762869f,
-0.7667012811f,  0.5535991192f, -0.4326550364f,  0.0932585746f,
 0.8550770283f,  0.9863341451f,  0.7331430912f,  0.1453791410f,
 0.9931033850f, -0.8261663318f, -0.9889854193f, -0.9402144551f,
 0.6701901555f,  0.1263149232f, -0.2053773105f, -0.9778820276f,
 0.5372264981f, -0.2646900713f,  0.9450204968f, -0.1833359897f,
-0.0263412204f,  0.1040695757f,  0.6954001188f, -0.1235854179f,
-0.9158252478f,  0.9664045572f,  0.6432390213f,  0.2858784497f,
 0.9412960410f, -0.9206262827f, -0.9103504419f, -0.6733040810f,
 0.4916276634f,  0.0325056091f,  0.4238978326f,  0.8254611492f,
-0.5162723660f,  0.8449053168f,  0.6476826072f, -0.2045302838f,
 0.4070696831f,  0.9133895636f,  0.7147229314f,  0.6650745273f,
 0.8586801887f,  0.5566031933f, -0.2005255967f, -0.9969642758f,
 0.4954822063f, -0.8590433002f, -0.9414559603f,  0.0575922504f,
-0.7890496850f,  0.6487443447f,  0.9768694639f, -0.5396030545f,
 0.7889152169f,  0.9645207524f, -0.8066439033f, -0.9732561707f,
 0.4840913415f, -0.9082770348f,  0.8128450513f,  0.8527955413f,
-0.2471741885f, -0.4633314908f,  0.3848674893f, -0.2494527698f,
-0.9478085041f,  0.0129077239f, -0.8555704951f, -0.6402097344f,
 0.1237812787f,  0.5797247291f,  0.7108484507f, -0.2029169947f,
-0.6826455593f, -0.8764227033f,  0.2719291449f, -0.8508778811f,
-0.8963680267f, -0.2615214586f,  0.5484512448f,  0.9598077536f,
-0.5991014242f,  0.9122766852f, -0.9944142699f, -0.3023883700f,
 0.8311566710f, -0.4535970986f,  0.9551535845f,  0.0530589446f,
-0.9277067184f,  0.5828554630f,  0.6864550710f, -0.5714732409f,
-0.3484713137f,  0.1627642214f,  0.1113609523f, -0.9049486518f,
 0.3528191745f,  0.5365055203f, -0.9443514347f,  0.7983591557f,
 0.3539377749f,  0.3876569271f, -0.9854633212f,  0.2102152407f,
-0.9423983097f,  0.9836455584f, -0.7088199258f, -0.0834234804f,
-0.4579502642f,  0.9727442861f, -0.6243365407f,  0.5495095849f,
 0.9645829797f, -0.8996835351f, -0.0375703424f,  0.4133233726f,
-0.1683049500f, -0.4663322568f, -0.2564036250f, -0.3865326643f,
-0.3058762848f,  0.9095216990f,  0.9950157404f,  0.3744499385f,
 0.8677964807f,  0.9646852612f,  0.5750840306f,  0.2126966119f,
 0.9724155664f,  0.9818386436f, -0.4024915993f, -0.7285689712f,
 0.9995092154f, -0.5453958511f, -0.1420997828f,  0.7252858281f,
 0.0237231683f,  0.8886657953f,  0.7674492598f, -0.0374720320f,
-0.3683411181f,  0.4021122158f, -0.3942321837f,  0.0198979136f,
-0.1807672083f, -0.2628187239f, -0.9831316471f, -0.8014299273f,
-0.7599976063f,  0.1929896325f,  0.7464515567f,  0.5559386611f,
 0.8618595600f,  0.0460239761f, -0.9164361358f,  0.1564953029f,
 0.4584458470f,  0.2107911706f, -0.8958143592f,  0.8824172020f,
-0.3685189784f,  0.4550699890f,  0.8093899488f,  0.3934730887f,
-0.6680943370f, -0.7246783972f,  0.8956322074f,  0.5468305349f,
-0.9622661471f,  0.4269715846f,  0.9700232148f, -0.5410682559f,
-0.8536142111f, -0.6456760764f, -0.6584601402f, -0.2309521288f,
-0.9924014807f,  0.7377565503f,  0.4151495993f,  0.6320663095f,
-0.3866177797f, -0.0694077387f,  0.9705485106f,  0.4756576419f,
-0.8776994944f,  0.7803097963f,  0.9004130960f, -0.9103433490f,
 0.9630778432f,  0.4814864993f, -0.4353702366f,  0.8663644791f,
 0.6529165506f,  0.0877837017f, -0.9277409315f,  0.5583984852f,
-0.9602460861f,  0.1214489341f, -0.2689806223f, -0.7904792428f,
-0.0858877599f,  0.9999904037f,  0.1096412614f,  0.8921092749f,
 0.3528970480f,  0.9670521617f, -0.8940536976f, -0.2961267233f,
 0.2503491044f, -0.9004557133f,  0.9862949252f, -0.0019022330f,
 0.9978138804f,  0.9923358560f, -0.1569870710f, -0.3720526397f,
-0.8880500197f,  0.9709435701f,  0.9998548627f,  0.9981233478f,
-0.3179191351f,  0.9763763547f, -0.8623151779f,  0.9323799014f,
 0.1887475997f, -0.0364621133f, -0.9259970188f,  0.9362522960f,
 0.9890582561f, -0.4465471506f,  0.9954074025f,  0.7202299833f,
 0.5218672156f, -0.7489531040f,  0.9089181423f,  0.5712403059f,
-0.9268884063f,  0.8884453177f, -0.4635689259f, -0.9989955425f,
 0.5821155906f,  0.9432183504f,  0.5863839984f,  0.8252230287f,
 0.3946743906f,  0.6861304641f,  0.1833163649f, -0.7493311167f,
 0.5133734941f, -0.9654936194f, -0.9142326713f,  0.6113357544f,
-0.8882933855f,  0.8522351384f,  0.9457889795f, -0.0632344261f,
 0.9684077501f, -0.4816692173f, -0.1302345097f,  0.2051104754f,
-0.9468594790f,  0.4089457393f,  0.9984657764f, -0.7485466599f,
 0.7409621477f,  0.4174662828f,  0.9472591281f,  0.4133666158f,
-0.9309831262f, -0.0771278739f, -0.0541751795f,  0.9154219627f,
-0.3620889783f,  0.0812825263f,  0.6004887223f,  0.0449191518f,
-0.1945118308f, -0.8851381540f,  0.7219867706f, -0.8366283178f,
-0.9693990350f,  0.8276726007f, -0.9973889589f,  0.3652612865f,
-0.3602161109f, -0.9789425135f,  0.7735779285f, -0.3543581963f,
 0.9610769153f, -0.7685402632f,  0.9989330173f,  0.9849601984f,
 0.9713841081f, -0.9954282045f,  0.0187713876f,  0.3368068635f,
 0.9327277541f, -0.9872574806f, -0.1647359431f, -0.9593912363f,
-0.9480503201f,  0.9624516964f, -0.9898751378f, -0.7172572613f,
-0.9356897473f, -0.9991331100f, -0.5640937686f,  0.4762459993f,
-0.8388995528f,  0.0081464341f, -0.1128452793f,  0.5234925151f,
 0.8177963495f, -0.8707165718f,  0.3465573490f, -0.8447654247f,
-0.1843957603f,  0.9989934564f,  0.8316390514f, -0.3553322256f,
-0.2407683581f, -0.3014023304f, -0.9954819083f,  0.9851691127f,
 0.0211673696f,  0.0441198424f,  0.9147556424f, -0.9973526597f,
-0.9680560827f,  0.5863475204f,  0.5883563161f,  0.9999434948f,
 0.5459304452f, -0.5989367962f, -0.8687918186f,  0.9629080892f,
 0.2148476392f,  0.2821683884f,  0.5129436255f, -0.0824967995f,
-0.9764990211f,  0.2208133340f, -0.1279617399f,  0.0160261542f,
-0.9524903893f, -0.9447980523f, -0.1045759022f, -0.0169504322f,
-0.9995568395f,  0.9972094297f, -0.3500896096f,  0.5285139680f,
-0.2669594288f, -0.5701012015f, -0.7651935816f, -0.7353017926f,
 0.9969842434f,  0.6890336871f,  0.8532181382f,  0.9187625051f,
-0.3262754083f, -0.2191909552f, -0.9547807574f, -0.7069380879f,
-0.0862883702f, -0.6598734856f,  0.5628924370f, -0.7165656686f,
 0.6591600776f, -0.8168438077f, -0.1678955555f, -0.9356578588f,
 0.6203439832f, -0.2381221652f,  0.1881255507f, -0.2866453528f,
-0.9750664234f, -0.7960798144f,  0.3289521337f,  0.8899398446f,
-0.8599507213f, -0.1868020445f,  0.7500067353f,  0.9999806881f,
-0.5357890129f, -0.8951501846f, -0.6988881826f, -0.0766780898f,
 0.0218809899f,  0.9894748330f, -0.1349438876f, -0.7654734850f,
 0.0902620107f,  0.0892476887f,  0.5014342070f, -0.9896642566f,
 0.0744024292f, -0.1413028687f, -0.9797929525f, -0.5423325300f,
 0.7132675648f,  0.6360638738f, -0.8539682627f, -0.0182634816f,
 0.8228871226f,  0.8939949274f,  0.4137405157f,  0.9311670661f,
 0.8615093231f,  0.7019004226f, -0.2958004177f, -0.9814783335f,

};

/********************************************************************/

Ipp32f* SBR_TABLE_V[2] = {SBR_TABLE_FI_NOISE_RE, SBR_TABLE_FI_NOISE_IM};

/********************************************************************/

#endif //UMC_ENABLE_AAC_AUDIO_DECODER

