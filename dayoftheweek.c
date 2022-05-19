#include "calendar.h"

int	weekday(int year)
{
	int	wd;
	int 	cent;
	int	year2;

	wd = 0;
	cent = year / 100;
	if (cent % 4 == 0)
		wd = 0;
	if (cent % 4 == 1)
		wd = 6;
	if (cent % 4 == 2)
		wd = 4;
	if (cent % 4 == 3)
		wd = 2;
	year2 = cent * 100;
	while (year2 != year)
	{
		if(is_odd(year2) == 1)
			wd = wd + 2;
		else
			wd++;
		year2++;
		wd = wd % 7;

	}
	return (wd);
}
