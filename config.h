/* See LICENSE file for copyright and license details. */
/* Default settings; can be overriden by command line. */

static int topbar = 0;                      /* -b  option; if 0, dmenu appears at bottom     */
static const unsigned int alpha = 0xC0; /* -fn option overrides fonts[0]; default X11 font or font set */
static char font[] = "monospace:size=20";
static const char *fonts[] = { font, "monospace:size=20" };
static const char *prompt      = NULL;      /* -p  option; prompt to the left of input field */

static char normfgcolor[] = "#bbbbbb";
static char normbgcolor[] = "#222222";
static char selfgcolor[]  = "#eeeeee";
static char selbgcolor[]  = "#005577";
static char *colors[SchemeLast][2] = {
 	/*     fg         bg       */
	[SchemeNorm] = { normfgcolor, normbgcolor },
	[SchemeSel]  = { selfgcolor,  selbgcolor  },
	[SchemeOut]  = { "#000000",   "#00ffff" },
 };

static const unsigned int alphas[SchemeLast][2] = {
	[SchemeNorm] = { OPAQUE, alpha },
	[SchemeSel] = { OPAQUE, alpha },
	[SchemeOut] = { OPAQUE, alpha },
};

/* -l and -g options; controls number of lines and columns in grid if > 0 */
static unsigned int lines      = 20;
static unsigned int columns    = 1;

/*
 * Characters not considered part of a word while deleting words
 * for example: " /?\"&[]"
 */
static const char worddelimiters[] = " ";

/* Size of the window border */
static unsigned int border_width = 5;


/*
 * Xresources preferences to load at startup
 */
ResourcePref resources[] = {
	{ "dmenufont",        STRING, &font },
	{ "color7",      STRING, &normfgcolor },
	{ "color0", STRING, &normbgcolor },
	{ "color15",  STRING, &selfgcolor },
	{ "color8",  STRING, &selbgcolor },
	{ "prompt",      STRING, &prompt },
};
