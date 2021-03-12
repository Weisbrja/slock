/* user and group to drop privileges to */
static const char *user  = "weisbrja";
static const char *group = "weisbrja";

static const char *colorname[NUMCOLS] = {
	[INIT]   = "black",   /* after initialization */
	[INPUT]  = "#005577", /* during input */
	[FAILED] = "#CC3333", /* wrong password */
	[CAPS]   = "red",     /* CapsLock on */
};

/* treat a cleared input like a wrong password (color) */
static const int failonclear = 0;

/*
 * Xresources preferences to load at startup
 */
ResourcePref resources[] = {
	{ "normbgcolor",   STRING,   &colorname[INIT]   },
	{ "selbgcolor",    STRING,   &colorname[INPUT]  },
	{ "color4",        STRING,   &colorname[FAILED] },
	{ "color1",        STRING,   &colorname[CAPS]   },
};
