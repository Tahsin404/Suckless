/* See LICENSE file for copyright and license details. */
/* Default settings; can be overriden by command line. */

static int topbar = 1;                      /* -b  option; if 0, dmenu appears at bottom     */
static const unsigned int alpha = 0x00;     /* Amount of opacity. 0xff is opaque             */
static int centered = 1;                    /* -c option; centers dmenu on screen */
static int min_width = 200;                    /* minimum width when centered */
static const float menu_height_ratio = 2.0f;  /* This is the ratio used in the original calculation */
/* -fn option overrides fonts[0]; default X11 font or font set */
static const int user_bh = 15;               /* add an defined amount of pixels to the bar height */

static const char *fonts[] = {
	"monospace:size=15"
};
static const char *prompt      = NULL;      /* -p  option; prompt to the left of input field */
static const char *colors[SchemeLast][2] = {

                /*     fg         bg   */
	[SchemeNorm] ={ "#e794f7", "#000000" },      /* Hot Pink */
	[SchemeSel] = { "#e794f7", "#b93cc2" },
	[SchemeOut] = { "#e794f7", "#000000" }, 
	              /*     fg         bg      */
	/*[SchemeNorm] ={ "#00c9c6", "#000000" },       Cyberpunk Theme
	[SchemeSel] = { "#00c9c6", "#fff200" },
	[SchemeOut] = { "#00c9c6", "#000000" },*/
};

static const unsigned int alphas[SchemeLast][2] = {
	[SchemeNorm] = { OPAQUE, alpha },
	[SchemeSel] = { OPAQUE, alpha },
	[SchemeOut] = { OPAQUE, alpha },
};
/* -l option; if nonzero, dmenu uses vertical list with given number of lines */
static unsigned int lines      = 5;

/*
 * Characters not considered part of a word while deleting words
 * for example: " /?\"&[]"
 */
static const char worddelimiters[] = " ";

/* Size of the window border */
static unsigned int border_width = 2;
