#include "date.h"

#include <stdio.h>

date_t
createDate(int year, int month, int day)
{
    date_t date = {
        year,
        month,
        day
    };

    return date;
}

int
getYear(date_t date)
{
    return date.year;
}

int
getMonth(date_t date)
{
    return date.month;
}

int
getDay(date_t date)
{
    return date.day;
}

int
compareDates(date_t date1, date_t date2)
{
    if(date1.year != date2.year)
    {
        return date1.year - date2.year;
    }

    if(date1.month != date2.month)
    {
        return date1.month - date2.month;
    }

    return date1.day - date2.day;
}

bool
isBefore(date_t date1, date_t date2)
{
    return compareDates(date1, date2) < 0;
}

bool
isAfter(date_t date1, date_t date2)
{
    return compareDates(date1, date2) > 0;
}

bool
isEqual(date_t date1, date_t date2)
{
    return compareDates(date1, date2) == 0;
}

bool
isLeapYear(int year)
{
    return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
}

int
getDaysInMonth(int year, int month)
{
    static const int daysPerMonth[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    if(month == 2 && isLeapYear(year))
    {
        return 29;
    }

    return daysPerMonth[month - 1];
}


date_t
addYears(date_t date, int years)
{
    date.year += years;

    if(date.month == 2 && date.day == 29 && !isLeapYear(date.year))
    {
        date.day = 28;
    }

    return date;
}

date_t
addMonths(date_t date, int months)
{
    date.year  += months / 12;
    date.month += months % 12;

    if(date.month > 12)
    {
        date.year++;
        date.month -= 12;
    }

    int maxDay = getDaysInMonth(date.year, date.month);

    if(date.day > maxDay)
    {
        date.day = maxDay;
    }

    return date;
}

date_t
addDays(date_t date, int days)
{
    while(days > 0)
    {
        int daysInMonth = getDaysInMonth(date.year, date.month);

        if(date.day + days <= daysInMonth)
        {
            date.day += days;
            break;
        }

        days -= (daysInMonth - date.day + 1);

        date.month++;

        date.day = 1;

        if(date.month > 12)
        {
            date.year++;
            date.month = 1;
        }
    }

    return date;
}

date_t
subtractYears(date_t date, int years)
{
    return addYears(date, -years);
}

date_t
subtractMonths(date_t date, int months)
{
    return addMonths(date, -months);
}

date_t
subtractDays(date_t date, int days)
{
    while (days > 0)
    {
        if(date.day > days)
        {
            date.day -= days;
            break;
        }

        days -= date.day;

        date.month--;

        if(date.month < 1)
        {
            date.year--;
            date.month = 12;
        }

        date.day = getDaysInMonth(date.year, date.month);
    }

    return date;
}

int
getDaysInYear(int year)
{
    return isLeapYear(year) ? 366 : 365;
}

int
getWeekday(date_t date)
{
    int y = date.year;
    int m = date.month;
    int d = date.day;

    if(m < 3)
    {
        m += 12;
        y--;
    }

    int k = y % 100;
    int j = y / 100;
    int h = (d + 13 * (m + 1) / 5 + k + k / 4 + j / 4 + 5 * j) % 7;

    return (h + 5) % 7;
}

void
printDate(date_t date)
{
    printf("%04d-%02d-%02d", date.year, date.month, date.day);
}

date_t
readDate()
{
    date_t date;
    int result;

    do
    {
        printf("Enter date (YYYY-MM-DD): ");
        result = scanf("%d-%d-%d", &date.year, &date.month, &date.day);

        // Clear input buffer
        while(getchar() != '\n');

        if(result != 3)
        {
            printf("Invalid input. Please try again.\n");
        }
    } while(result != 3);

    return date;
}
