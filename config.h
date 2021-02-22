static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/
	/* {"",    "doviz", 	1,	20}, */
	{"",    "netspeed", 	1,	21},
	/* {"",	"torrent",	20,	7}, */
	{"", 	"vpn -s", 	20,	19},
	/* {"",	"crypto btc",	0,	13}, */
	/* {"",	"crypto eth",	0,	13}, */
    /* {"",    "news -s",  0,  6}, */
	{"",	"volume",	20,	10},
	{"", 	"memory",	1,	14},
	{"",	"battery",	30,	3},
	{"",	"datetime -d",	60,	1},
	{"",	"datetime -c",	20,	1},
	/* {"",	"internet",	10,	4}, */
	{"",	"keyboard -s",	0,	25},
};

/* sets delimeter between status commands. NULL character ('\0') means no delimeter. */
static char *delim = "  ";

/* vim with the following line in your vimrc/init.vim: */
/* autocmd BufWritePost ~/.local/src/dwmblocks/config.h !cd ~/.local/src/dwmblocks/; sudo make install && { killall -q dwmblocks;setsid dwmblocks & } */
