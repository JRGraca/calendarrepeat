#include "calendar.h"

bool    is_odd(int year)
{
        if(year % 4 != 0)
                return (0);
        else if(year % 400 == 0)
                return (1);
        else if (year % 100 == 0)
                return (0);
        else
                return (1);
}
