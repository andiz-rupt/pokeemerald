const u8 gEasyChatWord_Thanks[] = _("MERCI BIEN!");
const u8 gEasyChatWord_Yes[] = _("OUI");
const u8 gEasyChatWord_HereGoes[] = _("DEBUTONS");
const u8 gEasyChatWord_HereICome[] = _("ME VOILA");
const u8 gEasyChatWord_HereItIs[] = _("VOICI");
const u8 gEasyChatWord_Yeah[] = _("OUAIS");
const u8 gEasyChatWord_Welcome[] = _("BIENVENUE");
const u8 gEasyChatWord_Oi[] = _("CA VA?");
const u8 gEasyChatWord_HowDo[] = _("SECOUE-MOI");
const u8 gEasyChatWord_Congrats[] = _("FELICITATION");
const u8 gEasyChatWord_GiveMe[] = _("DONNE-MOI");
const u8 gEasyChatWord_Sorry[] = _("EXCUSE-MOI");
const u8 gEasyChatWord_Apologize[] = _("ATTENTION");
const u8 gEasyChatWord_Forgive[] = _("PARDON");
const u8 gEasyChatWord_HeyThere[] = _("HE TOI!");
const u8 gEasyChatWord_Hello[] = _("SALUT");
const u8 gEasyChatWord_GoodBye[] = _("AU REVOIR");
const u8 gEasyChatWord_ThankYou[] = _("MERCI");
const u8 gEasyChatWord_IveArrived[] = _("JE SUIS LA");
const u8 gEasyChatWord_Pardon[] = _("C'EST PARTI");
const u8 gEasyChatWord_Excuse[] = _("BIEN");
const u8 gEasyChatWord_SeeYa[] = _("A PLUS");
const u8 gEasyChatWord_ExcuseMe[] = _("MONTRE-MOI");
const u8 gEasyChatWord_WellThen[] = _("HE BIEN");
const u8 gEasyChatWord_GoAhead[] = _("VAS-Y");
const u8 gEasyChatWord_Appreciate[] = _("QUELLE JOIE");
const u8 gEasyChatWord_HeyQues[] = _("JE VOIS");
const u8 gEasyChatWord_WhatsUpQues[] = _("CA VA BIEN?");
const u8 gEasyChatWord_HuhQues[] = _("HEIN?");
const u8 gEasyChatWord_No[] = _("NON");
const u8 gEasyChatWord_Hi[] = _("COUCOU");
const u8 gEasyChatWord_YeahYeah[] = _("OUAIS OUAIS");
const u8 gEasyChatWord_ByeBye[] = _("CIAO!");
const u8 gEasyChatWord_MeetYou[] = _("ENCHANTE");
const u8 gEasyChatWord_Hey[] = _("HE");
const u8 gEasyChatWord_Smell[] = _("BONJOUR");
const u8 gEasyChatWord_Listening[] = _("A PLUS!");
const u8 gEasyChatWord_HooHah[] = _("WOO-AH");
const u8 gEasyChatWord_Yahoo[] = _("HOUHOU");
const u8 gEasyChatWord_Yo[] = _("YO");
const u8 gEasyChatWord_ComeOver[] = _("VIENS LA");
const u8 gEasyChatWord_CountOn[] = _("C'EST CA");

const struct EasyChatWordInfo gEasyChatGroup_Greetings[] = {
    [EC_INDEX(EC_WORD_THANKS)] =
    {
        .text = gEasyChatWord_Thanks,
        .alphabeticalOrder = 21,
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_YES)] =
    {
        .text = gEasyChatWord_Yes,
        .alphabeticalOrder = 36,
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_HERE_GOES)] =
    {
        .text = gEasyChatWord_HereGoes,
        .alphabeticalOrder = 12,
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_HERE_I_COME)] =
    {
        .text = gEasyChatWord_HereICome,
        .alphabeticalOrder = 16,
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_HERE_IT_IS)] =
    {
        .text = gEasyChatWord_HereItIs,
        .alphabeticalOrder = 20,
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_YEAH)] =
    {
        .text = gEasyChatWord_Yeah,
        .alphabeticalOrder = 6,
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_WELCOME)] =
    {
        .text = gEasyChatWord_Welcome,
        .alphabeticalOrder = 35,
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_OI)] =
    {
        .text = gEasyChatWord_Oi,
        .alphabeticalOrder = 41,
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_HOW_DO)] =
    {
        .text = gEasyChatWord_HowDo,
        .alphabeticalOrder = 19,
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_CONGRATS)] =
    {
        .text = gEasyChatWord_Congrats,
        .alphabeticalOrder = 27,
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_GIVE_ME)] =
    {
        .text = gEasyChatWord_GiveMe,
        .alphabeticalOrder = 7,
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_SORRY)] =
    {
        .text = gEasyChatWord_Sorry,
        .alphabeticalOrder = 32,
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_APOLOGIZE)] =
    {
        .text = gEasyChatWord_Apologize,
        .alphabeticalOrder = 30,
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_FORGIVE)] =
    {
        .text = gEasyChatWord_Forgive,
        .alphabeticalOrder = 2,
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_HEY_THERE)] =
    {
        .text = gEasyChatWord_HeyThere,
        .alphabeticalOrder = 10,
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_HELLO)] =
    {
        .text = gEasyChatWord_Hello,
        .alphabeticalOrder = 33,
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_GOOD_BYE)] =
    {
        .text = gEasyChatWord_GoodBye,
        .alphabeticalOrder = 11,
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_THANK_YOU)] =
    {
        .text = gEasyChatWord_ThankYou,
        .alphabeticalOrder = 9,
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_I_VE_ARRIVED)] =
    {
        .text = gEasyChatWord_IveArrived,
        .alphabeticalOrder = 34,
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_PARDON)] =
    {
        .text = gEasyChatWord_Pardon,
        .alphabeticalOrder = 23,
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_EXCUSE)] =
    {
        .text = gEasyChatWord_Excuse,
        .alphabeticalOrder = 14,
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_SEE_YA)] =
    {
        .text = gEasyChatWord_SeeYa,
        .alphabeticalOrder = 28,
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_EXCUSE_ME)] =
    {
        .text = gEasyChatWord_ExcuseMe,
        .alphabeticalOrder = 38,
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_WELL_THEN)] =
    {
        .text = gEasyChatWord_WellThen,
        .alphabeticalOrder = 18,
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_GO_AHEAD)] =
    {
        .text = gEasyChatWord_GoAhead,
        .alphabeticalOrder = 26,
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_APPRECIATE)] =
    {
        .text = gEasyChatWord_Appreciate,
        .alphabeticalOrder = 3,
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_HEY_QUES)] =
    {
        .text = gEasyChatWord_HeyQues,
        .alphabeticalOrder = 17,
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_WHAT_S_UP_QUES)] =
    {
        .text = gEasyChatWord_WhatsUpQues,
        .alphabeticalOrder = 0,
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_HUH_QUES)] =
    {
        .text = gEasyChatWord_HuhQues,
        .alphabeticalOrder = 22,
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_NO)] =
    {
        .text = gEasyChatWord_No,
        .alphabeticalOrder = 29,
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_HI)] =
    {
        .text = gEasyChatWord_Hi,
        .alphabeticalOrder = 5,
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_YEAH_YEAH)] =
    {
        .text = gEasyChatWord_YeahYeah,
        .alphabeticalOrder = 31,
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_BYE_BYE)] =
    {
        .text = gEasyChatWord_ByeBye,
        .alphabeticalOrder = 1,
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_MEET_YOU)] =
    {
        .text = gEasyChatWord_MeetYou,
        .alphabeticalOrder = 13,
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_HEY)] =
    {
        .text = gEasyChatWord_Hey,
        .alphabeticalOrder = 25,
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_SMELL)] =
    {
        .text = gEasyChatWord_Smell,
        .alphabeticalOrder = 15,
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_LISTENING)] =
    {
        .text = gEasyChatWord_Listening,
        .alphabeticalOrder = 8,
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_HOO_HAH)] =
    {
        .text = gEasyChatWord_HooHah,
        .alphabeticalOrder = 24,
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_YAHOO)] =
    {
        .text = gEasyChatWord_Yahoo,
        .alphabeticalOrder = 40,
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_YO)] =
    {
        .text = gEasyChatWord_Yo,
        .alphabeticalOrder = 4,
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_COME_OVER)] =
    {
        .text = gEasyChatWord_ComeOver,
        .alphabeticalOrder = 37,
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_COUNT_ON)] =
    {
        .text = gEasyChatWord_CountOn,
        .alphabeticalOrder = 39,
        .enabled = TRUE,
    },
};
