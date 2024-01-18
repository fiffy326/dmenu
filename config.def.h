/* See LICENSE file for copyright and license details. */
/* Default settings; can be overriden by command line. */

static int topbar = 1; /* -b option; if 0, dmenu appears at bottom */
static int fuzzy  = 1; /* -F option; if 0, dmenu doesn't use fuzzy matching */
static int centered  = 0;   /* -c option; centers dmenu on screen */
static int min_width = 500; /* minimum width when centered */

/* -fn option overrides fonts[0]; default X11 font or font set */
static       char font[]   = "monospace:size=10";
static const char *fonts[] = {
	font,
	"monospace:size=10"
};

static char *prompt = NULL; /* -p option; prompt to the left of input field */

static char col_norm_fg[] = "#bbbbbb";
static char col_norm_bg[] = "#222222";
static char col_sel_fg[]  = "#eeeeee";
static char col_sel_bg[]  = "#005577";
static char col_out_fg[]  = "#000000";
static char col_out_bg[]  = "#00ffff";
static char *colors[SchemeLast][2] = {
	/*               fg           bg          */
	[SchemeNorm] = { col_norm_fg, col_norm_fg },
	[SchemeSel]  = { col_sel_fg,  col_sel_bg  },
	[SchemeOut]  = { col_out_fg,  col_out_bg   },
};

/* -l option; if nonzero, dmenu uses vertical list with given number of lines */
static unsigned int lines = 0;

/*
 * Characters not considered part of a word while deleting words
 * for example: " /?\"&[]"
 */
static const char worddelimiters[] = " ";

/* Size of the window border */
static unsigned int border_width = 0;

/* Xresources preferences to load at startup */
ResourcePref resources[] = {
	{ "topbar",       INTEGER, &topbar       },
	{ "fuzzy",        INTEGER, &fuzzy        },
	{ "centered",     INTEGER, &centered     },
	{ "min_width",    INTEGER, &min_width    },
	{ "font",         STRING,  &font         },
	{ "prompt",       STRING,  &prompt       },
	{ "col_norm_fg",  STRING,  &col_norm_fg  },
	{ "col_norm_bg",  STRING,  &col_norm_bg  },
	{ "col_sel_fg",   STRING,  &col_sel_fg   },
	{ "col_sel_bg",   STRING,  &col_sel_bg   },
	{ "col_out_fg",   STRING,  &col_out_fg   },
	{ "col_out_bg",   STRING,  &col_out_bg   },
	{ "lines",        INTEGER, &lines        },
	{ "border_width", INTEGER, &border_width },
};

/* vim:set ts=4 sts=4 sw=4 */
