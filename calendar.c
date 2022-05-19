#include "calendar.h"

int	getcode(int year)
{
	return (is_odd(year) * 10 + weekday(year));
}

int	yearsdiff(int year1, int finalyear)
{
	int	cyear;
	int 	yearcode;
	int	y2code;
	int	y2;
	int 	maxdiff;
	int 	maxdiff_year;


	cyear = year1;
	y2 = cyear + 1;
	maxdiff = 0;
	maxdiff_year = cyear;
	while (cyear <= finalyear)
	{
		y2 = cyear + 1;
		yearcode = getcode(cyear);
		y2code = getcode(y2);
		while (yearcode != y2code)
			{	
				y2++;
				y2code = getcode(y2);	
			}
		if ((y2 - cyear) >= maxdiff)
		{
			maxdiff = y2 - cyear;
			maxdiff_year = cyear;
		}
		printf("Difference between %d and %d is %d years\n", cyear, y2, y2 - cyear);
		cyear++;
	}
		printf("Maximum difference between repeating years was between years %d and %d, with a difference of %d years\n", maxdiff_year, maxdiff_year + maxdiff, maxdiff);
	return (maxdiff);
}

int main(int argc, char **argv)
{
	int 	yd;
	int	year1;
	int	year2;
	int	temp;

	if (argc != 3)
		printf("Invalid parameters!\n");
	year1 = atoi(argv[1]);
	year2 = atoi(argv[2]);
	if (year1 > year2)
	{
		temp = year2;
		year2 = year1;
		year1 = temp;
	}
	yd = yearsdiff(year1, year2);
	printf ("%d\n", yd);
	return (0);
}
