static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/
	/* {"",	"dummy",	0,	50}, // dummy block */
	{"", 	"cat /tmp/recordingicon 2>/dev/null",	0,	9},
	/* {"",	"music",	0,	11}, */
	/* {"",    "doviz", 	1,	20}, */
	{"",    "netspeed -p", 	1,	21},
	{"",	"torrent",	20,	7},
	{"", 	"vpn --status", 20,	19},
	/* {"",	"crypto btc",	0,	13}, */
	/* {"",	"crypto eth",	0,	13}, */
	{"",	"volume",	60,	10},
	{"", 	"memory",	1,	14},
	{"",	"battery",	10,	3},
	{"",	"datetime -d",	20,	1},
	{"",	"datetime -c",	10,	1},
	/* {"",	"internet",	10,	4}, */
	{"",	"keyboard -s",	0,	25},
};

/* sets delimeter between status commands. NULL character ('\0') means no delimeter. */
static char *delim = " / ";

/* vim with the following line in your vimrc/init.vim: */
/* autocmd BufWritePost ~/.local/src/dwmblocks/config.h !cd ~/.local/src/dwmblocks/; sudo make install && { killall -q dwmblocks;setsid dwmblocks & } */
