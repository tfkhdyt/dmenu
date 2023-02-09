/* See LICENSE file for copyright and license details. */
/* Default settings; can be overriden by command line. */

static int topbar = 1;                      /* -b  option; if 0, dmenu appears at bottom     */
static int centered = 1;                    /* -c option; centers dmenu on screen */
static int min_width = 500;                    /* minimum width when centered */
static int fuzzy = 1;                      /* -F  option; if 0, dmenu doesn't use fuzzy matching     */
/* -fn option overrides fonts[0]; default X11 font or font set */
static const char *fonts[] = {
  "JetBrainsMono Nerd Font:size=12:antialias=true:autohint=true",
  "Noto Color Emoji:size=12:antialias=true:autohint=true",
  "Noto Serif CJK JP:size=12:antialias=true:autohint=true",
  "Noto Serif CJK KR:size=12:antialias=true:autohint=true",
  "Noto Serif CJK SC:size=12:antialias=true:autohint=true",
};
static const char *prompt      = NULL;      /* -p  option; prompt to the left of input field */
static const char *colors[SchemeLast][2] = {
	/*     fg         bg       */
	[SchemeNorm] = { "#cdd6f4", "#1e1e2e" },
	[SchemeSel] = { "#1e1e1e", "#f38ba8" },
	[SchemeSelHighlight] = { "#cba6f7", "#1e1e2e" },
	[SchemeNormHighlight] = { "#cba6f7", "#1e1e2e" },
	[SchemeOut] = { "#000000", "#00ffff" },
};
/* -l option; if nonzero, dmenu uses vertical list with given number of lines */
static unsigned int lines      = 5;
/* -h option; minimum height of a menu line */
static unsigned int lineheight = 33;
static unsigned int min_lineheight = 33;

/*
 * Characters not considered part of a word while deleting words
 * for example: " /?\"&[]"
 */
static const char worddelimiters[] = " ";

/* Size of the window border */
static const unsigned int border_width = 3;
