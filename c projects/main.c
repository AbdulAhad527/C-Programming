#include <windows.h>
#include <stdio.h>
#include <mmsystem.h>


void playAudio(char path[]) {
    char cmd[300];
    sprintf(cmd, "open \"%s\" type mpegvideo alias quran", path);
    mciSendString(cmd, NULL, 0, NULL);
    mciSendString("play quran wait", NULL, 0, NULL);
    mciSendString("close quran", NULL, 0, NULL);
}

struct Surah {
    int number;
    char name[30];
    char waja[300];
    char background[300];
    char topics[300];
    int ayat;
    int ruku;
    char audio[200];
};



int main() {
	sos:
    system("color 3");
  struct Surah surahs[114] = {
    {1, "Al-Fatiha", "Named because it opens the Quran.",
     "Revealed in Makkah as a complete prayer.",
     "Guidance, worship, mercy, accountability.",
     7, 1, "sound/001-al-fatihah.mp3"},

    {2, "Al-Baqarah", "Named after the incident of the cow.",
     "Revealed in Madinah to guide Muslim society.",
     "Faith, law, worship, jihad, social system.",
     286, 40, "sound/002-al-baqarah.mp3"},

    {3, "Aal-e-Imran", "Named after the family of Imran.",
     "Revealed during Christian delegations.",
     "Truth, patience, unity, faith.",
     200, 20, "sound/003-al-imran.mp3"},

    {4, "An-Nisa", "Named due to laws regarding women.",
     "Revealed in Madinah for social reform.",
     "Justice, women rights, inheritance.",
     176, 24, "sound/004-an-nisa.mp3"},

    {5, "Al-Ma'idah", "Named after the table spread miracle.",
     "Revealed near completion of Islam.",
     "Law, halal, haram, justice.",
     120, 16, "sound/005-al-maidah.mp3"},

    {6, "Al-An'am", "Named after the livestock for sacrifices.",
     "Revealed in Makkah.",
     "Monotheism, prophethood, law, ethics.",
     165, 20, "sound/006-al-anam.mp3"},

    {7, "Al-A'raf", "Named after the heights mentioned in verse 46.",
     "Revealed in Makkah.",
     "Stories of past prophets, obedience, guidance.",
     206, 24, "sound/007-al-araf.mp3"},

    {8, "Al-Anfal", "Named after the spoils of war.",
     "Revealed in Madinah.",
     "Jihad, faith, obedience, laws of war.",
     75, 10, "sound/008-al-anfal.mp3"},

    {9, "At-Tawbah", "Named after repentance.",
     "Revealed in Madinah.",
     "Faith, punishment, war, hypocrisy, obedience.",
     129, 16, "sound/009-at-taubah.mp3"},

    {10, "Yunus", "Named after Prophet Yunus (A.S).",
     "Revealed in Makkah.",
     "Monotheism, patience, reward, punishment.",
     109, 11, "sound/010-yunus.mp3"},

    {11, "Hud", "Named after Prophet Hud (A.S).",
     "Revealed in Makkah to strengthen believers.",
     "Patience, truth, consequences of disobedience.",
     123, 10, "sound/011-hud.mp3"},

    {12, "Yusuf", "Named after Prophet Yusuf (A.S).",
     "Revealed in Makkah as a single story.",
     "Patience, trust in Allah, forgiveness.",
     111, 12, "sound/012-yusuf.mp3"},

    {13, "Ar-Ra'd", "Named after thunder mentioned in verse 13.",
     "Revealed in Madinah.",
     "Power of Allah, truth, accountability.",
     43, 6, "sound/013-ar-rad.mp3"},

    {14, "Ibrahim", "Named after Prophet Ibrahim (A.S).",
     "Revealed in Makkah.",
     "Gratitude, warnings, blessings of Allah.",
     52, 7, "sound/014-ibrahim.mp3"},

    {15, "Al-Hijr", "Named after the people of Hijr.",
     "Revealed in Makkah.",
     "Protection of Quran, fate of rejecters.",
     99, 6, "sound/015-al-hijr.mp3"},

    {16, "An-Nahl", "Named after the bee.",
     "Revealed in Makkah.",
     "Blessings of Allah, gratitude, guidance.",
     128, 16, "sound/016-an-nahl.mp3"},

    {17, "Al-Isra", "Named after the night journey of Prophet (ﷺ).",
     "Revealed in Makkah.",
     "Moral values, worship, social justice.",
     111, 12, "sound/017-al-isra.mp3"},

    {18, "Al-Kahf", "Named after the cave.",
     "Revealed in Makkah.",
     "Trials of faith, knowledge, power, wealth.",
     110, 12, "sound/018-al-kahf.mp3"},

    {19, "Maryam", "Named after Maryam (A.S).",
     "Revealed in Makkah.",
     "Mercy, miracles, stories of prophets.",
     98, 6, "sound/019-maryam.mp3"},

    {20, "Ta-Ha", "Named after the Arabic letters Ta and Ha.",
     "Revealed in Makkah.",
     "Story of Musa (A.S), guidance, prayer.",
     135, 8, "sound/020-ta-ha.mp3"},
     
    {21, "Al-Anbiya", "Named because it mentions many prophets.",
     "Revealed in Makkah.",
     "Prophethood, accountability, mercy.",
     112, 7, "sound/021-al-anbiya.mp3"},

    {22, "Al-Hajj", "Named after the obligation of Hajj.",
     "Revealed in Makkah and Madinah.",
     "Worship, sacrifice, struggle in Allah's way.",
     78, 10, "sound/022-al-hajj.mp3"},

    {23, "Al-Mu'minun", "Named after qualities of true believers.",
     "Revealed in Makkah.",
     "Faith, morality, success of believers.",
     118, 6, "sound/023-al-muminun.mp3"},

    {24, "An-Nur", "Named after the verse of light.",
     "Revealed in Madinah.",
     "Modesty, family laws, morality.",
     64, 9, "sound/024-an-nur.mp3"},

    {25, "Al-Furqan", "Named as the criterion between right and wrong.",
     "Revealed in Makkah.",
     "Truth of Quran, character of believers.",
     77, 6, "sound/025-al-furqan.mp3"},

    {26, "Ash-Shu'ara", "Named after poets mentioned in the Surah.",
     "Revealed in Makkah.",
     "Stories of prophets, truth vs falsehood.",
     227, 11, "sound/026-ash-shuara.mp3"},

    {27, "An-Naml", "Named after the ant.",
     "Revealed in Makkah.",
     "Stories of Sulaiman (A.S), signs of Allah.",
     93, 7, "sound/027-an-naml.mp3"},

    {28, "Al-Qasas", "Named due to detailed narratives.",
     "Revealed in Makkah.",
     "Story of Musa (A.S), justice.",
     88, 9, "sound/028-al-qasas.mp3"},

    {29, "Al-Ankabut", "Named after the spider.",
     "Revealed in Makkah.",
     "Tests of faith, patience.",
     69, 7, "sound/029-al-ankabut.mp3"},

    {30, "Ar-Rum", "Named after the Romans.",
     "Revealed in Makkah.",
     "Signs of Allah, victory after defeat.",
     60, 6, "sound/030-ar-rum.mp3"},

    {31, "Luqman", "Named after Luqman the Wise.",
     "Revealed in Makkah.",
     "Wisdom, gratitude, good conduct.",
     34, 4, "sound/031-luqman.mp3"},

    {32, "As-Sajdah", "Named due to a verse of prostration.",
     "Revealed in Makkah.",
     "Creation, resurrection, faith.",
     30, 3, "sound/032-as-sajdah.mp3"},

    {33, "Al-Ahzab", "Named after the confederate armies.",
     "Revealed in Madinah.",
     "Battle of Ahzab, social laws.",
     73, 9, "sound/033-al-ahzab.mp3"},

    {34, "Saba", "Named after the people of Saba.",
     "Revealed in Makkah.",
     "Gratitude, prosperity, downfall.",
     54, 6, "sound/034-saba.mp3"},

    {35, "Fatir", "Named as Allah the Creator.",
     "Revealed in Makkah.",
     "Creation, mercy, accountability.",
     45, 5, "sound/035-fatir.mp3"},

    {36, "Ya-Sin", "Named after mysterious letters.",
     "Revealed in Makkah.",
     "Hereafter, prophethood, signs of Allah.",
     83, 5, "sound/036-ya-sin.mp3"},

    {37, "As-Saffat", "Named after angels standing in rows.",
     "Revealed in Makkah.",
     "Angels, prophets, accountability.",
     182, 5, "sound/037-as-saffat.mp3"},

    {38, "Sad", "Named after the opening letter.",
     "Revealed in Makkah.",
     "Trials of prophets, patience.",
     88, 5, "sound/038-sad.mp3"},

    {39, "Az-Zumar", "Named after groups on Judgment Day.",
     "Revealed in Makkah.",
     "Sincerity, monotheism.",
     75, 8, "sound/039-az-zumar.mp3"},

    {40, "Ghafir", "Named after Allah as the Forgiver.",
     "Revealed in Makkah.",
     "Forgiveness, warning to disbelievers.",
     85, 9, "sound/040-ghafir.mp3"},

    {41, "Fussilat", "Named due to clearly explained verses.",
     "Revealed in Makkah.",
     "Clear Quranic guidance.",
     54, 6, "sound/041-fussilat.mp3"},

    {42, "Ash-Shura", "Named after consultation principle.",
     "Revealed in Makkah.",
     "Unity, consultation, revelation.",
     53, 5, "sound/042-ash-shura.mp3"},

    {43, "Az-Zukhruf", "Named after worldly ornaments.",
     "Revealed in Makkah.",
     "False pride, truth of Islam.",
     89, 7, "sound/043-az-zukhruf.mp3"},

    {44, "Ad-Dukhan", "Named after the smoke.",
     "Revealed in Makkah.",
     "Warnings, punishment of nations.",
     59, 3, "sound/044-ad-dukhan.mp3"},

    {45, "Al-Jathiyah", "Named after kneeling nations.",
     "Revealed in Makkah.",
     "Signs of Allah, judgment.",
     37, 4, "sound/045-al-jathiyah.mp3"},

    {46, "Al-Ahqaf", "Named after sand dunes.",
     "Revealed in Makkah.",
     "Story of Aad, obedience.",
     35, 4, "sound/046-al-ahqaf.mp3"},

    {47, "Muhammad", "Named after the Prophet ﷺ.",
     "Revealed in Madinah.",
     "Jihad, faith, hypocrisy.",
     38, 4, "sound/047-muhammad.mp3"},

    {48, "Al-Fath", "Named after the victory.",
     "Revealed after Treaty of Hudaybiyyah.",
     "Victory, peace, Allah’s help.",
     29, 4, "sound/048-al-fath.mp3"},

    {49, "Al-Hujurat", "Named after rooms of the Prophet ﷺ.",
     "Revealed in Madinah.",
     "Social manners, brotherhood.",
     18, 2, "sound/049-al-hujurat.mp3"},

    {50, "Qaf", "Named after the opening letter.",
     "Revealed in Makkah.",
     "Resurrection, accountability.",
     45, 3, "sound/050-qaf.mp3"},

    {51, "Adh-Dhariyat", "Named after the scattering winds.",
     "Revealed in Makkah.",
     "Faith, warning, sustenance from Allah.",
     60, 3, "sound/051-adh-dhariyat.mp3"},

    {52, "At-Tur", "Named after Mount Tur.",
     "Revealed in Makkah.",
     "Day of Judgment, reward and punishment.",
     49, 2, "sound/052-at-tur.mp3"},

    {53, "An-Najm", "Named after the star.",
     "Revealed in Makkah.",
     "Truth of revelation, accountability.",
     62, 3, "sound/053-an-najm.mp3"},

    {54, "Al-Qamar", "Named after the moon.",
     "Revealed in Makkah.",
     "Warning from past nations.",
     55, 3, "sound/054-al-qamar.mp3"},

    {55, "Ar-Rahman", "Named after Allah’s mercy.",
     "Revealed in Madinah.",
     "Blessings of Allah, gratitude.",
     78, 3, "sound/055-ar-rahman.mp3"},

    {56, "Al-Waqiah", "Named after the inevitable event.",
     "Revealed in Makkah.",
     "Hereafter, ranks of people.",
     96, 3, "sound/056-al-waqiah.mp3"},

    {57, "Al-Hadid", "Named after iron.",
     "Revealed in Madinah.",
     "Power, charity, faith.",
     29, 4, "sound/057-al-hadid.mp3"},

    {58, "Al-Mujadilah", "Named after the pleading woman.",
     "Revealed in Madinah.",
     "Justice, private consultation.",
     22, 3, "sound/058-al-mujadilah.mp3"},

    {59, "Al-Hashr", "Named after the gathering.",
     "Revealed in Madinah.",
     "Exile of Banu Nadir.",
     24, 3, "sound/059-al-hashr.mp3"},

    {60, "Al-Mumtahanah", "Named after testing believers.",
     "Revealed in Madinah.",
     "Relations with non-believers.",
     13, 2, "sound/060-al-mumtahanah.mp3"},

    {61, "As-Saff", "Named after ranks in battle.",
     "Revealed in Madinah.",
     "Unity, struggle in Allah’s cause.",
     14, 2, "sound/061-as-saff.mp3"},

    {62, "Al-Jumu'ah", "Named after Friday prayer.",
     "Revealed in Madinah.",
     "Importance of Jumu'ah.",
     11, 2, "sound/062-al-jumuah.mp3"},

    {63, "Al-Munafiqun", "Named after the hypocrites.",
     "Revealed in Madinah.",
     "Hypocrisy, warning.",
     11, 2, "sound/063-al-munafiqun.mp3"},

    {64, "At-Taghabun", "Named after the Day of Loss.",
     "Revealed in Madinah.",
     "Accountability, forgiveness.",
     18, 2, "sound/064-at-taghabun.mp3"},

    {65, "At-Talaq", "Named after divorce laws.",
     "Revealed in Madinah.",
     "Family laws, justice.",
     12, 2, "sound/065-at-talaq.mp3"},

    {66, "At-Tahrim", "Named after prohibition.",
     "Revealed in Madinah.",
     "Family discipline, repentance.",
     12, 2, "sound/066-at-tahrim.mp3"},

    {67, "Al-Mulk", "Named after sovereignty.",
     "Revealed in Makkah.",
     "Power of Allah, accountability.",
     30, 2, "sound/067-al-mulk.mp3"},

    {68, "Al-Qalam", "Named after the pen.",
     "Revealed in Makkah.",
     "Morality, truth.",
     52, 2, "sound/068-al-qalam.mp3"},

    {69, "Al-Haqqah", "Named after the inevitable truth.",
     "Revealed in Makkah.",
     "Day of Judgment.",
     52, 2, "sound/069-al-haqqah.mp3"},

    {70, "Al-Ma'arij", "Named after ascending ways.",
     "Revealed in Makkah.",
     "Patience, accountability.",
     44, 2, "sound/070-al-maarij.mp3"},

    {71, "Nuh", "Named after Prophet Nuh (A.S).",
     "Revealed in Makkah.",
     "Call to monotheism.",
     28, 2, "sound/071-nuh.mp3"},

    {72, "Al-Jinn", "Named after the jinn.",
     "Revealed in Makkah.",
     "Belief of jinn in Quran.",
     28, 2, "sound/072-al-jinn.mp3"},

    {73, "Al-Muzzammil", "Named after wrapped one.",
     "Revealed in Makkah.",
     "Prayer, patience.",
     20, 2, "sound/073-al-muzzammil.mp3"},

    {74, "Al-Muddaththir", "Named after cloaked one.",
     "Revealed in Makkah.",
     "Warning, responsibility.",
     56, 2, "sound/074-al-muddaththir.mp3"},

    {75, "Al-Qiyamah", "Named after resurrection.",
     "Revealed in Makkah.",
     "Resurrection, accountability.",
     40, 2, "sound/075-al-qiyamah.mp3"},

    {76, "Al-Insan", "Named after mankind.",
     "Revealed in Madinah.",
     "Creation, reward of righteous.",
     31, 2, "sound/076-al-insan.mp3"},

    {77, "Al-Mursalat", "Named after sent winds.",
     "Revealed in Makkah.",
     "Warnings, judgment.",
     50, 2, "sound/077-al-mursalat.mp3"},

    {78, "An-Naba", "Named after the great news.",
     "Revealed in Makkah.",
     "Resurrection, creation.",
     40, 2, "sound/078-an-naba.mp3"},

    {79, "An-Nazi'at", "Named after angels who pull.",
     "Revealed in Makkah.",
     "Resurrection, Pharaoh.",
     46, 2, "sound/079-an-naziat.mp3"},

    {80, "Abasa", "Named after the incident of frowning.",
     "Revealed in Makkah.",
     "Manners, guidance.",
     42, 1, "sound/080-abasa.mp3"},

    {81, "At-Takwir", "Named after the folding of the sun.",
     "Revealed in Makkah.",
     "End of the world, accountability.",
     29, 1, "sound/081-at-takwir.mp3"},

    {82, "Al-Infitar", "Named after the splitting of the sky.",
     "Revealed in Makkah.",
     "Day of Judgment, human negligence.",
     19, 1, "sound/082-al-infitar.mp3"},

    {83, "Al-Mutaffifin", "Named after those who cheat in measure.",
     "Revealed in Makkah.",
     "Justice, honesty, punishment.",
     36, 1, "sound/083-al-mutaffifin.mp3"},

    {84, "Al-Inshiqaq", "Named after the splitting of the sky.",
     "Revealed in Makkah.",
     "Accountability, return to Allah.",
     25, 1, "sound/084-al-inshiqaq.mp3"},

    {85, "Al-Buruj", "Named after constellations.",
     "Revealed in Makkah.",
     "Trial of believers, steadfastness.",
     22, 1, "sound/085-al-buruj.mp3"},

    {86, "At-Tariq", "Named after the night visitor.",
     "Revealed in Makkah.",
     "Creation, divine watchfulness.",
     17, 1, "sound/086-at-tariq.mp3"},

    {87, "Al-A'la", "Named after glorifying Allah Most High.",
     "Revealed in Makkah.",
     "Purification, remembrance.",
     19, 1, "sound/087-al-ala.mp3"},

    {88, "Al-Ghashiyah", "Named after the overwhelming event.",
     "Revealed in Makkah.",
     "Hereafter, creation signs.",
     26, 1, "sound/088-al-ghashiyah.mp3"},

    {89, "Al-Fajr", "Named after the dawn.",
     "Revealed in Makkah.",
     "Past nations, moral lessons.",
     30, 1, "sound/089-al-fajr.mp3"},

    {90, "Al-Balad", "Named after the sacred city.",
     "Revealed in Makkah.",
     "Struggle, charity, morality.",
     20, 1, "sound/090-al-balad.mp3"},

    {91, "Ash-Shams", "Named after the sun.",
     "Revealed in Makkah.",
     "Purification of soul.",
     15, 1, "sound/091-ash-shams.mp3"},

    {92, "Al-Lail", "Named after the night.",
     "Revealed in Makkah.",
     "Paths of good and evil.",
     21, 1, "sound/092-al-lail.mp3"},

    {93, "Ad-Duha", "Named after the morning brightness.",
     "Revealed in Makkah.",
     "Hope, Allah’s mercy.",
     11, 1, "sound/093-ad-duha.mp3"},

    {94, "Ash-Sharh", "Named after expansion of the chest.",
     "Revealed in Makkah.",
     "Relief after hardship.",
     8, 1, "sound/094-ash-sharh.mp3"},

    {95, "At-Tin", "Named after the fig.",
     "Revealed in Makkah.",
     "Creation, human dignity.",
     8, 1, "sound/095-at-tin.mp3"},

    {96, "Al-Alaq", "Named after the clot.",
     "Revealed in Makkah.",
     "First revelation, knowledge.",
     19, 1, "sound/096-al-alaq.mp3"},

    {97, "Al-Qadr", "Named after the Night of Decree.",
     "Revealed in Makkah.",
     "Importance of Laylat-ul-Qadr.",
     5, 1, "sound/097-al-qadr.mp3"},

    {98, "Al-Bayyinah", "Named after the clear proof.",
     "Revealed in Madinah.",
     "Truth, final message.",
     8, 1, "sound/098-al-bayyinah.mp3"},

    {99, "Az-Zalzalah", "Named after the earthquake.",
     "Revealed in Madinah.",
     "Day of Judgment, accountability.",
     8, 1, "sound/099-az-zalzalah.mp3"},

    {100, "Al-Adiyat", "Named after charging horses.",
     "Revealed in Makkah.",
     "Human ingratitude, accountability.",
     11, 1, "sound/100-al-adiyat.mp3"},

    {101, "Al-Qariah", "Named after the striking calamity.",
     "Revealed in Makkah.",
     "Day of Judgment, accountability.",
     11, 1, "sound/101-al-qariah.mp3"},

    {102, "At-Takathur", "Named after rivalry in worldly gain.",
     "Revealed in Makkah.",
     "Greed, accountability.",
     8, 1, "sound/102-at-takathur.mp3"},

    {103, "Al-Asr", "Named after the time.",
     "Revealed in Makkah.",
     "Importance of time, guidance.",
     3, 1, "sound/103-al-asr.mp3"},

    {104, "Al-Humazah", "Named after slanderers.",
     "Revealed in Makkah.",
     "Moral corruption, accountability.",
     9, 1, "sound/104-al-humazah.mp3"},

    {105, "Al-Fil", "Named after the elephant.",
     "Revealed in Makkah.",
     "Protection of Ka'bah, power of Allah.",
     5, 1, "sound/105-al-fil.mp3"},

    {106, "Quraish", "Named after the tribe.",
     "Revealed in Makkah.",
     "Gratitude, unity, security.",
     4, 1, "sound/106-quraish.mp3"},

    {107, "Al-Ma'un", "Named after small acts of kindness.",
     "Revealed in Makkah.",
     "Hypocrisy, accountability.",
     7, 1, "sound/107-al-maun.mp3"},

    {108, "Al-Kawthar", "Named after abundance.",
     "Revealed in Makkah.",
     "Blessings, gratitude.",
     3, 1, "sound/108-al-kawthar.mp3"},

    {109, "Al-Kafirun", "Named after disbelievers.",
     "Revealed in Makkah.",
     "Declaration of faith, rejection of disbelief.",
     6, 1, "sound/109-al-kafirun.mp3"},

    {110, "An-Nasr", "Named after divine help.",
     "Revealed in Madinah.",
     "Victory, gratitude, humility.",
     3, 1, "sound/110-an-nasr.mp3"},

    {111, "Al-Masad", "Named after twisted fiber.",
     "Revealed in Makkah.",
     "Warning to Abu Lahab and his wife.",
     5, 1, "sound/111-al-masad.mp3"},

    {112, "Al-Ikhlas", "Named after purity of faith.",
     "Revealed in Makkah.",
     "Oneness of Allah.",
     4, 1, "sound/112-al-ikhlas.mp3"},

    {113, "Al-Falaq", "Named after dawn.",
     "Revealed in Makkah.",
     "Protection from evil.",
     5, 1, "sound/113-al-falaq.mp3"},

    {114, "An-Nas", "Named after mankind.",
     "Revealed in Makkah.",
     "Protection from whispering evil.",
     6, 1, "sound/114-an-nas.mp3"}

    };

    int totalFilled = 114; // change as you add more
    int choice, listen;
    printf("\n\t\t\t\t\t===== AL-QURAN INFORMATION SYSTEM =====\n\n");
    for (int i = 0; i < totalFilled; i++) {
        printf("%d. %s\n", surahs[i].number, surahs[i].name);
       // if(i%2==0) printf("\n");
    }
    printf("\nEnter Surah number: ");
    scanf("%d", &choice);
    if (choice < 1 || choice > totalFilled) {
        printf("Data not added yet for this Surah.\n");
        return 0;
    }
    struct Surah s = surahs[choice - 1];
    {
        printf("\nSurah: %s", s.name);
        printf("\nWaja-e-Tasmiya: %s", s.waja);
        printf("\nPas-e-Manzar: %s", s.background);
        printf("\nTopics: %s", s.topics);
        printf("\nAyat: %d", s.ayat);
        printf("\nRuku: %d\n", s.ruku);
    }
    printf("\n1. Listen Surah\n2. Skip\nChoice: ");
    scanf("%d", &listen);
    if (listen == 1) {
        playAudio(s.audio);
       goto sos;
    }
    return 0;
}


