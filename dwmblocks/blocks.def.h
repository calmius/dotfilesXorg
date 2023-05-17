//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/
	{"\uf966 ", "checkupdates | wc -l", 60, 0},

	{"\uf57b", "upower -i /org/freedesktop/UPower/devices/battery_BAT0 | grep -i percentage| awk '{print $2}'", 60, 0},

	{"\uf64f ", "date '+%I:%M%p %b %d %a'",					5,		0},
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim[] = " | ";
static unsigned int delimLen = 5;
