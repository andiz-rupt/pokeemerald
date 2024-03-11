const u8 gEasyChatWord_Opponent[] = _("ADVERSAIRE");
const u8 gEasyChatWord_I[] = _("JE");
const u8 gEasyChatWord_You[] = _("TU");
const u8 gEasyChatWord_Yours[] = _("TON");
const u8 gEasyChatWord_Son[] = _("FILS");
const u8 gEasyChatWord_Your[] = _("TES");
const u8 gEasyChatWord_Youre[] = _("TU ES");
const u8 gEasyChatWord_Youve[] = _("TU AS");
const u8 gEasyChatWord_Mother[] = _("MERE");
const u8 gEasyChatWord_Grandfather[] = _("GRAND-PERE");
const u8 gEasyChatWord_Uncle[] = _("ONCLE");
const u8 gEasyChatWord_Father[] = _("PERE");
const u8 gEasyChatWord_Boy[] = _("GARCON");
const u8 gEasyChatWord_Adult[] = _("ADULTE");
const u8 gEasyChatWord_Brother[] = _("FRERE");
const u8 gEasyChatWord_Sister[] = _("SOEUR");
const u8 gEasyChatWord_Grandmother[] = _("GRAND-MERE");
const u8 gEasyChatWord_Aunt[] = _("TANTE");
const u8 gEasyChatWord_Parent[] = _("PARENTS");
const u8 gEasyChatWord_Man[] = _("HOMME");
const u8 gEasyChatWord_Me[] = _("MOI");
const u8 gEasyChatWord_Girl[] = _("FILLE");
const u8 gEasyChatWord_Babe[] = _("BEBE");
const u8 gEasyChatWord_Family[] = _("FAMILLE");
const u8 gEasyChatWord_Her[] = _("TA");
const u8 gEasyChatWord_Him[] = _("TOI");
const u8 gEasyChatWord_He[] = _("IL");
const u8 gEasyChatWord_Place[] = _("IL A");
const u8 gEasyChatWord_Daughter[] = _("MA");
const u8 gEasyChatWord_His[] = _("SES");
const u8 gEasyChatWord_Hes[] = _("IL EST");
const u8 gEasyChatWord_Arent[] = _("SE");
const u8 gEasyChatWord_Siblings[] = _("TE");
const u8 gEasyChatWord_Kid[] = _("GOSSE");
const u8 gEasyChatWord_Children[] = _("ENFANTS");
const u8 gEasyChatWord_Mr[] = _("MONSIEUR");
const u8 gEasyChatWord_Mrs[] = _("MADAME");
const u8 gEasyChatWord_Myself[] = _("LEURS");
const u8 gEasyChatWord_IWas[] = _("J'ETAIS");
const u8 gEasyChatWord_ToMe[] = _("ON A");
const u8 gEasyChatWord_My[] = _("MON");
const u8 gEasyChatWord_IAm[] = _("JE SUIS");
const u8 gEasyChatWord_Ive[] = _("J'AI");
const u8 gEasyChatWord_Who[] = _("QUI");
const u8 gEasyChatWord_Someone[] = _("J'");
const u8 gEasyChatWord_WhoWas[] = _("ME");
const u8 gEasyChatWord_ToWhom[] = _("ON EST");
const u8 gEasyChatWord_Whose[] = _("ELLES");
const u8 gEasyChatWord_WhoIs[] = _("MES");
const u8 gEasyChatWord_Its[] = _("C'EST");
const u8 gEasyChatWord_Lady[] = _("JEUNE FILLE");
const u8 gEasyChatWord_Friend[] = _("AMIS");
const u8 gEasyChatWord_Ally[] = _("ALLIE");
const u8 gEasyChatWord_Person[] = _("PERSONNE");
const u8 gEasyChatWord_Dude[] = _("MEC");
const u8 gEasyChatWord_They[] = _("ILS");
const u8 gEasyChatWord_TheyWere[] = _("ILS ETAIENT");
const u8 gEasyChatWord_ToThem[] = _("NOS");
const u8 gEasyChatWord_Their[] = _("LEUR");
const u8 gEasyChatWord_Theyre[] = _("ILS SONT");
const u8 gEasyChatWord_Theyve[] = _("ILS ONT");
const u8 gEasyChatWord_We[] = _("NOUS");
const u8 gEasyChatWord_Been[] = _("SON");
const u8 gEasyChatWord_ToUs[] = _("ON");
const u8 gEasyChatWord_Our[] = _("NOTRE");
const u8 gEasyChatWord_WeAre[] = _("NOUS VOULONS");
const u8 gEasyChatWord_Rival[] = _("JEUNE");
const u8 gEasyChatWord_Weve[] = _("NOUS AVONS");
const u8 gEasyChatWord_Woman[] = _("FEMME");
const u8 gEasyChatWord_She[] = _("ELLE");
const u8 gEasyChatWord_SheWas[] = _("ELLE ETAIT");
const u8 gEasyChatWord_ToHer[] = _("ELLE A");
const u8 gEasyChatWord_Hers[] = _("SA");
const u8 gEasyChatWord_SheIs[] = _("ELLE EST");
const u8 gEasyChatWord_Some[] = _("CERTAINS");

const struct EasyChatWordInfo gEasyChatGroup_People[] = {
    [EC_INDEX(EC_WORD_OPPONENT)] =
    {
        .text = gEasyChatWord_Opponent,
        .alphabeticalOrder = 13,
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_I)] =
    {
        .text = gEasyChatWord_I,
        .alphabeticalOrder = 0,
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_YOU)] =
    {
        .text = gEasyChatWord_You,
        .alphabeticalOrder = 52,
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_YOURS)] =
    {
        .text = gEasyChatWord_Yours,
        .alphabeticalOrder = 51,
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_SON)] =
    {
        .text = gEasyChatWord_Son,
        .alphabeticalOrder = 22,
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_YOUR)] =
    {
        .text = gEasyChatWord_Your,
        .alphabeticalOrder = 49,
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_YOU_RE)] =
    {
        .text = gEasyChatWord_Youre,
        .alphabeticalOrder = 74,
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_YOU_VE)] =
    {
        .text = gEasyChatWord_Youve,
        .alphabeticalOrder = 69,
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_MOTHER)] =
    {
        .text = gEasyChatWord_Mother,
        .alphabeticalOrder = 71,
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_GRANDFATHER)] =
    {
        .text = gEasyChatWord_Grandfather,
        .alphabeticalOrder = 73,
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_UNCLE)] =
    {
        .text = gEasyChatWord_Uncle,
        .alphabeticalOrder = 70,
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_FATHER)] =
    {
        .text = gEasyChatWord_Father,
        .alphabeticalOrder = 47,
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_BOY)] =
    {
        .text = gEasyChatWord_Boy,
        .alphabeticalOrder = 34,
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_ADULT)] =
    {
        .text = gEasyChatWord_Adult,
        .alphabeticalOrder = 23,
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_BROTHER)] =
    {
        .text = gEasyChatWord_Brother,
        .alphabeticalOrder = 68,
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_SISTER)] =
    {
        .text = gEasyChatWord_Sister,
        .alphabeticalOrder = 21,
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_GRANDMOTHER)] =
    {
        .text = gEasyChatWord_Grandmother,
        .alphabeticalOrder = 4,
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_AUNT)] =
    {
        .text = gEasyChatWord_Aunt,
        .alphabeticalOrder = 14,
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_PARENT)] =
    {
        .text = gEasyChatWord_Parent,
        .alphabeticalOrder = 12,
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_MAN)] =
    {
        .text = gEasyChatWord_Man,
        .alphabeticalOrder = 33,
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_ME)] =
    {
        .text = gEasyChatWord_Me,
        .alphabeticalOrder = 16,
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_GIRL)] =
    {
        .text = gEasyChatWord_Girl,
        .alphabeticalOrder = 9,
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_BABE)] =
    {
        .text = gEasyChatWord_Babe,
        .alphabeticalOrder = 19,
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_FAMILY)] =
    {
        .text = gEasyChatWord_Family,
        .alphabeticalOrder = 26,
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_HER)] =
    {
        .text = gEasyChatWord_Her,
        .alphabeticalOrder = 27,
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_HIM)] =
    {
        .text = gEasyChatWord_Him,
        .alphabeticalOrder = 30,
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_HE)] =
    {
        .text = gEasyChatWord_He,
        .alphabeticalOrder = 55,
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_PLACE)] =
    {
        .text = gEasyChatWord_Place,
        .alphabeticalOrder = 56,
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_DAUGHTER)] =
    {
        .text = gEasyChatWord_Daughter,
        .alphabeticalOrder = 60,
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_HIS)] =
    {
        .text = gEasyChatWord_His,
        .alphabeticalOrder = 59,
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_HE_S)] =
    {
        .text = gEasyChatWord_Hes,
        .alphabeticalOrder = 44,
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_AREN_T)] =
    {
        .text = gEasyChatWord_Arent,
        .alphabeticalOrder = 42,
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_SIBLINGS)] =
    {
        .text = gEasyChatWord_Siblings,
        .alphabeticalOrder = 38,
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_KID)] =
    {
        .text = gEasyChatWord_Kid,
        .alphabeticalOrder = 1,
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_CHILDREN)] =
    {
        .text = gEasyChatWord_Children,
        .alphabeticalOrder = 41,
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_MR)] =
    {
        .text = gEasyChatWord_Mr,
        .alphabeticalOrder = 66,
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_MRS)] =
    {
        .text = gEasyChatWord_Mrs,
        .alphabeticalOrder = 50,
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_MYSELF)] =
    {
        .text = gEasyChatWord_Myself,
        .alphabeticalOrder = 58,
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_I_WAS)] =
    {
        .text = gEasyChatWord_IWas,
        .alphabeticalOrder = 37,
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_TO_ME)] =
    {
        .text = gEasyChatWord_ToMe,
        .alphabeticalOrder = 28,
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_MY)] =
    {
        .text = gEasyChatWord_My,
        .alphabeticalOrder = 36,
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_I_AM)] =
    {
        .text = gEasyChatWord_IAm,
        .alphabeticalOrder = 45,
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_I_VE)] =
    {
        .text = gEasyChatWord_Ive,
        .alphabeticalOrder = 54,
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_WHO)] =
    {
        .text = gEasyChatWord_Who,
        .alphabeticalOrder = 8,
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_SOMEONE)] =
    {
        .text = gEasyChatWord_Someone,
        .alphabeticalOrder = 48,
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_WHO_WAS)] =
    {
        .text = gEasyChatWord_WhoWas,
        .alphabeticalOrder = 20,
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_TO_WHOM)] =
    {
        .text = gEasyChatWord_ToWhom,
        .alphabeticalOrder = 40,
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_WHOSE)] =
    {
        .text = gEasyChatWord_Whose,
        .alphabeticalOrder = 35,
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_WHO_IS)] =
    {
        .text = gEasyChatWord_WhoIs,
        .alphabeticalOrder = 57,
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_IT_S)] =
    {
        .text = gEasyChatWord_Its,
        .alphabeticalOrder = 64,
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_LADY)] =
    {
        .text = gEasyChatWord_Lady,
        .alphabeticalOrder = 61,
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_FRIEND)] =
    {
        .text = gEasyChatWord_Friend,
        .alphabeticalOrder = 67,
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_ALLY)] =
    {
        .text = gEasyChatWord_Ally,
        .alphabeticalOrder = 65,
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_PERSON)] =
    {
        .text = gEasyChatWord_Person,
        .alphabeticalOrder = 63,
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_DUDE)] =
    {
        .text = gEasyChatWord_Dude,
        .alphabeticalOrder = 39,
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_THEY)] =
    {
        .text = gEasyChatWord_They,
        .alphabeticalOrder = 46,
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_THEY_WERE)] =
    {
        .text = gEasyChatWord_TheyWere,
        .alphabeticalOrder = 10,
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_TO_THEM)] =
    {
        .text = gEasyChatWord_ToThem,
        .alphabeticalOrder = 18,
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_THEIR)] =
    {
        .text = gEasyChatWord_Their,
        .alphabeticalOrder = 11,
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_THEY_RE)] =
    {
        .text = gEasyChatWord_Theyre,
        .alphabeticalOrder = 53,
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_THEY_VE)] =
    {
        .text = gEasyChatWord_Theyve,
        .alphabeticalOrder = 43,
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_WE)] =
    {
        .text = gEasyChatWord_We,
        .alphabeticalOrder = 72,
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_BEEN)] =
    {
        .text = gEasyChatWord_Been,
        .alphabeticalOrder = 31,
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_TO_US)] =
    {
        .text = gEasyChatWord_ToUs,
        .alphabeticalOrder = 29,
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_OUR)] =
    {
        .text = gEasyChatWord_Our,
        .alphabeticalOrder = 15,
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_WE_RE)] =
    {
        .text = gEasyChatWord_WeAre,
        .alphabeticalOrder = 62,
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_RIVAL)] =
    {
        .text = gEasyChatWord_Rival,
        .alphabeticalOrder = 24,
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_WE_VE)] =
    {
        .text = gEasyChatWord_Weve,
        .alphabeticalOrder = 17,
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_WOMAN)] =
    {
        .text = gEasyChatWord_Woman,
        .alphabeticalOrder = 32,
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_SHE)] =
    {
        .text = gEasyChatWord_She,
        .alphabeticalOrder = 5,
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_SHE_WAS)] =
    {
        .text = gEasyChatWord_SheWas,
        .alphabeticalOrder = 25,
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_TO_HER)] =
    {
        .text = gEasyChatWord_ToHer,
        .alphabeticalOrder = 3,
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_HERS)] =
    {
        .text = gEasyChatWord_Hers,
        .alphabeticalOrder = 2,
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_SHE_IS)] =
    {
        .text = gEasyChatWord_SheIs,
        .alphabeticalOrder = 7,
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_SOME)] =
    {
        .text = gEasyChatWord_Some,
        .alphabeticalOrder = 6,
        .enabled = TRUE,
    },
};
