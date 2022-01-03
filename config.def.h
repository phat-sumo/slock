/* user and group to drop privileges to */
static const char *user  = "nobody";
static const char *group = "nobody";

static const char *colorname[NUMCOLS] = {
	[BACKGROUND] =  "#030303", /* after initialization */
	[INIT] =        "#090909", /* after initialization */
	[INPUT] =       "#00fbc3", /* during input */
	[FAILED] =      "#fe3198", /* wrong password */
};

/* treat a cleared input like a wrong password (color) */
static const int failonclear = 1;

/* default message */
static const char * message = "Welcome back! Staying long?";

/* text color */
static const char * text_color = "#fbf5f3";

/* font name (must be a valid size) */
static const char * font_name = "Monoid:style=Retina:pixelsize=10:antialias=true:autohint=false";
// static const char * font_name = "-*-monoid-light-r-*--12-*-100-100-p-0-iso8859-1";


/* insert grid pattern with scale 1:1, the size can be changed with logosize */
static const int logosize = 75;
static const int logow = 12;	/* grid width and height for right center alignment*/
static const int logoh = 6;

static XRectangle rectangles[9] = {
	/* x	y	  w	  h */
	{ 0,	3,	1,	3 },
	{ 1,	3,	2,	1 },
	{ 0,	5,	8,	1 },
	{ 3,	0,	1,	5 },
	{ 5,	3,	1,	2 },
	{ 7,	3,	1,	2 },
	{ 8,	3,	4,	1 },
	{ 9,	4,	1,	2 },
	{ 11,	4,	1,	2 },

};

