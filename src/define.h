// prefs
#define preferences	[NSUserDefaults standardUserDefaults]
#define GSC_APPNAME	[[[NSBundle bundleForClass:[self class]] infoDictionary] objectForKey:@"CFBundleName"]
#define GSC_VERSION	[[[NSBundle bundleForClass:[self class]] infoDictionary] objectForKey:@"CFBundleVersion"]
#define VERSIONDICTKEY	@"gsccuo"
#define EMPTYWNDWTITLE  @"GSC United Offensive"
#define EXPIRYYEAR      2006
#define EXPIRYMONTH     12
#define EXPIRYDAY       31
#define EXPIRYDATETXT   @"january 1st 2007"
#define MAXBANLISTSIZE  999
#define MAXAUTOGENPLYR  16

// files and directories
#define APPICONIMAGE    @"gsc_uo_icon.icns"
#define CONFIGFILENAME 	@"/main/gsccuo.cfg"
#define GAMEAPPNAME	@"/CoD United Offensive MP"
#define APPEXTENSION    @".app"
#define APPEXEPATH      @"/Contents/MacOSClassic"
#define PARAMFILENAME 	@"/MacCoDParms.txt"
#define GAMEPARAMETERS 	@"exec gsccuo.cfg\nmap_rotate\n"
#define CONFIGFILENAME 	@"/main/gsccuo.cfg"
#define OPENCOMMAND	@"/usr/bin/open"
#define DEF_GAMEAPPPATH	@"/Applications/Call of Duty"
#define BASEDIRNAME	@"/Main"
#define UNZIP_PATH	@"/usr/bin/unzip"
#define SAVE_EXTENSION  @".gsccuo"
#define OPEN_EXTENSION  @"gsccuo"
#define DEFAULT_FNAME   @"Untitled Server.gsccuo"
#define AUTOSTARTNAME   @"autostart.gsccuo"

// server runtime settings
#define LAUNCHWAITTIME	5
#define POLLWAITTIME	5
#define HEARTBEATTIME   28800
#define MAXSTARTPOLLS	10
#define RUNPOLLWAITTIME 30
#define STATUSLINELEN   79

// help URL's
#define HELP_SAVE_FILES_URL     @"http://www.p-edge.nl/gsc/index.php?option=content&task=view&id=171&Itemid=25"
#define HELP_QUIT_FIRST_URL     @"http://www.p-edge.nl/gsc/index.php?option=content&task=view&id=172&Itemid=25"
#define PAYPAL_DONATE_URL       @"http://www.p-edge.nl/gsc/index.php?option=content&task=view&id=12&Itemid=32"
#define ONLINE_MANUAL_URL       @"http://www.p-edge.nl/gsc/index.php?option=content&task=view&id=169&Itemid=25"
#define HELP_ADDIP_URL          @"http://www.p-edge.nl/gsc/index.php?option=content&task=view&id=175&Itemid=25"
#define HELP_CANTOPENFILE_URL   @"http://www.p-edge.nl/gsc/index.php?option=content&task=view&id=173&Itemid=25"
#define HELP_OLDFILEVER_URL     @"http://www.p-edge.nl/gsc/index.php?option=content&task=view&id=174&Itemid=25"
#define HELP_FILEDAMAGED_URL    @"http://www.p-edge.nl/gsc/index.php?option=content&task=category&sectionid=2&id=80&Itemid=25"
#define HELP_RCONPASS_URL       @"http://www.p-edge.nl/gsc/index.php?option=content&task=view&id=176&Itemid=25"

// internal URL's
#define VERSION_CHECK_URL   @"http://www.p-edge.nl/apps/versioncheck.xml"
#define DOWNLOAD_NEW_URL    @"http://www.p-edge.nl/gsc/index.php?option=com_remository&Itemid=38&func=selectcat&cat=1"
#define GSC_SERV_SIGNON         @"http://www.p-edge.nl/gsc/gscservers/submit.php?mode=signon&id=%@&hostname=%@&adminname=%@&gametype=%@&location=%@&netport=%d"
#define GSC_SERV_SIGNOFF        @"http://www.p-edge.nl/gsc/gscservers/submit.php?mode=signoff&id=%@&hostname=%@&adminname=%@&gametype=%@&location=%@&netport=%d"