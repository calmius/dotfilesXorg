/* See LICENSE file for copyright and license details. */
/* Default settings; can be overriden by command line. */

static int topbar = 1;                      /* -b  option; if 0, dmenu appears at bottom     */
static int fuzzy = 1;                      /* -F  option; if 0, dmenu doesn't use fuzzy matching     */
/* -fn option overrides fonts[0]; default X11 font or font set */
static const char *fonts[] = {
	"Liga Iosevka:size=16"
};
static const char *prompt      = NULL;      /* -p  option; prompt to the left of input field */
static const char *colors[SchemeLast][2] = {
	/*     fg         bg       */
//	[SchemeNorm] = { "#bbbbbb", "#222222" },
//	[SchemeSel] = { "#eeeeee", "#938eba" },
//	[SchemeSelHighlight] = { "#Abc891", "#938eba" },
//	[SchemeNormHighlight] = { "#Abc891", "#222222" },
//	[SchemeOut] = { "#000000", "#00ffff" },

	[SchemeNorm] = { "#bbbbbb", "#222222" },
	[SchemeSel] = { "#eeeeee", "#8a9bca" },
	[SchemeSelHighlight] = { "#Abc891", "#8a9bca" },
	[SchemeNormHighlight] = { "#Abc891", "#222222" },
	[SchemeOut] = { "#000000", "#00ffff" },
};
/* -l and -g options; controls number of lines and columns in grid if > 0 */
static unsigned int lines      = 4;
static unsigned int columns    = 1;

/*
 * Characters not considered part of a word while deleting words
 * for example: " /?\"&[]"
 */
static const char worddelimiters[] = " ";

/* Size of the window border */
static const unsigned int border_width = 2;
