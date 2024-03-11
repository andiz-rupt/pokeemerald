const u8 gEasyChatWord_Idol[] = _("STAR");
const u8 gEasyChatWord_Anime[] = _("DESSIN ANIME");
const u8 gEasyChatWord_Song[] = _("CHANSON");
const u8 gEasyChatWord_Movie[] = _("CINEMA");
const u8 gEasyChatWord_Sweets[] = _("BONBONS");
const u8 gEasyChatWord_Chat[] = _("DISCUTER");
const u8 gEasyChatWord_ChildsPlay[] = _("JEU D'ENFANT");
const u8 gEasyChatWord_Toys[] = _("JOUETS");
const u8 gEasyChatWord_Music[] = _("MUSIQUE");
const u8 gEasyChatWord_Cards[] = _("CARTES");
const u8 gEasyChatWord_Shopping[] = _("SHOPPING");
const u8 gEasyChatWord_Camera[] = _("PHOTOGRAPHIE");
const u8 gEasyChatWord_Viewing[] = _("FOYER");
const u8 gEasyChatWord_Spectator[] = _("THEATRE");
const u8 gEasyChatWord_Gourmet[] = _("CUISINE");
const u8 gEasyChatWord_Game[] = _("JEUX");
const u8 gEasyChatWord_Rpg[] = _("JEUX DE ROLE");
const u8 gEasyChatWord_Collection[] = _("COLLECTION");
const u8 gEasyChatWord_Complete[] = _("JEUX VIDEO");
const u8 gEasyChatWord_Magazine[] = _("MAGAZINES");
const u8 gEasyChatWord_Walk[] = _("COURSE");
const u8 gEasyChatWord_Bike[] = _("VELO");
const u8 gEasyChatWord_Hobby[] = _("HOBBY");
const u8 gEasyChatWord_Sports[] = _("SPORT");
const u8 gEasyChatWord_Software[] = _("LOGICIELS");
const u8 gEasyChatWord_Songs[] = _("CHANTER");
const u8 gEasyChatWord_Diet[] = _("DIETETIQUE");
const u8 gEasyChatWord_Treasure[] = _("TRESORS");
const u8 gEasyChatWord_Travel[] = _("VOYAGES");
const u8 gEasyChatWord_Dance[] = _("DANSE");
const u8 gEasyChatWord_Channel[] = _("CHAINE");
const u8 gEasyChatWord_Making[] = _("BRICOLAGE");
const u8 gEasyChatWord_Fishing[] = _("PECHE");
const u8 gEasyChatWord_Date[] = _("RENDEZ-VOUS");
const u8 gEasyChatWord_Design[] = _("DESSIN");
const u8 gEasyChatWord_Locomotive[] = _("PETIT TRAIN");
const u8 gEasyChatWord_PlushDoll[] = _("NOUNOURS");
const u8 gEasyChatWord_Pc[] = _("INFORMATIQUE");
const u8 gEasyChatWord_Flowers[] = _("JARDINAGE");
const u8 gEasyChatWord_Hero[] = _("HEROS");
const u8 gEasyChatWord_Nap[] = _("SIESTE");
const u8 gEasyChatWord_Heroine[] = _("HEROINE");
const u8 gEasyChatWord_Fashion[] = _("MODE");
const u8 gEasyChatWord_Adventure[] = _("AVENTURE");
const u8 gEasyChatWord_Board[] = _("BATEAU");
const u8 gEasyChatWord_Ball[] = _("FOOTBALL");
const u8 gEasyChatWord_Book[] = _("LIVRE");
const u8 gEasyChatWord_Festival[] = _("FESTIVALS");
const u8 gEasyChatWord_Comics[] = _("BD");
const u8 gEasyChatWord_Holiday[] = _("VACANCES");
const u8 gEasyChatWord_Plans[] = _("LECTURE");
const u8 gEasyChatWord_Trendy[] = _("A LA MODE");
const u8 gEasyChatWord_Vacation[] = _("TOURISME");
const u8 gEasyChatWord_Look[] = _("COCOONING");

const struct EasyChatWordInfo gEasyChatGroup_Hobbies[] = {
    [EC_INDEX(EC_WORD_IDOL)] =
    {
        .text = gEasyChatWord_Idol,
        .alphabeticalOrder = 51,
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_ANIME)] =
    {
        .text = gEasyChatWord_Anime,
        .alphabeticalOrder = 43,
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_SONG)] =
    {
        .text = gEasyChatWord_Song,
        .alphabeticalOrder = 44,
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_MOVIE)] =
    {
        .text = gEasyChatWord_Movie,
        .alphabeticalOrder = 48,
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_SWEETS)] =
    {
        .text = gEasyChatWord_Sweets,
        .alphabeticalOrder = 4,
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_CHAT)] =
    {
        .text = gEasyChatWord_Chat,
        .alphabeticalOrder = 31,
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_CHILD_S_PLAY)] =
    {
        .text = gEasyChatWord_ChildsPlay,
        .alphabeticalOrder = 9,
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_TOYS)] =
    {
        .text = gEasyChatWord_Toys,
        .alphabeticalOrder = 30,
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_MUSIC)] =
    {
        .text = gEasyChatWord_Music,
        .alphabeticalOrder = 2,
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_CARDS)] =
    {
        .text = gEasyChatWord_Cards,
        .alphabeticalOrder = 25,
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_SHOPPING)] =
    {
        .text = gEasyChatWord_Shopping,
        .alphabeticalOrder = 3,
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_CAMERA)] =
    {
        .text = gEasyChatWord_Camera,
        .alphabeticalOrder = 53,
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_VIEWING)] =
    {
        .text = gEasyChatWord_Viewing,
        .alphabeticalOrder = 17,
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_SPECTATOR)] =
    {
        .text = gEasyChatWord_Spectator,
        .alphabeticalOrder = 20,
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_GOURMET)] =
    {
        .text = gEasyChatWord_Gourmet,
        .alphabeticalOrder = 14,
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_GAME)] =
    {
        .text = gEasyChatWord_Game,
        .alphabeticalOrder = 29,
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_RPG)] =
    {
        .text = gEasyChatWord_Rpg,
        .alphabeticalOrder = 34,
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_COLLECTION)] =
    {
        .text = gEasyChatWord_Collection,
        .alphabeticalOrder = 1,
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_COMPLETE)] =
    {
        .text = gEasyChatWord_Complete,
        .alphabeticalOrder = 26,
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_MAGAZINE)] =
    {
        .text = gEasyChatWord_Magazine,
        .alphabeticalOrder = 5,
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_WALK)] =
    {
        .text = gEasyChatWord_Walk,
        .alphabeticalOrder = 47,
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_BIKE)] =
    {
        .text = gEasyChatWord_Bike,
        .alphabeticalOrder = 45,
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_HOBBY)] =
    {
        .text = gEasyChatWord_Hobby,
        .alphabeticalOrder = 12,
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_SPORTS)] =
    {
        .text = gEasyChatWord_Sports,
        .alphabeticalOrder = 41,
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_SOFTWARE)] =
    {
        .text = gEasyChatWord_Software,
        .alphabeticalOrder = 39,
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_SONGS)] =
    {
        .text = gEasyChatWord_Songs,
        .alphabeticalOrder = 22,
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_DIET)] =
    {
        .text = gEasyChatWord_Diet,
        .alphabeticalOrder = 37,
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_TREASURE)] =
    {
        .text = gEasyChatWord_Treasure,
        .alphabeticalOrder = 38,
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_TRAVEL)] =
    {
        .text = gEasyChatWord_Travel,
        .alphabeticalOrder = 6,
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_DANCE)] =
    {
        .text = gEasyChatWord_Dance,
        .alphabeticalOrder = 15,
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_CHANNEL)] =
    {
        .text = gEasyChatWord_Channel,
        .alphabeticalOrder = 16,
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_MAKING)] =
    {
        .text = gEasyChatWord_Making,
        .alphabeticalOrder = 18,
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_FISHING)] =
    {
        .text = gEasyChatWord_Fishing,
        .alphabeticalOrder = 7,
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_DATE)] =
    {
        .text = gEasyChatWord_Date,
        .alphabeticalOrder = 50,
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_DESIGN)] =
    {
        .text = gEasyChatWord_Design,
        .alphabeticalOrder = 46,
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_LOCOMOTIVE)] =
    {
        .text = gEasyChatWord_Locomotive,
        .alphabeticalOrder = 24,
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_PLUSH_DOLL)] =
    {
        .text = gEasyChatWord_PlushDoll,
        .alphabeticalOrder = 19,
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_PC)] =
    {
        .text = gEasyChatWord_Pc,
        .alphabeticalOrder = 42,
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_FLOWERS)] =
    {
        .text = gEasyChatWord_Flowers,
        .alphabeticalOrder = 8,
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_HERO)] =
    {
        .text = gEasyChatWord_Hero,
        .alphabeticalOrder = 36,
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_NAP)] =
    {
        .text = gEasyChatWord_Nap,
        .alphabeticalOrder = 32,
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_HEROINE)] =
    {
        .text = gEasyChatWord_Heroine,
        .alphabeticalOrder = 35,
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_FASHION)] =
    {
        .text = gEasyChatWord_Fashion,
        .alphabeticalOrder = 11,
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_ADVENTURE)] =
    {
        .text = gEasyChatWord_Adventure,
        .alphabeticalOrder = 33,
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_BOARD)] =
    {
        .text = gEasyChatWord_Board,
        .alphabeticalOrder = 10,
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_BALL)] =
    {
        .text = gEasyChatWord_Ball,
        .alphabeticalOrder = 40,
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_BOOK)] =
    {
        .text = gEasyChatWord_Book,
        .alphabeticalOrder = 23,
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_FESTIVAL)] =
    {
        .text = gEasyChatWord_Festival,
        .alphabeticalOrder = 0,
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_COMICS)] =
    {
        .text = gEasyChatWord_Comics,
        .alphabeticalOrder = 13,
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_HOLIDAY)] =
    {
        .text = gEasyChatWord_Holiday,
        .alphabeticalOrder = 52,
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_PLANS)] =
    {
        .text = gEasyChatWord_Plans,
        .alphabeticalOrder = 27,
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_TRENDY)] =
    {
        .text = gEasyChatWord_Trendy,
        .alphabeticalOrder = 49,
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_VACATION)] =
    {
        .text = gEasyChatWord_Vacation,
        .alphabeticalOrder = 21,
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_LOOK)] =
    {
        .text = gEasyChatWord_Look,
        .alphabeticalOrder = 28,
        .enabled = TRUE,
    },
};
