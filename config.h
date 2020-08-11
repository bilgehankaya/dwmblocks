//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/
	{"", "cat /tmp/recordingicon 2>/dev/null",	0,	9},
	/* {"",	"music",	0,	11},*/
	/*{"",	"pacpackages",	0,	8},*/
	/*{"",	"news",		0,	6},*/
	{"",	"torrent",	20,	7},
	{"", 	"vpn_state", 	5,	19},
	{"",	"cat ~/.cache/crypto",	0,	13},
	/* {"",	"memory",	10,	14}, */
	/* {"",	"cpu",		10,	18}, */
	/* {"",	"moonphase",	18000,	17}, */
	//{"",	"weather",	18000,	5},
	{"",	"volume",	0,	10},
	{"", 	"mem",		3,	14},
	{"",	"battery_bilge",	10,	3},
	{"",	"date '+  %B %d (%a) %I:%M %p '",	60,	1},
	/* {" ",	"kbselect", 	0,	21}, */
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char *delim = "|";

// Have dwmblocks automatically recompile and run when you edit this file in
// vim with the following line in your vimrc/init.vim:

// autocmd BufWritePost ~/.local/src/dwmblocks/config.h !cd ~/.local/src/dwmblocks/; sudo make install && { killall -q dwmblocks;setsid dwmblocks & }
