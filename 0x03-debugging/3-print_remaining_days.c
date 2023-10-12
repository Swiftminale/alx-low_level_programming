#include <stdio.h>
#include "main.h"
void print_remaining_days(int month, int day, int year)
{
int day_of_year = convert_day(month, day);
int remaining_days;
if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
{
if (month > 2) // Check if it's after February in a leap year
{
day_of_year++; // Increment day for leap years after February
}
}
if (day_of_year > 365)
{
printf("Invalid date: %02d/%02d/%04d\n", month, day, year);
}
else
{
printf("Day of the year: %d\n", day_of_year);
remaining_days = 365 - day_of_year;
printf("Remaining days: %d\n", remaining_days);
}
}

