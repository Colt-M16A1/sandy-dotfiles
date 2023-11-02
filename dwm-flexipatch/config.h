/* Constants */
#define TERMINAL "st"
#define TERMINAL2 "kitty"
#define TERMCLASS "St"
#define BROWSER "librewolf"
#define BROWSER2 "thorium-browser"
#define FILEMGR "dolphin"
#define FILEMGR2 "thunar"
#define LOCKSCREEN "betterlockscreen"

/* appearance */
static const unsigned int borderpx       = 2;   /* border pixel of windows */
static const unsigned int snap           = 32;  /* snap pixel */
static const int showbar                 = 1;   /* 0 means no bar */
static const int topbar                  = 1;   /* 0 means bottom bar */
static const int statusmon               = 'A';
static const unsigned int systrayspacing = 1;   /* systray spacing */
static const int showsystray             = 1;   /* 0 means no systray */

/* static const int bar_height              = 24; */  /* 0 means derive from font, >= 1 explicit height */

static const unsigned int gappih         = 10;  /* horiz inner gap between windows */
static const unsigned int gappiv         = 10;  /* vert inner gap between windows */
static const unsigned int gappoh         = 10;  /* horiz outer gap between windows and screen edge */
static const unsigned int gappov         = 10;  /* vert outer gap between windows and screen edge */
static const int smartgaps_fact          = 1;   /* gap factor when there is only one client; 0 = no gaps, 3 = 3x outer gaps */

static const int swallowfloating         = 0;   /* 1 means swallow floating windows by default */

/*alpha */

static const unsigned int baralpha = 0xd0;
static const unsigned int borderalpha = OPAQUE;
static const unsigned int alphas[][3] = {
	/*                       fg      bg        border     */
	[SchemeNorm]         = { OPAQUE, baralpha, borderalpha },
	[SchemeSel]          = { OPAQUE, baralpha, borderalpha },
	[SchemeTitleNorm]    = { OPAQUE, baralpha, borderalpha },
	[SchemeTitleSel]     = { OPAQUE, baralpha, borderalpha },
	[SchemeTagsNorm]     = { OPAQUE, baralpha, borderalpha },
	[SchemeTagsSel]      = { OPAQUE, baralpha, borderalpha },
	[SchemeHidNorm]      = { OPAQUE, baralpha, borderalpha },
	[SchemeHidSel]       = { OPAQUE, baralpha, borderalpha },
	[SchemeUrg]          = { OPAQUE, baralpha, borderalpha },
};

/*---------------------------------------------------------*/

static int tagindicatortype              = INDICATOR_BOTTOM_BAR_SLIM;
static int tiledindicatortype            = INDICATOR_NONE;
static int floatindicatortype            = INDICATOR_TOP_LEFT_SQUARE;

static const char *fonts[]               = { "JetBrainsMono Nerd Font:size=10:style=bold:antialias=true:autohint=true" }; 
static const char dmenufont[]            = "monospace:size=10";


/*static char c000000[]                    = "#000000"; // placeholder value

static char normfgcolor[]                = "#bbbbbb";
static char normbgcolor[]                = "#222222";
static char normbordercolor[]            = "#444444";
static char normfloatcolor[]             = "#db8fd9";

static char selfgcolor[]                 = "#eeeeee";
static char selbgcolor[]                 = "#005577";
static char selbordercolor[]             = "#005577";
static char selfloatcolor[]              = "#005577";

static char titlenormfgcolor[]           = "#bbbbbb";
static char titlenormbgcolor[]           = "#222222";
static char titlenormbordercolor[]       = "#444444";
static char titlenormfloatcolor[]        = "#db8fd9";

static char titleselfgcolor[]            = "#eeeeee";
static char titleselbgcolor[]            = "#005577";
static char titleselbordercolor[]        = "#005577";
static char titleselfloatcolor[]         = "#005577";

static char tagsnormfgcolor[]            = "#bbbbbb";
static char tagsnormbgcolor[]            = "#222222";
static char tagsnormbordercolor[]        = "#444444";
static char tagsnormfloatcolor[]         = "#db8fd9";

static char tagsselfgcolor[]             = "#eeeeee";
static char tagsselbgcolor[]             = "#005577";
static char tagsselbordercolor[]         = "#005577";
static char tagsselfloatcolor[]          = "#005577";

static char hidnormfgcolor[]             = "#005577";
static char hidselfgcolor[]              = "#227799";
static char hidnormbgcolor[]             = "#222222";
static char hidselbgcolor[]              = "#222222";

static char urgfgcolor[]                 = "#bbbbbb";
static char urgbgcolor[]                 = "#222222";
static char urgbordercolor[]             = "#ff0000";
static char urgfloatcolor[]              = "#db8fd9"; */



static char c000000[]                    = "#bc7ad9"; // placeholder value

static char normfgcolor[]                = "#c0caf5";
static char normbgcolor[]                = "#15161E";
static char normbordercolor[]            = "#1a1b26";
static char normfloatcolor[]             = "#15161E";

static char selfgcolor[]                 = "#ffffff";
static char selbgcolor[]                 = "#7aa2f7";
static char selbordercolor[]             = "#7aa2f7";
static char selfloatcolor[]              = "#7aa2f7";

static char titlenormfgcolor[]           = "#c0caf5";
static char titlenormbgcolor[]           = "#15161E";
static char titlenormbordercolor[]       = "#1a1b26";
static char titlenormfloatcolor[]        = "#15161E";

static char titleselfgcolor[]            = "#9ece6a";
static char titleselbgcolor[]            = "#15161E";
static char titleselbordercolor[]        = "#15161E";
static char titleselfloatcolor[]         = "#7aa2f7";

static char tagsnormfgcolor[]            = "#c0caf5";
static char tagsnormbgcolor[]            = "#15161E";
static char tagsnormbordercolor[]        = "#1a1b26";
static char tagsnormfloatcolor[]         = "#15161E";

static char tagsselfgcolor[]             = "#7dcfff";
static char tagsselbgcolor[]             = "#1a1b26";
static char tagsselbordercolor[]         = "#7dcfff";
static char tagsselfloatcolor[]          = "#7dcfff";

static char hidnormfgcolor[]             = "#f7768e";
static char hidselfgcolor[]              = "#7dcfff";
static char hidnormbgcolor[]             = "#15161E";
static char hidselbgcolor[]              = "#15161E";

static char urgfgcolor[]                 = "#c0caf5";
static char urgbgcolor[]                 = "#15161E";
static char urgbordercolor[]             = "#6bb2c0";
static char urgfloatcolor[]              = "#15161E";

static char *statuscolors[][ColCount] = {
	/*                       fg                bg                border                float */
	[SchemeNorm]         = { "#f7768e",        normbgcolor,			normbordercolor,      normfloatcolor },
	[SchemeSel]          = { "#e0af68",        normbordercolor,		selbordercolor,       selfloatcolor },
	[SchemeTitleNorm]    = { "#7dcfff",        normbgcolor,  		titlenormbordercolor, titlenormfloatcolor },
	[SchemeTitleSel]     = { "#a9b1d6",        normbordercolor,		titleselbordercolor,  titleselfloatcolor },
	[SchemeTagsNorm]     = { "#ebcb8d",        normbgcolor,			tagsnormbordercolor,  tagsnormfloatcolor },
	[SchemeTagsSel]      = { "#bb9af7",        normbordercolor,		tagsselbordercolor,   tagsselfloatcolor },
	[SchemeHidNorm]      = { "#c0caf5",        normbgcolor,			c000000,              c000000 },
	[SchemeHidSel]       = { "#9ece6a",        normbordercolor,		c000000,              c000000 },
	[SchemeUrg]          = { "#7aa2f7",        normbgcolor,			urgbordercolor,       urgfloatcolor },
};


static char *colors[][ColCount] = {
	/*                       fg                bg                border                float */
	[SchemeNorm]         = { normfgcolor,      normbgcolor,      normbordercolor,      normfloatcolor },
	[SchemeSel]          = { selfgcolor,       selbgcolor,       selbordercolor,       selfloatcolor },
	[SchemeTitleNorm]    = { titlenormfgcolor, titlenormbgcolor, titlenormbordercolor, titlenormfloatcolor },
	[SchemeTitleSel]     = { titleselfgcolor,  titleselbgcolor,  titleselbordercolor,  titleselfloatcolor },
	[SchemeTagsNorm]     = { tagsnormfgcolor,  tagsnormbgcolor,  tagsnormbordercolor,  tagsnormfloatcolor },
	[SchemeTagsSel]      = { tagsselfgcolor,   tagsselbgcolor,   tagsselbordercolor,   tagsselfloatcolor },
	[SchemeHidNorm]      = { hidnormfgcolor,   hidnormbgcolor,   c000000,              c000000 },
	[SchemeHidSel]       = { hidselfgcolor,    hidselbgcolor,    c000000,              c000000 },
	[SchemeUrg]          = { urgfgcolor,       urgbgcolor,       urgbordercolor,       urgfloatcolor },
};

static char *tagicons[][NUMTAGS] =
{
	[DEFAULT_TAGS]        = { "1", "2", "3", "4", "5", "6", "7", "8", "9" },
	[ALTERNATIVE_TAGS]    = { "A", "B", "C", "D", "E", "F", "G", "H", "I" },
	[ALT_TAGS_DECORATION] = { "<1>", "<2>", "<3>", "<4>", "<5>", "<6>", "<7>", "<8>", "<9>" },
};

static const Rule rules[] = {
	/* xprop(1):
	 *	WM_CLASS(STRING) = instance, class
	 *	WM_NAME(STRING) = title
	 *	WM_WINDOW_ROLE(STRING) = role
	 *	_NET_WM_WINDOW_TYPE(ATOM) = wintype
	 */
	RULE(.wintype = WTYPE "DIALOG", .isfloating = 1)
	RULE(.wintype = WTYPE "UTILITY", .isfloating = 1)
	RULE(.wintype = WTYPE "TOOLBAR", .isfloating = 1)
	RULE(.wintype = WTYPE "SPLASH", .isfloating = 1)
	RULE(.class    = "steam", .tags = 1 << 8)
	RULE(.class		 = TERMCLASS, .isterminal = 1)
	RULE(.class		 = TERMINAL2, .isterminal = 1)
	RULE(.class		 = "Blender", .noswallow = 1 )
};



static const BarRule barrules[] = {
	/* monitor   bar    alignment         widthfunc                 drawfunc                clickfunc                hoverfunc                name */
	#if BAR_STATUSBUTTON_PATCH
	{ -1,        0,     BAR_ALIGN_LEFT,   width_stbutton,           draw_stbutton,          click_stbutton,          NULL,                    "statusbutton" },
	#endif // BAR_STATUSBUTTON_PATCH
	#if BAR_POWERLINE_TAGS_PATCH
	{  0,        0,     BAR_ALIGN_LEFT,   width_pwrl_tags,          draw_pwrl_tags,         click_pwrl_tags,         NULL,                    "powerline_tags" },
	#endif // BAR_POWERLINE_TAGS_PATCH
	{ -1,        0,     BAR_ALIGN_LEFT,   width_ltsymbol,           draw_ltsymbol,          click_ltsymbol,          NULL,                    "layout" },
	{ -1,        0,     BAR_ALIGN_LEFT,   width_tags,               draw_tags,              click_tags,              hover_tags,              "tags" },
	#if BAR_TAGLABELS_PATCH
	{ -1,        0,     BAR_ALIGN_LEFT,   width_taglabels,          draw_taglabels,         click_taglabels,         NULL,                    "taglabels" },
	#endif // BAR_TAGLABELS_PATCH
	#if BAR_TAGGRID_PATCH
	{ -1,        0,     BAR_ALIGN_LEFT,   width_taggrid,            draw_taggrid,           click_taggrid,           NULL,                    "taggrid" },
	#endif // BAR_TAGGRID_PATCH
	/*{ statusmon, 0,     BAR_ALIGN_RIGHT,  width_pwrl_status,        draw_pwrl_status,       click_pwrl_status,       NULL,                    "powerline_status" }*/
	/*{ statusmon, 0,     BAR_ALIGN_RIGHT,  width_statuscolors,       draw_statuscolors,      click_statuscolors,      NULL,                    "statuscolors" }, */
	/*{ statusmon, 0,     BAR_ALIGN_RIGHT,  width_status,             draw_status,            click_status,            NULL,                    "status" },*/
	{ -1,				 0,     BAR_ALIGN_RIGHT,  width_status2d,           draw_status2d,          click_status2d,          NULL,                    "status2d" },
	{  0,        0,     BAR_ALIGN_RIGHT,  width_systray,            draw_systray,           click_systray,           NULL,                    "systray" },
	#if BAR_STATUSCOLORS_PATCH && BAR_STATUSCMD_PATCH
	{ statusmon, 0,     BAR_ALIGN_RIGHT,  width_statuscolors,       draw_statuscolors,      click_statuscmd,         NULL,                    "statuscolors" },
	#elif BAR_STATUSCOLORS_PATCH
	#elif BAR_STATUS2D_PATCH && BAR_STATUSCMD_PATCH
	{ statusmon, 0,     BAR_ALIGN_RIGHT,  width_status2d,           draw_status2d,          click_statuscmd,         NULL,                    "status2d" },
	#elif BAR_STATUS2D_PATCH
	#elif BAR_POWERLINE_STATUS_PATCH
	#elif BAR_STATUS_PATCH && BAR_STATUSCMD_PATCH
	{ statusmon, 0,     BAR_ALIGN_RIGHT,  width_status,             draw_status,            click_statuscmd,         NULL,                    "status" },
	#endif // BAR_STATUS2D_PATCH | BAR_STATUSCMD_PATCH
	#if XKB_PATCH
	{  0,        0,     BAR_ALIGN_RIGHT,  width_xkb,                draw_xkb,               click_xkb,               NULL,                    "xkb" },
	#endif // XKB_PATCH
	#if BAR_FLEXWINTITLE_PATCH
	{ -1,        0,     BAR_ALIGN_NONE,   width_flexwintitle,       draw_flexwintitle,      click_flexwintitle,      NULL,                    "flexwintitle" },
	#elif BAR_TABGROUPS_PATCH
	{ -1,        0,     BAR_ALIGN_NONE,   width_bartabgroups,       draw_bartabgroups,      click_bartabgroups,      NULL,                    "bartabgroups" },
	#elif BAR_AWESOMEBAR_PATCH
	{ -1,        0,     BAR_ALIGN_NONE,   width_awesomebar,         draw_awesomebar,        click_awesomebar,        NULL,                    "awesomebar" },
	#elif BAR_FANCYBAR_PATCH
	{ -1,        0,     BAR_ALIGN_NONE,   width_fancybar,           draw_fancybar,          click_fancybar,          NULL,                    "fancybar" },
	#elif BAR_WINTITLE_PATCH
	{ -1,        0,     BAR_ALIGN_NONE,   width_wintitle,           draw_wintitle,          click_wintitle,          NULL,                    "wintitle" },
	#endif // BAR_TABGROUPS_PATCH | BAR_AWESOMEBAR_PATCH | BAR_FANCYBAR_PATCH | BAR_WINTITLE_PATCH
	#if BAR_EXTRASTATUS_PATCH
	#if BAR_STATUSCOLORS_PATCH && BAR_STATUSCMD_PATCH
	{ statusmon, 1,     BAR_ALIGN_CENTER, width_statuscolors_es,    draw_statuscolors_es,   click_statuscmd_es,      NULL,                    "statuscolors_es" },
	#elif BAR_STATUSCOLORS_PATCH
	{ statusmon, 1,     BAR_ALIGN_CENTER, width_statuscolors_es,    draw_statuscolors_es,   click_statuscolors,      NULL,                    "statuscolors_es" },
	#elif BAR_STATUS2D_PATCH && BAR_STATUSCMD_PATCH
	{ statusmon, 1,     BAR_ALIGN_CENTER, width_status2d_es,        draw_status2d_es,       click_statuscmd_es,      NULL,                    "status2d_es" },
	#elif BAR_STATUS2D_PATCH
	{ statusmon, 1,     BAR_ALIGN_CENTER, width_status2d_es,        draw_status2d_es,       click_status2d,          NULL,                    "status2d_es" },
	#elif BAR_POWERLINE_STATUS_PATCH
	{ statusmon, 1,     BAR_ALIGN_RIGHT,  width_pwrl_status_es,     draw_pwrl_status_es,    click_pwrl_status,       NULL,                    "powerline_status" },
	#elif BAR_STATUSCMD_PATCH && BAR_STATUS_PATCH
	{ statusmon, 1,     BAR_ALIGN_CENTER, width_status_es,          draw_status_es,         click_statuscmd_es,      NULL,                    "status_es" },
	#elif BAR_STATUS_PATCH
	{ statusmon, 1,     BAR_ALIGN_CENTER, width_status_es,          draw_status_es,         click_status,            NULL,                    "status_es" },
	#endif // BAR_STATUS2D_PATCH | BAR_STATUSCMD_PATCH
	#endif // BAR_EXTRASTATUS_PATCH
	#if BAR_FLEXWINTITLE_PATCH
	#if BAR_WINTITLE_HIDDEN_PATCH
	{ -1,        1,  BAR_ALIGN_RIGHT_RIGHT, width_wintitle_hidden,  draw_wintitle_hidden,   click_wintitle_hidden,   NULL,                    "wintitle_hidden" },
	#endif
	#if BAR_WINTITLE_FLOATING_PATCH
	{ -1,        1,     BAR_ALIGN_LEFT,   width_wintitle_floating,  draw_wintitle_floating, click_wintitle_floating, NULL,                    "wintitle_floating" },
	#endif // BAR_WINTITLE_FLOATING_PATCH
	#endif // BAR_FLEXWINTITLE_PATCH
};

/* layout(s) */
static const float mfact     = 0.55; /* factor of master area size [0.05..0.95] */
static const int nmaster     = 1;    /* number of clients in master area */
static const int resizehints = 0;    /* 1 means respect size hints in tiled resizals */
static const int lockfullscreen = 1; /* 1 will force focus on the fullscreen window */

static const Layout layouts[] = {
	/* symbol     arrange function */
	{ "(@)",      spiral },
	{ "TTT",      bstack },
	{ "[]=",      tile },    /* first entry is default */
	{ "[\\]",     dwindle },
	{ "[M]",      monocle },
	{ "><>",      NULL },    /* no layout function means floating behavior */
/*	{ "|M|",      centeredmaster }, */
};

/* key definitions */
#define MODKEY Mod4Mask
#define TAGKEYS(KEY,TAG) \
	{ MODKEY,                       KEY,      view,           {.ui = 1 << TAG} }, \
	{ MODKEY|ControlMask,           KEY,      toggleview,     {.ui = 1 << TAG} }, \
	{ MODKEY|ShiftMask,             KEY,      tag,            {.ui = 1 << TAG} }, \
	{ MODKEY|ControlMask|ShiftMask, KEY,      toggletag,      {.ui = 1 << TAG} },

/* helper for spawning shell commands in the pre dwm-5.0 fashion */
#define SHCMD(cmd) { .v = (const char*[]){ "/bin/sh", "-c", cmd, NULL } }

/* commands */
static char dmenumon[2] = "0"; /* component of dmenucmd, manipulated in spawn() */
static const char *dmenucmd[] = {
	"dmenu_run",
	"-m", dmenumon,
	"-fn", dmenufont,
	"-nb", normbgcolor,
	"-nf", normfgcolor,
	"-sb", selbgcolor,
	"-sf", selfgcolor,
	NULL
};
static const char *termcmd[]  = { TERMINAL, NULL };
static const char *roficmd[] = { "rofi", "-show", "combi", "-combi-modi", "drun,run", NULL };
static const char *powermenu[] = { "powermenu", NULL };
static const char *batterymode[] = { "toggle-tlp", NULL };

#include <X11/XF86keysym.h>

static const Key keys[] = {
	/* modifier                     key        function        argument */
	{ MODKEY|ShiftMask,			XK_q,      quit,           {0} },

	{ MODKEY,							XK_w,				spawn,		{.v = (const char*[]){ BROWSER, NULL } } },
	{ MODKEY|ShiftMask,		XK_w,				spawn,		{.v = (const char*[]){ BROWSER2, NULL } } },
	{ MODKEY,							XK_r,				spawn,		{.v = (const char*[]){ FILEMGR, NULL } } },
	{ MODKEY|ShiftMask,		XK_r,				spawn,		{.v = (const char*[]){ FILEMGR2, NULL } } },
	{ MODKEY,							XK_Return,	spawn,		{.v = (const char*[]){ TERMINAL, NULL } } },
	{ MODKEY|ShiftMask,		XK_Return,	spawn,		{.v = (const char*[]){ TERMINAL2, NULL } } },
	{ MODKEY,							XK_x,				spawn,		{.v = (const char*[]){ LOCKSCREEN, "-l", NULL } } },
	{ MODKEY,							XK_BackSpace, spawn,	{.v = powermenu }},
	{ Mod1Mask,						XK_space,		spawn,		{.v = roficmd } },
	{ 0,									XK_Print,		spawn,		SHCMD("flameshot gui") },
	{ 0|ShiftMask,				XK_Print,		spawn,		SHCMD("flameshot full") },


	{ 0, XF86XK_AudioRaiseVolume,							spawn,					SHCMD("pulsemixer --change-volume +5") },
	{ 0, XF86XK_AudioLowerVolume,							spawn,					SHCMD("pulsemixer --change-volume -5") },
	{ 0, XF86XK_AudioMute,										spawn,					SHCMD("pulsemixer --toggle-mute") },
	{ 0, XF86XK_AudioMicMute,									spawn,					SHCMD("pactl set-source-mute 1 toggle") },
	{ 0, XF86XK_MonBrightnessUp,							spawn,					SHCMD("light -A 5") },
	{ 0, XF86XK_MonBrightnessDown,						spawn,					SHCMD("light -U 5") },
	{ 0, XF86XK_Calculator,										spawn,					{.v = (const char*[]){ "kcalc", NULL } } },
	{ 0, XF86XK_AudioMedia,										spawn,					SHCMD("playerctl play-pause") },
	{ 0, XF86XK_AudioPlay,										spawn,					SHCMD("playerctl play-pause") },
	{ 0, XF86XK_AudioStop,										spawn,					SHCMD("playerctl stop") },
	{ 0, XF86XK_AudioPrev,										spawn,					SHCMD("playerctl previous") },
	{ 0, XF86XK_AudioNext,										spawn,					SHCMD("playerctl next") },
	{ 0, XF86XK_WWW,													spawn,					{.v = (const char*[]){ BROWSER, NULL } } },
	{ 0, XF86XK_HomePage,											spawn,					{.v = (const char*[]){ "tor-browser", NULL } } },
	{ 0, XF86XK_Display,											spawn,					{.v = (const char*[]){ "arandr", NULL } } },
	{ 0, XF86XK_Battery,											spawn,					{.v = batterymode }},
	{ 0, XF86XK_Launch1,											spawn,					SHCMD("pkill -USR1 redshift") },
	{ 0, XF86XK_AudioMedia,										spawn,					{.v = (const char*[]){ TERMINAL, "-e", "ncmpcpp", NULL } } },

	{ MODKEY,											 XK_n,			spawn,					{.v = (const char*[]){ TERMINAL, "-e", "ncmpcpp", NULL } } },
	{ MODKEY,								       XK_d,			spawn,          SHCMD("mpc toggle"), },
	{ MODKEY,								       XK_a,			spawn,          SHCMD("mpc prev") },
	{ MODKEY,								       XK_s,			spawn,          SHCMD("mpc next") },
	{	MODKEY|ShiftMask,						 XK_s,			spawn,					SHCMD("mpc volume +5") },
	{	MODKEY|ShiftMask,						 XK_a,			spawn,					SHCMD("mpc volume -5") },


	{ MODKEY,                      XK_f,			 togglefullscreen,			{0} },
/*	{ MODKEY,											 XK_m,       togglefakefullscreen,	{0} }, */
	{ MODKEY,												XK_z,          togglesticky,           {0} },
	{ MODKEY,                       XK_Right,  focusstack,     {.i = +1 } },
	{ MODKEY,                       XK_Left,   focusstack,     {.i = -1 } },
	{ MODKEY|ShiftMask,             XK_Right,  movestack,     {.i = +1 } },
	{ MODKEY|ShiftMask,             XK_Left,   movestack,     {.i = -1 } },
	{ MODKEY,                       XK_Up,     setmfact,	    {.f = +0.05} },
	{ MODKEY,                       XK_Down,	setmfact,		  {.f = -0.05} },
	{ MODKEY,                       XK_b,      togglebar,      {0} },
	{ MODKEY,                       XK_j,      focusstack,     {.i = +1 } },
	{ MODKEY,                       XK_k,      focusstack,     {.i = -1 } },
	{ MODKEY|ShiftMask,             XK_j,          movestack,              {.i = +1 } },
	{ MODKEY|ShiftMask,             XK_k,          movestack,              {.i = -1 } },
	{ MODKEY,                       XK_i,      incnmaster,     {.i = +1 } },
	{ MODKEY,                       XK_d,      incnmaster,     {.i = -1 } },
	{ MODKEY,                       XK_h,      setmfact,       {.f = -0.05} },
	{ MODKEY,                       XK_l,      setmfact,       {.f = +0.05} },
	{ MODKEY,                       XK_f,			zoom,           {0} },
	{ MODKEY,                       XK_Tab,    view,           {0} },
	{ MODKEY,					             XK_q,      killclient,     {0} },
	{ MODKEY,												XK_space,  cyclelayout,		 {.i = +1 } },
	{ MODKEY|ShiftMask,							XK_space,  cyclelayout,    {.i = -1 } },
	{ MODKEY|ControlMask,		        XK_space,  setlayout,      {0} },
	{ MODKEY,						           XK_v,			togglefloating, {0} },
	{ MODKEY,                       XK_0,      view,           {.ui = ~0 } },
	{ MODKEY|ShiftMask,             XK_0,      tag,            {.ui = ~0 } },
	{ MODKEY,                       XK_comma,  focusmon,       {.i = -1 } },
	{ MODKEY,                       XK_period, focusmon,       {.i = +1 } },
	{ MODKEY|ShiftMask,             XK_comma,  tagmon,         {.i = -1 } },
	{ MODKEY|ShiftMask,             XK_period, tagmon,         {.i = +1 } },
	TAGKEYS(                        XK_1,                      0)
	TAGKEYS(                        XK_2,                      1)
	TAGKEYS(                        XK_3,                      2)
	TAGKEYS(                        XK_4,                      3)
	TAGKEYS(                        XK_5,                      4)
	TAGKEYS(                        XK_6,                      5)
	TAGKEYS(                        XK_7,                      6)
	TAGKEYS(                        XK_8,                      7)
	TAGKEYS(                        XK_9,                      8)
	{ MODKEY,												XK_F2,		 self_restart,   {0} },
	{ MODKEY|ShiftMask,             XK_q,      quit,           {0} },
};

/* button definitions */
/* click can be ClkTagBar, ClkLtSymbol, ClkStatusText, ClkWinTitle, ClkClientWin, or ClkRootWin */
static const Button buttons[] = {
	/* click                event mask      button          function        argument */
	{ ClkLtSymbol,          0,              Button1,        cyclelayout,		{.i = +1} },
	{ ClkLtSymbol,          0,              Button3,        cyclelayout,    {.i = -1} },
/*	{ ClkWinTitle,          0,              Button2,        zoom,           {0} }, */
/*	{ ClkStatusText,        0,              Button2,        spawn,          {.v = (const char*[]){ TERMINAL, NULL } } }, */
	{ ClkClientWin,         MODKEY,         Button1,        moveorplace,    {.i = 1} },
	{ ClkClientWin,         MODKEY,			    Button2,			   dragmfact,      {0} },
/*	{ ClkClientWin,         MODKEY,         Button1,        movemouse,      {0} }, */
/*	{ ClkClientWin,         MODKEY,         Button2,        togglefloating, {0} }, */
	{ ClkClientWin,         MODKEY,         Button3,        resizemouse,    {0} },
	{ ClkTagBar,            0,              Button1,        view,           {0} },
	{ ClkTagBar,            0,              Button3,        toggleview,     {0} },
	{ ClkTagBar,            MODKEY,         Button1,        tag,            {0} },
	{ ClkTagBar,            MODKEY,         Button3,        toggletag,      {0} },
};


