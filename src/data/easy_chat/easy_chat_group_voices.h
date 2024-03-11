const u8 gEasyChatWord_Excl[] = _("!");
const u8 gEasyChatWord_ExclExcl[] = _("!!");
const u8 gEasyChatWord_QuesExcl[] = _("?!");
const u8 gEasyChatWord_Ques[] = _("?");
const u8 gEasyChatWord_Ellipsis[] = _("…");
const u8 gEasyChatWord_EllipsisExcl[] = _("…!");
const u8 gEasyChatWord_EllipsisEllipsisEllipsis[] = _("………");
const u8 gEasyChatWord_Dash[] = _("-");
const u8 gEasyChatWord_DashDashDash[] = _("---");
const u8 gEasyChatWord_UhOh[] = _("HUM HUM");
const u8 gEasyChatWord_Waaah[] = _("OUAH");
const u8 gEasyChatWord_Ahaha[] = _("HA! HA! HA!");
const u8 gEasyChatWord_OhQues[] = _("HO?");
const u8 gEasyChatWord_Nope[] = _("NAN");
const u8 gEasyChatWord_Urgh[] = _("URGH");
const u8 gEasyChatWord_Hmm[] = _("HUMMM");
const u8 gEasyChatWord_Whoah[] = _("WAOUH");
const u8 gEasyChatWord_WroooaarExcl[] = _("AHHHHH!");
const u8 gEasyChatWord_Wow[] = _("WOUUUU!");
const u8 gEasyChatWord_Giggle[] = _("GLOUSSEMENT");
const u8 gEasyChatWord_Sigh[] = _("SNIFF");
const u8 gEasyChatWord_Unbelievable[] = _("INCROYABLE");
const u8 gEasyChatWord_Cries[] = _("PLEURS");
const u8 gEasyChatWord_Agree[] = _("D'ACCORD");
const u8 gEasyChatWord_EhQues[] = _("QUOI?");
const u8 gEasyChatWord_Cry[] = _("CRI");
const u8 gEasyChatWord_Ehehe[] = _("HE! HE! HE!");
const u8 gEasyChatWord_OiOiOi[] = _("AIE AIE AIE");
const u8 gEasyChatWord_OhYeah[] = _("AH OUI");
const u8 gEasyChatWord_Oh[] = _("OH");
const u8 gEasyChatWord_Oops[] = _("OUPS");
const u8 gEasyChatWord_Shocked[] = _("HO LA LA");
const u8 gEasyChatWord_Eek[] = _("OUILLE");
const u8 gEasyChatWord_Graaah[] = _("GRAAA!");
const u8 gEasyChatWord_Gwahahaha[] = _("CRRRRR");
const u8 gEasyChatWord_Way[] = _("COOL!!!");
const u8 gEasyChatWord_Tch[] = _("PSHT");
const u8 gEasyChatWord_Hehe[] = _("HE! HE!");
const u8 gEasyChatWord_Hah[] = _("HA!");
const u8 gEasyChatWord_Yup[] = _("YOUPI");
const u8 gEasyChatWord_Hahaha[] = _("BEURK");
const u8 gEasyChatWord_Aiyeeh[] = _("YOUHOU!");
const u8 gEasyChatWord_Hiyah[] = _("OUAIP");
const u8 gEasyChatWord_Fufufu[] = _("HOUHOUHOU");
const u8 gEasyChatWord_Lol[] = _("HI! HI! HI!");
const u8 gEasyChatWord_Snort[] = _("RRRH");
const u8 gEasyChatWord_Humph[] = _("HOURRA");
const u8 gEasyChatWord_Hehehe[] = _("VLAN");
const u8 gEasyChatWord_Heh[] = _("HEEEE");
const u8 gEasyChatWord_Hohoho[] = _("HO HO HO");
const u8 gEasyChatWord_UhHuh[] = _("HA");
const u8 gEasyChatWord_OhDear[] = _("DIS DONC");
const u8 gEasyChatWord_Arrgh[] = _("ARRRG");
const u8 gEasyChatWord_Mufufu[] = _("HO");
const u8 gEasyChatWord_Mmm[] = _("MMM");
const u8 gEasyChatWord_OhKay[] = _("MOUAIS");
const u8 gEasyChatWord_Okay[] = _("OK");
const u8 gEasyChatWord_Lalala[] = _("LA LA LA");
const u8 gEasyChatWord_Yay[] = _("YESSS");
const u8 gEasyChatWord_Aww[] = _("HEP");
const u8 gEasyChatWord_Wowee[] = _("WOUHOU");
const u8 gEasyChatWord_Gwah[] = _("OUIN");
const u8 gEasyChatWord_Wahahaha[] = _("OUAHAHA");

const struct EasyChatWordInfo gEasyChatGroup_Voices[] = {
    [EC_INDEX(EC_WORD_EXCL)] =
    {
        .text = gEasyChatWord_Excl,
        .alphabeticalOrder = 0,
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_EXCL_EXCL)] =
    {
        .text = gEasyChatWord_ExclExcl,
        .alphabeticalOrder = 1,
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_QUES_EXCL)] =
    {
        .text = gEasyChatWord_QuesExcl,
        .alphabeticalOrder = 7,
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_QUES)] =
    {
        .text = gEasyChatWord_Ques,
        .alphabeticalOrder = 8,
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_ELLIPSIS)] =
    {
        .text = gEasyChatWord_Ellipsis,
        .alphabeticalOrder = 4,
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_ELLIPSIS_EXCL)] =
    {
        .text = gEasyChatWord_EllipsisExcl,
        .alphabeticalOrder = 5,
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_ELLIPSIS_ELLIPSIS_ELLIPSIS)] =
    {
        .text = gEasyChatWord_EllipsisEllipsisEllipsis,
        .alphabeticalOrder = 6,
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_DASH)] =
    {
        .text = gEasyChatWord_Dash,
        .alphabeticalOrder = 3,
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_DASH_DASH_DASH)] =
    {
        .text = gEasyChatWord_DashDashDash,
        .alphabeticalOrder = 2,
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_UH_OH)] =
    {
        .text = gEasyChatWord_UhOh,
        .alphabeticalOrder = 28,
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_WAAAH)] =
    {
        .text = gEasyChatWord_Waaah,
        .alphabeticalOrder = 17,
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_AHAHA)] =
    {
        .text = gEasyChatWord_Ahaha,
        .alphabeticalOrder = 27,
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_OH_QUES)] =
    {
        .text = gEasyChatWord_OhQues,
        .alphabeticalOrder = 52,
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_NOPE)] =
    {
        .text = gEasyChatWord_Nope,
        .alphabeticalOrder = 40,
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_URGH)] =
    {
        .text = gEasyChatWord_Urgh,
        .alphabeticalOrder = 35,
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_HMM)] =
    {
        .text = gEasyChatWord_Hmm,
        .alphabeticalOrder = 25,
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_WHOAH)] =
    {
        .text = gEasyChatWord_Whoah,
        .alphabeticalOrder = 34,
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_WROOOAAR_EXCL)] =
    {
        .text = gEasyChatWord_WroooaarExcl,
        .alphabeticalOrder = 23,
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_WOW)] =
    {
        .text = gEasyChatWord_Wow,
        .alphabeticalOrder = 51,
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_GIGGLE)] =
    {
        .text = gEasyChatWord_Giggle,
        .alphabeticalOrder = 19,
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_SIGH)] =
    {
        .text = gEasyChatWord_Sigh,
        .alphabeticalOrder = 33,
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_UNBELIEVABLE)] =
    {
        .text = gEasyChatWord_Unbelievable,
        .alphabeticalOrder = 50,
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_CRIES)] =
    {
        .text = gEasyChatWord_Cries,
        .alphabeticalOrder = 38,
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_AGREE)] =
    {
        .text = gEasyChatWord_Agree,
        .alphabeticalOrder = 11,
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_EH_QUES)] =
    {
        .text = gEasyChatWord_EhQues,
        .alphabeticalOrder = 37,
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_CRY)] =
    {
        .text = gEasyChatWord_Cry,
        .alphabeticalOrder = 26,
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_EHEHE)] =
    {
        .text = gEasyChatWord_Ehehe,
        .alphabeticalOrder = 48,
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_OI_OI_OI)] =
    {
        .text = gEasyChatWord_OiOiOi,
        .alphabeticalOrder = 59,
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_OH_YEAH)] =
    {
        .text = gEasyChatWord_OhYeah,
        .alphabeticalOrder = 44,
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_OH)] =
    {
        .text = gEasyChatWord_Oh,
        .alphabeticalOrder = 53,
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_OOPS)] =
    {
        .text = gEasyChatWord_Oops,
        .alphabeticalOrder = 49,
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_SHOCKED)] =
    {
        .text = gEasyChatWord_Shocked,
        .alphabeticalOrder = 31,
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_EEK)] =
    {
        .text = gEasyChatWord_Eek,
        .alphabeticalOrder = 12,
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_GRAAAH)] =
    {
        .text = gEasyChatWord_Graaah,
        .alphabeticalOrder = 43,
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_GWAHAHAHA)] =
    {
        .text = gEasyChatWord_Gwahahaha,
        .alphabeticalOrder = 46,
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_WAY)] =
    {
        .text = gEasyChatWord_Way,
        .alphabeticalOrder = 9,
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_TCH)] =
    {
        .text = gEasyChatWord_Tch,
        .alphabeticalOrder = 15,
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_HEHE)] =
    {
        .text = gEasyChatWord_Hehe,
        .alphabeticalOrder = 21,
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_HAH)] =
    {
        .text = gEasyChatWord_Hah,
        .alphabeticalOrder = 57,
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_YUP)] =
    {
        .text = gEasyChatWord_Yup,
        .alphabeticalOrder = 54,
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_HAHAHA)] =
    {
        .text = gEasyChatWord_Hahaha,
        .alphabeticalOrder = 55,
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_AIYEEH)] =
    {
        .text = gEasyChatWord_Aiyeeh,
        .alphabeticalOrder = 13,
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_HIYAH)] =
    {
        .text = gEasyChatWord_Hiyah,
        .alphabeticalOrder = 29,
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_FUFUFU)] =
    {
        .text = gEasyChatWord_Fufufu,
        .alphabeticalOrder = 56,
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_LOL)] =
    {
        .text = gEasyChatWord_Lol,
        .alphabeticalOrder = 10,
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_SNORT)] =
    {
        .text = gEasyChatWord_Snort,
        .alphabeticalOrder = 62,
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_HUMPH)] =
    {
        .text = gEasyChatWord_Humph,
        .alphabeticalOrder = 42,
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_HEHEHE)] =
    {
        .text = gEasyChatWord_Hehehe,
        .alphabeticalOrder = 32,
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_HEH)] =
    {
        .text = gEasyChatWord_Heh,
        .alphabeticalOrder = 61,
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_HOHOHO)] =
    {
        .text = gEasyChatWord_Hohoho,
        .alphabeticalOrder = 30,
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_UH_HUH)] =
    {
        .text = gEasyChatWord_UhHuh,
        .alphabeticalOrder = 22,
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_OH_DEAR)] =
    {
        .text = gEasyChatWord_OhDear,
        .alphabeticalOrder = 36,
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_ARRGH)] =
    {
        .text = gEasyChatWord_Arrgh,
        .alphabeticalOrder = 24,
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_MUFUFU)] =
    {
        .text = gEasyChatWord_Mufufu,
        .alphabeticalOrder = 45,
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_MMM)] =
    {
        .text = gEasyChatWord_Mmm,
        .alphabeticalOrder = 20,
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_OH_KAY)] =
    {
        .text = gEasyChatWord_OhKay,
        .alphabeticalOrder = 14,
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_OKAY)] =
    {
        .text = gEasyChatWord_Okay,
        .alphabeticalOrder = 47,
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_LALALA)] =
    {
        .text = gEasyChatWord_Lalala,
        .alphabeticalOrder = 16,
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_YAY)] =
    {
        .text = gEasyChatWord_Yay,
        .alphabeticalOrder = 60,
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_AWW)] =
    {
        .text = gEasyChatWord_Aww,
        .alphabeticalOrder = 18,
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_WOWEE)] =
    {
        .text = gEasyChatWord_Wowee,
        .alphabeticalOrder = 58,
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_GWAH)] =
    {
        .text = gEasyChatWord_Gwah,
        .alphabeticalOrder = 41,
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_WAHAHAHA)] =
    {
        .text = gEasyChatWord_Wahahaha,
        .alphabeticalOrder = 39,
        .enabled = TRUE,
    },
};
