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

/* time in seconds before the monitor shuts down */
static const int monitortime = 10;

/*
 * Xresources preferences to load at startup
 */
ResourcePref resources[] = {
	{ "normbgcolor",   STRING,   &colorname[INIT]   },
	{ "selbgcolor",    STRING,   &colorname[INPUT]  },
	{ "normbgcolor",   STRING,   &colorname[FAILED] },
	{ "color5",        STRING,   &colorname[CAPS]   },
};
