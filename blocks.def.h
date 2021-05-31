//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/
	/*{"", "echo ' '",	0,	0},*/
	{"", "cat /tmp/recordingicon 2>/dev/null",	0,	9},
	{" ",	"cmusic",	0,	15},
	{"",	"memory",	10,	14},
	{"",	"brilho",	0,	12},
	{"",	"stmic",	0,	11},
	{"",	"volume",	0,	10},
	{"",	"internet",	5,	4},
	{"",	"clock",	60,	0},
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim[] = " | ";
static unsigned int delimLen = 5;
