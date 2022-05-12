# calendarrepeat
A small program that tells you when you can reuse a calendar

The impetus for writing this small piece of code was a meme that told you that a certain month had 5 Thursdays (or whatever it was) and that only happens every 54654768 years. Smelling BS, I decided to write this.
The program takes two years as CL parameters and tells you, for each year in the interval between those two years, when you can re-use that calendar. It also tells you the longest interval between repeating years (hint - it won't ever be more than 40).

Bugs:
- The program assumes the Gregorian Calendar has always been and always will be. Therefore, it will be incorrect for dates before 1582.
- The program assumes there will be a year 0. So, even taking into account the above, it will be *even more* incorrect for intervals that span that (fictious) year.
