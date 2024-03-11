const u8 gEasyChatWord_Meets[] = _("RENCONTRER");
const u8 gEasyChatWord_Concede[] = _("CEDE");
const u8 gEasyChatWord_Give[] = _("DONNER");
const u8 gEasyChatWord_Gives[] = _("DONNE");
const u8 gEasyChatWord_Played[] = _("JOUER");
const u8 gEasyChatWord_Plays[] = _("JOUE");
const u8 gEasyChatWord_Collect[] = _("COLLECTIONNE");
const u8 gEasyChatWord_Walking[] = _("MARCHER");
const u8 gEasyChatWord_Walks[] = _("MARCHE");
const u8 gEasyChatWord_Says[] = _("DIS");
const u8 gEasyChatWord_Went[] = _("ALLE");
const u8 gEasyChatWord_Said[] = _("DIT");
const u8 gEasyChatWord_WakeUp[] = _("REVEILLE-TOI");
const u8 gEasyChatWord_WakesUp[] = _("REVEILLE");
const u8 gEasyChatWord_Angers[] = _("ENERVER");
const u8 gEasyChatWord_Teach[] = _("ENSEIGNER");
const u8 gEasyChatWord_Teaches[] = _("ENSEIGNE");
const u8 gEasyChatWord_Please[] = _("S'TE PLAIT");
const u8 gEasyChatWord_Learn[] = _("APPRENDRE");
const u8 gEasyChatWord_Change[] = _("CHANGE");
const u8 gEasyChatWord_Story[] = _("HISTOIRE");
const u8 gEasyChatWord_Trust[] = _("CONFIANCE");
const u8 gEasyChatWord_Lavish[] = _("DEPENSE");
const u8 gEasyChatWord_Listens[] = _("ECOUTER");
const u8 gEasyChatWord_Hearing[] = _("ENTENDRE");
const u8 gEasyChatWord_Trains[] = _("ENTRAINE");
const u8 gEasyChatWord_Choose[] = _("CHOISIS");
const u8 gEasyChatWord_Come[] = _("VIENS");
const u8 gEasyChatWord_Came[] = _("VENU");
const u8 gEasyChatWord_Search[] = _("RECHERCHE");
const u8 gEasyChatWord_Make[] = _("FAIRE");
const u8 gEasyChatWord_Cause[] = _("PROVOQUE");
const u8 gEasyChatWord_Know[] = _("CONNAIT");
const u8 gEasyChatWord_Knows[] = _("CONNAIS");
const u8 gEasyChatWord_Refuse[] = _("REFUSE");
const u8 gEasyChatWord_Stores[] = _("SURPRENDRE");
const u8 gEasyChatWord_Brag[] = _("VANTE");
const u8 gEasyChatWord_Ignorant[] = _("CASSE");
const u8 gEasyChatWord_Thinks[] = _("PENSE");
const u8 gEasyChatWord_Believe[] = _("CROIRE");
const u8 gEasyChatWord_Slide[] = _("GLISSE");
const u8 gEasyChatWord_Eats[] = _("MANGE");
const u8 gEasyChatWord_Use[] = _("UTILISE");
const u8 gEasyChatWord_Uses[] = _("UTILISER");
const u8 gEasyChatWord_Using[] = _("EN UTILISANT");
const u8 gEasyChatWord_Couldnt[] = _("REGARDER");
const u8 gEasyChatWord_Capable[] = _("CAPABLE");
const u8 gEasyChatWord_Disappear[] = _("DISPARAITRE");
const u8 gEasyChatWord_Appear[] = _("APPARAIS");
const u8 gEasyChatWord_Throw[] = _("LANCE");
const u8 gEasyChatWord_Worry[] = _("COURIR");
const u8 gEasyChatWord_Slept[] = _("DORMI");
const u8 gEasyChatWord_Sleep[] = _("DORMIR");
const u8 gEasyChatWord_Release[] = _("LIBERE");
const u8 gEasyChatWord_Drinks[] = _("BOIT");
const u8 gEasyChatWord_Runs[] = _("COURT");
const u8 gEasyChatWord_Run[] = _("JE COURS");
const u8 gEasyChatWord_Works[] = _("TRAVAILLE");
const u8 gEasyChatWord_Working[] = _("TRAVAILLER");
const u8 gEasyChatWord_Talking[] = _("PARLER");
const u8 gEasyChatWord_Talk[] = _("PARLE");
const u8 gEasyChatWord_Sink[] = _("COULE");
const u8 gEasyChatWord_Smack[] = _("TAPE");
const u8 gEasyChatWord_Pretend[] = _("PRETENDS");
const u8 gEasyChatWord_Praise[] = _("LOUE");
const u8 gEasyChatWord_Overdo[] = _("EXAGERE");
const u8 gEasyChatWord_Show[] = _("MONTRER");
const u8 gEasyChatWord_Looks[] = _("REGARDE");
const u8 gEasyChatWord_Sees[] = _("VOIT");
const u8 gEasyChatWord_Seek[] = _("CHERCHE");
const u8 gEasyChatWord_Own[] = _("ECOUTE");
const u8 gEasyChatWord_Take[] = _("PRENDS");
const u8 gEasyChatWord_Allow[] = _("PERMETS");
const u8 gEasyChatWord_Forget[] = _("OUBLIE");
const u8 gEasyChatWord_Forgets[] = _("OUBLIER");
const u8 gEasyChatWord_Appears[] = _("APPARAIT");
const u8 gEasyChatWord_Faint[] = _("EVANOUIS");
const u8 gEasyChatWord_Fainted[] = _("EVANOUI");

const struct EasyChatWordInfo gEasyChatGroup_Actions[] = {
    [EC_INDEX(EC_WORD_MEETS)] =
    {
        .text = gEasyChatWord_Meets,
        .alphabeticalOrder = 10,
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_CONCEDE)] =
    {
        .text = gEasyChatWord_Concede,
        .alphabeticalOrder = 48,
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_GIVE)] =
    {
        .text = gEasyChatWord_Give,
        .alphabeticalOrder = 75,
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_GIVES)] =
    {
        .text = gEasyChatWord_Gives,
        .alphabeticalOrder = 18,
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_PLAYED)] =
    {
        .text = gEasyChatWord_Played,
        .alphabeticalOrder = 54,
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_PLAYS)] =
    {
        .text = gEasyChatWord_Plays,
        .alphabeticalOrder = 46,
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_COLLECT)] =
    {
        .text = gEasyChatWord_Collect,
        .alphabeticalOrder = 37,
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_WALKING)] =
    {
        .text = gEasyChatWord_Walking,
        .alphabeticalOrder = 1,
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_WALKS)] =
    {
        .text = gEasyChatWord_Walks,
        .alphabeticalOrder = 19,
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_SAYS)] =
    {
        .text = gEasyChatWord_Says,
        .alphabeticalOrder = 69,
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_WENT)] =
    {
        .text = gEasyChatWord_Went,
        .alphabeticalOrder = 26,
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_SAID)] =
    {
        .text = gEasyChatWord_Said,
        .alphabeticalOrder = 6,
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_WAKE_UP)] =
    {
        .text = gEasyChatWord_WakeUp,
        .alphabeticalOrder = 21,
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_WAKES_UP)] =
    {
        .text = gEasyChatWord_WakesUp,
        .alphabeticalOrder = 33,
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_ANGERS)] =
    {
        .text = gEasyChatWord_Angers,
        .alphabeticalOrder = 32,
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_TEACH)] =
    {
        .text = gEasyChatWord_Teach,
        .alphabeticalOrder = 61,
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_TEACHES)] =
    {
        .text = gEasyChatWord_Teaches,
        .alphabeticalOrder = 50,
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_PLEASE)] =
    {
        .text = gEasyChatWord_Please,
        .alphabeticalOrder = 55,
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_LEARN)] =
    {
        .text = gEasyChatWord_Learn,
        .alphabeticalOrder = 39,
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_CHANGE)] =
    {
        .text = gEasyChatWord_Change,
        .alphabeticalOrder = 22,
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_STORY)] =
    {
        .text = gEasyChatWord_Story,
        .alphabeticalOrder = 9,
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_TRUST)] =
    {
        .text = gEasyChatWord_Trust,
        .alphabeticalOrder = 47,
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_LAVISH)] =
    {
        .text = gEasyChatWord_Lavish,
        .alphabeticalOrder = 11,
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_LISTENS)] =
    {
        .text = gEasyChatWord_Listens,
        .alphabeticalOrder = 3,
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_HEARING)] =
    {
        .text = gEasyChatWord_Hearing,
        .alphabeticalOrder = 2,
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_TRAINS)] =
    {
        .text = gEasyChatWord_Trains,
        .alphabeticalOrder = 51,
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_CHOOSE)] =
    {
        .text = gEasyChatWord_Choose,
        .alphabeticalOrder = 52,
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_COME)] =
    {
        .text = gEasyChatWord_Come,
        .alphabeticalOrder = 70,
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_CAME)] =
    {
        .text = gEasyChatWord_Came,
        .alphabeticalOrder = 23,
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_SEARCH)] =
    {
        .text = gEasyChatWord_Search,
        .alphabeticalOrder = 44,
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_MAKE)] =
    {
        .text = gEasyChatWord_Make,
        .alphabeticalOrder = 14,
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_CAUSE)] =
    {
        .text = gEasyChatWord_Cause,
        .alphabeticalOrder = 16,
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_KNOW)] =
    {
        .text = gEasyChatWord_Know,
        .alphabeticalOrder = 15,
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_KNOWS)] =
    {
        .text = gEasyChatWord_Knows,
        .alphabeticalOrder = 24,
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_REFUSE)] =
    {
        .text = gEasyChatWord_Refuse,
        .alphabeticalOrder = 25,
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_STORES)] =
    {
        .text = gEasyChatWord_Stores,
        .alphabeticalOrder = 77,
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_BRAG)] =
    {
        .text = gEasyChatWord_Brag,
        .alphabeticalOrder = 76,
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_IGNORANT)] =
    {
        .text = gEasyChatWord_Ignorant,
        .alphabeticalOrder = 65,
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_THINKS)] =
    {
        .text = gEasyChatWord_Thinks,
        .alphabeticalOrder = 30,
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_BELIEVE)] =
    {
        .text = gEasyChatWord_Believe,
        .alphabeticalOrder = 40,
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_SLIDE)] =
    {
        .text = gEasyChatWord_Slide,
        .alphabeticalOrder = 20,
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_EATS)] =
    {
        .text = gEasyChatWord_Eats,
        .alphabeticalOrder = 56,
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_USE)] =
    {
        .text = gEasyChatWord_Use,
        .alphabeticalOrder = 5,
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_USES)] =
    {
        .text = gEasyChatWord_Uses,
        .alphabeticalOrder = 4,
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_USING)] =
    {
        .text = gEasyChatWord_Using,
        .alphabeticalOrder = 49,
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_COULDN_T)] =
    {
        .text = gEasyChatWord_Couldnt,
        .alphabeticalOrder = 53,
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_CAPABLE)] =
    {
        .text = gEasyChatWord_Capable,
        .alphabeticalOrder = 64,
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_DISAPPEAR)] =
    {
        .text = gEasyChatWord_Disappear,
        .alphabeticalOrder = 41,
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_APPEAR)] =
    {
        .text = gEasyChatWord_Appear,
        .alphabeticalOrder = 8,
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_THROW)] =
    {
        .text = gEasyChatWord_Throw,
        .alphabeticalOrder = 7,
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_WORRY)] =
    {
        .text = gEasyChatWord_Worry,
        .alphabeticalOrder = 66,
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_SLEPT)] =
    {
        .text = gEasyChatWord_Slept,
        .alphabeticalOrder = 73,
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_SLEEP)] =
    {
        .text = gEasyChatWord_Sleep,
        .alphabeticalOrder = 74,
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_RELEASE)] =
    {
        .text = gEasyChatWord_Release,
        .alphabeticalOrder = 60,
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_DRINKS)] =
    {
        .text = gEasyChatWord_Drinks,
        .alphabeticalOrder = 59,
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_RUNS)] =
    {
        .text = gEasyChatWord_Runs,
        .alphabeticalOrder = 38,
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_RUN)] =
    {
        .text = gEasyChatWord_Run,
        .alphabeticalOrder = 72,
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_WORKS)] =
    {
        .text = gEasyChatWord_Works,
        .alphabeticalOrder = 71,
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_WORKING)] =
    {
        .text = gEasyChatWord_Working,
        .alphabeticalOrder = 63,
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_TALKING)] =
    {
        .text = gEasyChatWord_Talking,
        .alphabeticalOrder = 31,
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_TALK)] =
    {
        .text = gEasyChatWord_Talk,
        .alphabeticalOrder = 29,
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_SINK)] =
    {
        .text = gEasyChatWord_Sink,
        .alphabeticalOrder = 34,
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_SMACK)] =
    {
        .text = gEasyChatWord_Smack,
        .alphabeticalOrder = 67,
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_PRETEND)] =
    {
        .text = gEasyChatWord_Pretend,
        .alphabeticalOrder = 45,
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_PRAISE)] =
    {
        .text = gEasyChatWord_Praise,
        .alphabeticalOrder = 0,
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_OVERDO)] =
    {
        .text = gEasyChatWord_Overdo,
        .alphabeticalOrder = 13,
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_SHOW)] =
    {
        .text = gEasyChatWord_Show,
        .alphabeticalOrder = 12,
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_LOOKS)] =
    {
        .text = gEasyChatWord_Looks,
        .alphabeticalOrder = 17,
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_SEES)] =
    {
        .text = gEasyChatWord_Sees,
        .alphabeticalOrder = 35,
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_SEEK)] =
    {
        .text = gEasyChatWord_Seek,
        .alphabeticalOrder = 62,
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_OWN)] =
    {
        .text = gEasyChatWord_Own,
        .alphabeticalOrder = 57,
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_TAKE)] =
    {
        .text = gEasyChatWord_Take,
        .alphabeticalOrder = 58,
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_ALLOW)] =
    {
        .text = gEasyChatWord_Allow,
        .alphabeticalOrder = 42,
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_FORGET)] =
    {
        .text = gEasyChatWord_Forget,
        .alphabeticalOrder = 43,
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_FORGETS)] =
    {
        .text = gEasyChatWord_Forgets,
        .alphabeticalOrder = 36,
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_APPEARS)] =
    {
        .text = gEasyChatWord_Appears,
        .alphabeticalOrder = 28,
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_FAINT)] =
    {
        .text = gEasyChatWord_Faint,
        .alphabeticalOrder = 27,
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_FAINTED)] =
    {
        .text = gEasyChatWord_Fainted,
        .alphabeticalOrder = 68,
        .enabled = TRUE,
    },
};