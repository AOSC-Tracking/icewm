// WARNING: this is an autogenerated file. Any change might be overwritten!
LPCSTR ANY[] = { "", "|", NULL };
LPCSTR AudioVideo[] = { "AudioVideo", "|", NULL };
LPCSTR AudioVideoAudio[] = { "AudioVideo", "Audio", "|", NULL };
LPCSTR AudioVideoVideo[] = { "AudioVideo", "Video", "|", NULL };
LPCSTR AudioVideoorEducation[] = { "AudioVideo", "|", "Education", "|", NULL };
LPCSTR AudioorVideoorAudioVideo[] = { "Audio", "|", "Video", "|", "AudioVideo", "|", NULL };
LPCSTR Development[] = { "Development", "|", NULL };
LPCSTR EducationComputerScienceorScienceComputerScience[] = { "Education", "ComputerScience", "|", "Science", "ComputerScience", "|", NULL };
LPCSTR EducationMathorScienceMath[] = { "Education", "Math", "|", "Science", "Math", "|", NULL };
LPCSTR EducationorScience[] = { "Education", "|", "Science", "|", NULL };
LPCSTR EducationorScienceorUtility[] = { "Education", "|", "Science", "|", "Utility", "|", NULL };
LPCSTR Game[] = { "Game", "|", NULL };
LPCSTR Graphics[] = { "Graphics", "|", NULL };
LPCSTR Graphics2DGraphics[] = { "Graphics", "2DGraphics", "|", NULL };
LPCSTR GraphicsScanning[] = { "Graphics", "Scanning", "|", NULL };
LPCSTR GraphicsorOffice[] = { "Graphics", "|", "Office", "|", NULL };
LPCSTR Network[] = { "Network", "|", NULL };
LPCSTR NetworkorAudio[] = { "Network", "|", "Audio", "|", NULL };
LPCSTR NetworkorDevelopment[] = { "Network", "|", "Development", "|", NULL };
LPCSTR Office[] = { "Office", "|", NULL };
LPCSTR OfficeorDevelopment[] = { "Office", "|", "Development", "|", NULL };
LPCSTR OfficeorDevelopmentorAudioVideo[] = { "Office", "|", "Development", "|", "AudioVideo", "|", NULL };
LPCSTR OfficeorNetwork[] = { "Office", "|", "Network", "|", NULL };
LPCSTR OfficeorTextTools[] = { "Office", "|", "TextTools", "|", NULL };
LPCSTR Settings[] = { "Settings", "|", NULL };
LPCSTR SettingsHardwareSettings[] = { "Settings", "HardwareSettings", "|", NULL };
LPCSTR SettingsorSystem[] = { "Settings", "|", "System", "|", NULL };
LPCSTR SettingsorUtility[] = { "Settings", "|", "Utility", "|", NULL };
LPCSTR System[] = { "System", "|", NULL };
LPCSTR SystemFileTools[] = { "System", "FileTools", "|", NULL };
LPCSTR SystemorGame[] = { "System", "|", "Game", "|", NULL };
LPCSTR SystemorNetwork[] = { "System", "|", "Network", "|", NULL };
LPCSTR Utility[] = { "Utility", "|", NULL };
LPCSTR UtilityArchiving[] = { "Utility", "Archiving", "|", NULL };
LPCSTR UtilityorSystem[] = { "Utility", "|", "System", "|", NULL };

namespace spec {

tListMeta menuinfo[] =
{
    { N_("Accessibility"),"Accessibility", NULL, NULL},
    { N_("Settings"),"Settings", NULL, NULL},
    { N_("Screensavers"),"Screensavers", NULL, NULL},
    { N_("Accessories"),"Accessories", NULL, NULL},
    { N_("Development"),"Development", NULL, NULL},
    { N_("Education"),"Education", NULL, NULL},
    { N_("Game"),"Game", NULL, NULL},
    { N_("Graphics"),"Graphics", NULL, NULL},
    { N_("Multimedia"),"Multimedia", NULL, NULL},
    { N_("Audio"),"Audio", NULL, NULL},
    { N_("Video"),"Video", NULL, NULL},
    { N_("AudioVideo"),"AudioVideo", NULL, NULL},
    { N_("Network"),"Network", NULL, NULL},
    { N_("Office"),"Office", NULL, NULL},
    { N_("Science"),"Science", NULL, NULL},
    { N_("System"),"System", NULL, NULL},
    { N_("WINE"),"WINE", NULL, NULL},
    { N_("Editors"),"Editors", NULL, NULL},
    { N_("Utility"),"Utility", NULL, NULL},
    { N_("Other"), "Other", NULL, NULL },
// TRANSLATORS: This is a menu category name, please add spaces as needed but no quotes or double-quotes.
    { N_("2DGraphics"), "2DGraphics", NULL, (char**) &Graphics},
// TRANSLATORS: This is a menu category name, please add spaces as needed but no quotes or double-quotes.
    { N_("3DGraphics"), "3DGraphics", NULL, (char**) &Graphics},
// TRANSLATORS: This is a menu category name, please add spaces as needed but no quotes or double-quotes.
    { N_("Accessibility"), "Accessibility", NULL, (char**) &SettingsorUtility},
// TRANSLATORS: This is a menu category name, please add spaces as needed but no quotes or double-quotes.
    { N_("ActionGame"), "ActionGame", NULL, (char**) &Game},
// TRANSLATORS: This is a menu category name, please add spaces as needed but no quotes or double-quotes.
    { N_("Adult"), "Adult", NULL, (char**) &ANY},
// TRANSLATORS: This is a menu category name, please add spaces as needed but no quotes or double-quotes.
    { N_("AdventureGame"), "AdventureGame", NULL, (char**) &Game},
// TRANSLATORS: This is a menu category name, please add spaces as needed but no quotes or double-quotes.
    { N_("Amusement"), "Amusement", NULL, (char**) &ANY},
// TRANSLATORS: This is a menu category name, please add spaces as needed but no quotes or double-quotes.
    { N_("ArcadeGame"), "ArcadeGame", NULL, (char**) &Game},
// TRANSLATORS: This is a menu category name, please add spaces as needed but no quotes or double-quotes.
    { N_("Archiving"), "Archiving", NULL, (char**) &Utility},
// TRANSLATORS: This is a menu category name, please add spaces as needed but no quotes or double-quotes.
    { N_("Art"), "Art", NULL, (char**) &EducationorScience},
// TRANSLATORS: This is a menu category name, please add spaces as needed but no quotes or double-quotes.
    { N_("ArtificialIntelligence"), "ArtificialIntelligence", NULL, (char**) &EducationorScience},
// TRANSLATORS: This is a menu category name, please add spaces as needed but no quotes or double-quotes.
    { N_("Astronomy"), "Astronomy", NULL, (char**) &EducationorScience},
// TRANSLATORS: This is a menu category name, please add spaces as needed but no quotes or double-quotes.
    { N_("AudioVideoEditing"), "AudioVideoEditing", NULL, (char**) &AudioorVideoorAudioVideo},
// TRANSLATORS: This is a menu category name, please add spaces as needed but no quotes or double-quotes.
    { N_("Biology"), "Biology", NULL, (char**) &EducationorScience},
// TRANSLATORS: This is a menu category name, please add spaces as needed but no quotes or double-quotes.
    { N_("BlocksGame"), "BlocksGame", NULL, (char**) &Game},
// TRANSLATORS: This is a menu category name, please add spaces as needed but no quotes or double-quotes.
    { N_("BoardGame"), "BoardGame", NULL, (char**) &Game},
// TRANSLATORS: This is a menu category name, please add spaces as needed but no quotes or double-quotes.
    { N_("Calculator"), "Calculator", NULL, (char**) &Utility},
// TRANSLATORS: This is a menu category name, please add spaces as needed but no quotes or double-quotes.
    { N_("Calendar"), "Calendar", NULL, (char**) &Office},
// TRANSLATORS: This is a menu category name, please add spaces as needed but no quotes or double-quotes.
    { N_("CardGame"), "CardGame", NULL, (char**) &Game},
// TRANSLATORS: This is a menu category name, please add spaces as needed but no quotes or double-quotes.
    { N_("Chart"), "Chart", NULL, (char**) &Office},
// TRANSLATORS: This is a menu category name, please add spaces as needed but no quotes or double-quotes.
    { N_("Chat"), "Chat", NULL, (char**) &Network},
// TRANSLATORS: This is a menu category name, please add spaces as needed but no quotes or double-quotes.
    { N_("Chemistry"), "Chemistry", NULL, (char**) &EducationorScience},
// TRANSLATORS: This is a menu category name, please add spaces as needed but no quotes or double-quotes.
    { N_("Clock"), "Clock", NULL, (char**) &Utility},
// TRANSLATORS: This is a menu category name, please add spaces as needed but no quotes or double-quotes.
    { N_("Compression"), "Compression", NULL, (char**) &UtilityArchiving},
// TRANSLATORS: This is a menu category name, please add spaces as needed but no quotes or double-quotes.
    { N_("ComputerScience"), "ComputerScience", NULL, (char**) &EducationorScience},
// TRANSLATORS: This is a menu category name, please add spaces as needed but no quotes or double-quotes.
    { N_("Construction"), "Construction", NULL, (char**) &EducationorScience},
// TRANSLATORS: This is a menu category name, please add spaces as needed but no quotes or double-quotes.
    { N_("ContactManagement"), "ContactManagement", NULL, (char**) &Office},
// TRANSLATORS: This is a menu category name, please add spaces as needed but no quotes or double-quotes.
    { N_("Core"), "Core", NULL, (char**) &ANY},
// TRANSLATORS: This is a menu category name, please add spaces as needed but no quotes or double-quotes.
    { N_("DataVisualization"), "DataVisualization", NULL, (char**) &EducationorScience},
// TRANSLATORS: This is a menu category name, please add spaces as needed but no quotes or double-quotes.
    { N_("Database"), "Database", NULL, (char**) &OfficeorDevelopmentorAudioVideo},
// TRANSLATORS: This is a menu category name, please add spaces as needed but no quotes or double-quotes.
    { N_("Debugger"), "Debugger", NULL, (char**) &Development},
// TRANSLATORS: This is a menu category name, please add spaces as needed but no quotes or double-quotes.
    { N_("DesktopSettings"), "DesktopSettings", NULL, (char**) &Settings},
// TRANSLATORS: This is a menu category name, please add spaces as needed but no quotes or double-quotes.
    { N_("Dialup"), "Dialup", NULL, (char**) &Network},
// TRANSLATORS: This is a menu category name, please add spaces as needed but no quotes or double-quotes.
    { N_("Dictionary"), "Dictionary", NULL, (char**) &OfficeorTextTools},
// TRANSLATORS: This is a menu category name, please add spaces as needed but no quotes or double-quotes.
    { N_("DiscBurning"), "DiscBurning", NULL, (char**) &AudioVideo},
// TRANSLATORS: This is a menu category name, please add spaces as needed but no quotes or double-quotes.
    { N_("Documentation"), "Documentation", NULL, (char**) &ANY},
// TRANSLATORS: This is a menu category name, please add spaces as needed but no quotes or double-quotes.
    { N_("Economy"), "Economy", NULL, (char**) &EducationorScience},
// TRANSLATORS: This is a menu category name, please add spaces as needed but no quotes or double-quotes.
    { N_("Electricity"), "Electricity", NULL, (char**) &EducationorScience},
// TRANSLATORS: This is a menu category name, please add spaces as needed but no quotes or double-quotes.
    { N_("Electronics"), "Electronics", NULL, (char**) &ANY},
// TRANSLATORS: This is a menu category name, please add spaces as needed but no quotes or double-quotes.
    { N_("Email"), "Email", NULL, (char**) &OfficeorNetwork},
// TRANSLATORS: This is a menu category name, please add spaces as needed but no quotes or double-quotes.
    { N_("Emulator"), "Emulator", NULL, (char**) &SystemorGame},
// TRANSLATORS: This is a menu category name, please add spaces as needed but no quotes or double-quotes.
    { N_("Engineering"), "Engineering", NULL, (char**) &ANY},
// TRANSLATORS: This is a menu category name, please add spaces as needed but no quotes or double-quotes.
    { N_("Feed"), "Feed", NULL, (char**) &Network},
// TRANSLATORS: This is a menu category name, please add spaces as needed but no quotes or double-quotes.
    { N_("FileManager"), "FileManager", NULL, (char**) &SystemFileTools},
// TRANSLATORS: This is a menu category name, please add spaces as needed but no quotes or double-quotes.
    { N_("FileTools"), "FileTools", NULL, (char**) &UtilityorSystem},
// TRANSLATORS: This is a menu category name, please add spaces as needed but no quotes or double-quotes.
    { N_("FileTransfer"), "FileTransfer", NULL, (char**) &Network},
// TRANSLATORS: This is a menu category name, please add spaces as needed but no quotes or double-quotes.
    { N_("Filesystem"), "Filesystem", NULL, (char**) &System},
// TRANSLATORS: This is a menu category name, please add spaces as needed but no quotes or double-quotes.
    { N_("Finance"), "Finance", NULL, (char**) &Office},
// TRANSLATORS: This is a menu category name, please add spaces as needed but no quotes or double-quotes.
    { N_("FlowChart"), "FlowChart", NULL, (char**) &Office},
// TRANSLATORS: This is a menu category name, please add spaces as needed but no quotes or double-quotes.
    { N_("GUIDesigner"), "GUIDesigner", NULL, (char**) &Development},
// TRANSLATORS: This is a menu category name, please add spaces as needed but no quotes or double-quotes.
    { N_("Geography"), "Geography", NULL, (char**) &EducationorScience},
// TRANSLATORS: This is a menu category name, please add spaces as needed but no quotes or double-quotes.
    { N_("Geology"), "Geology", NULL, (char**) &EducationorScience},
// TRANSLATORS: This is a menu category name, please add spaces as needed but no quotes or double-quotes.
    { N_("Geoscience"), "Geoscience", NULL, (char**) &EducationorScience},
// TRANSLATORS: This is a menu category name, please add spaces as needed but no quotes or double-quotes.
    { N_("HamRadio"), "HamRadio", NULL, (char**) &NetworkorAudio},
// TRANSLATORS: This is a menu category name, please add spaces as needed but no quotes or double-quotes.
    { N_("HardwareSettings"), "HardwareSettings", NULL, (char**) &Settings},
// TRANSLATORS: This is a menu category name, please add spaces as needed but no quotes or double-quotes.
    { N_("History"), "History", NULL, (char**) &EducationorScience},
// TRANSLATORS: This is a menu category name, please add spaces as needed but no quotes or double-quotes.
    { N_("Humanities"), "Humanities", NULL, (char**) &EducationorScience},
// TRANSLATORS: This is a menu category name, please add spaces as needed but no quotes or double-quotes.
    { N_("IDE"), "IDE", NULL, (char**) &Development},
// TRANSLATORS: This is a menu category name, please add spaces as needed but no quotes or double-quotes.
    { N_("IRCClient"), "IRCClient", NULL, (char**) &Network},
// TRANSLATORS: This is a menu category name, please add spaces as needed but no quotes or double-quotes.
    { N_("ImageProcessing"), "ImageProcessing", NULL, (char**) &EducationorScience},
// TRANSLATORS: This is a menu category name, please add spaces as needed but no quotes or double-quotes.
    { N_("InstantMessaging"), "InstantMessaging", NULL, (char**) &Network},
// TRANSLATORS: This is a menu category name, please add spaces as needed but no quotes or double-quotes.
    { N_("KidsGame"), "KidsGame", NULL, (char**) &Game},
// TRANSLATORS: This is a menu category name, please add spaces as needed but no quotes or double-quotes.
    { N_("Languages"), "Languages", NULL, (char**) &EducationorScience},
// TRANSLATORS: This is a menu category name, please add spaces as needed but no quotes or double-quotes.
    { N_("Literature"), "Literature", NULL, (char**) &EducationorScience},
// TRANSLATORS: This is a menu category name, please add spaces as needed but no quotes or double-quotes.
    { N_("LogicGame"), "LogicGame", NULL, (char**) &Game},
// TRANSLATORS: This is a menu category name, please add spaces as needed but no quotes or double-quotes.
    { N_("Maps"), "Maps", NULL, (char**) &EducationorScienceorUtility},
// TRANSLATORS: This is a menu category name, please add spaces as needed but no quotes or double-quotes.
    { N_("Math"), "Math", NULL, (char**) &EducationorScience},
// TRANSLATORS: This is a menu category name, please add spaces as needed but no quotes or double-quotes.
    { N_("MedicalSoftware"), "MedicalSoftware", NULL, (char**) &EducationorScience},
// TRANSLATORS: This is a menu category name, please add spaces as needed but no quotes or double-quotes.
    { N_("Midi"), "Midi", NULL, (char**) &AudioVideoAudio},
// TRANSLATORS: This is a menu category name, please add spaces as needed but no quotes or double-quotes.
    { N_("Mixer"), "Mixer", NULL, (char**) &AudioVideoAudio},
// TRANSLATORS: This is a menu category name, please add spaces as needed but no quotes or double-quotes.
    { N_("Monitor"), "Monitor", NULL, (char**) &SystemorNetwork},
// TRANSLATORS: This is a menu category name, please add spaces as needed but no quotes or double-quotes.
    { N_("Motif"), "Motif", NULL, (char**) &ANY},
// TRANSLATORS: This is a menu category name, please add spaces as needed but no quotes or double-quotes.
    { N_("Music"), "Music", NULL, (char**) &AudioVideoorEducation},
// TRANSLATORS: This is a menu category name, please add spaces as needed but no quotes or double-quotes.
    { N_("News"), "News", NULL, (char**) &Network},
// TRANSLATORS: This is a menu category name, please add spaces as needed but no quotes or double-quotes.
    { N_("NumericalAnalysis"), "NumericalAnalysis", NULL, (char**) &EducationMathorScienceMath},
// TRANSLATORS: This is a menu category name, please add spaces as needed but no quotes or double-quotes.
    { N_("OCR"), "OCR", NULL, (char**) &GraphicsScanning},
// TRANSLATORS: This is a menu category name, please add spaces as needed but no quotes or double-quotes.
    { N_("P2P"), "P2P", NULL, (char**) &Network},
// TRANSLATORS: This is a menu category name, please add spaces as needed but no quotes or double-quotes.
    { N_("PDA"), "PDA", NULL, (char**) &Office},
// TRANSLATORS: This is a menu category name, please add spaces as needed but no quotes or double-quotes.
    { N_("PackageManager"), "PackageManager", NULL, (char**) &Settings},
// TRANSLATORS: This is a menu category name, please add spaces as needed but no quotes or double-quotes.
    { N_("ParallelComputing"), "ParallelComputing", NULL, (char**) &EducationComputerScienceorScienceComputerScience},
// TRANSLATORS: This is a menu category name, please add spaces as needed but no quotes or double-quotes.
    { N_("Photography"), "Photography", NULL, (char**) &GraphicsorOffice},
// TRANSLATORS: This is a menu category name, please add spaces as needed but no quotes or double-quotes.
    { N_("Physics"), "Physics", NULL, (char**) &EducationorScience},
// TRANSLATORS: This is a menu category name, please add spaces as needed but no quotes or double-quotes.
    { N_("Player"), "Player", NULL, (char**) &AudioorVideoorAudioVideo},
// TRANSLATORS: This is a menu category name, please add spaces as needed but no quotes or double-quotes.
    { N_("Presentation"), "Presentation", NULL, (char**) &Office},
// TRANSLATORS: This is a menu category name, please add spaces as needed but no quotes or double-quotes.
    { N_("Printing"), "Printing", NULL, (char**) &SettingsHardwareSettings},
// TRANSLATORS: This is a menu category name, please add spaces as needed but no quotes or double-quotes.
    { N_("Profiling"), "Profiling", NULL, (char**) &Development},
// TRANSLATORS: This is a menu category name, please add spaces as needed but no quotes or double-quotes.
    { N_("ProjectManagement"), "ProjectManagement", NULL, (char**) &OfficeorDevelopment},
// TRANSLATORS: This is a menu category name, please add spaces as needed but no quotes or double-quotes.
    { N_("Publishing"), "Publishing", NULL, (char**) &GraphicsorOffice},
// TRANSLATORS: This is a menu category name, please add spaces as needed but no quotes or double-quotes.
    { N_("RasterGraphics"), "RasterGraphics", NULL, (char**) &Graphics2DGraphics},
// TRANSLATORS: This is a menu category name, please add spaces as needed but no quotes or double-quotes.
    { N_("Recorder"), "Recorder", NULL, (char**) &AudioorVideoorAudioVideo},
// TRANSLATORS: This is a menu category name, please add spaces as needed but no quotes or double-quotes.
    { N_("RemoteAccess"), "RemoteAccess", NULL, (char**) &Network},
// TRANSLATORS: This is a menu category name, please add spaces as needed but no quotes or double-quotes.
    { N_("RevisionControl"), "RevisionControl", NULL, (char**) &Development},
// TRANSLATORS: This is a menu category name, please add spaces as needed but no quotes or double-quotes.
    { N_("Robotics"), "Robotics", NULL, (char**) &EducationorScience},
// TRANSLATORS: This is a menu category name, please add spaces as needed but no quotes or double-quotes.
    { N_("RolePlaying"), "RolePlaying", NULL, (char**) &Game},
// TRANSLATORS: This is a menu category name, please add spaces as needed but no quotes or double-quotes.
    { N_("Scanning"), "Scanning", NULL, (char**) &Graphics},
// TRANSLATORS: This is a menu category name, please add spaces as needed but no quotes or double-quotes.
    { N_("Security"), "Security", NULL, (char**) &SettingsorSystem},
// TRANSLATORS: This is a menu category name, please add spaces as needed but no quotes or double-quotes.
    { N_("Sequencer"), "Sequencer", NULL, (char**) &AudioVideoAudio},
// TRANSLATORS: This is a menu category name, please add spaces as needed but no quotes or double-quotes.
    { N_("Shooter"), "Shooter", NULL, (char**) &Game},
// TRANSLATORS: This is a menu category name, please add spaces as needed but no quotes or double-quotes.
    { N_("Simulation"), "Simulation", NULL, (char**) &Game},
// TRANSLATORS: This is a menu category name, please add spaces as needed but no quotes or double-quotes.
    { N_("Spirituality"), "Spirituality", NULL, (char**) &EducationorScienceorUtility},
// TRANSLATORS: This is a menu category name, please add spaces as needed but no quotes or double-quotes.
    { N_("Sports"), "Sports", NULL, (char**) &EducationorScience},
// TRANSLATORS: This is a menu category name, please add spaces as needed but no quotes or double-quotes.
    { N_("SportsGame"), "SportsGame", NULL, (char**) &Game},
// TRANSLATORS: This is a menu category name, please add spaces as needed but no quotes or double-quotes.
    { N_("Spreadsheet"), "Spreadsheet", NULL, (char**) &Office},
// TRANSLATORS: This is a menu category name, please add spaces as needed but no quotes or double-quotes.
    { N_("StrategyGame"), "StrategyGame", NULL, (char**) &Game},
// TRANSLATORS: This is a menu category name, please add spaces as needed but no quotes or double-quotes.
    { N_("TV"), "TV", NULL, (char**) &AudioVideoVideo},
// TRANSLATORS: This is a menu category name, please add spaces as needed but no quotes or double-quotes.
    { N_("Telephony"), "Telephony", NULL, (char**) &Network},
// TRANSLATORS: This is a menu category name, please add spaces as needed but no quotes or double-quotes.
    { N_("TelephonyTools"), "TelephonyTools", NULL, (char**) &Utility},
// TRANSLATORS: This is a menu category name, please add spaces as needed but no quotes or double-quotes.
    { N_("TerminalEmulator"), "TerminalEmulator", NULL, (char**) &System},
// TRANSLATORS: This is a menu category name, please add spaces as needed but no quotes or double-quotes.
    { N_("TextEditor"), "TextEditor", NULL, (char**) &Utility},
// TRANSLATORS: This is a menu category name, please add spaces as needed but no quotes or double-quotes.
    { N_("TextTools"), "TextTools", NULL, (char**) &Utility},
// TRANSLATORS: This is a menu category name, please add spaces as needed but no quotes or double-quotes.
    { N_("Translation"), "Translation", NULL, (char**) &Development},
// TRANSLATORS: This is a menu category name, please add spaces as needed but no quotes or double-quotes.
    { N_("Tuner"), "Tuner", NULL, (char**) &AudioVideoAudio},
// TRANSLATORS: This is a menu category name, please add spaces as needed but no quotes or double-quotes.
    { N_("VectorGraphics"), "VectorGraphics", NULL, (char**) &Graphics2DGraphics},
// TRANSLATORS: This is a menu category name, please add spaces as needed but no quotes or double-quotes.
    { N_("VideoConference"), "VideoConference", NULL, (char**) &Network},
// TRANSLATORS: This is a menu category name, please add spaces as needed but no quotes or double-quotes.
    { N_("Viewer"), "Viewer", NULL, (char**) &GraphicsorOffice},
// TRANSLATORS: This is a menu category name, please add spaces as needed but no quotes or double-quotes.
    { N_("WebBrowser"), "WebBrowser", NULL, (char**) &Network},
// TRANSLATORS: This is a menu category name, please add spaces as needed but no quotes or double-quotes.
    { N_("WebDevelopment"), "WebDevelopment", NULL, (char**) &NetworkorDevelopment},
// TRANSLATORS: This is a menu category name, please add spaces as needed but no quotes or double-quotes.
    { N_("WordProcessor"), "WordProcessor", NULL, (char**) &Office}
};
}
