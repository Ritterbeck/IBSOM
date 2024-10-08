#ifndef DATE_H
#define DATE_H

#include <stdbool.h>

typedef struct {
    int year;
    int month;
    int day;
} date_t;

// Basic date operations
date_t createDate(int year, int month, int day);
int getYear(date_t date);
int getMonth(date_t date);
int getDay(date_t date);
bool isLeapYear(int year);
int getDaysInMonth(int year, int month);
int compareDates(date_t date1, date_t date2);

// Date arithmetic
date_t addDays(date_t date, int days);
date_t addMonths(date_t date, int months);
date_t addYears(date_t date, int years);
date_t subtractDays(date_t date, int days);
date_t subtractMonths(date_t date, int months);
date_t subtractYears(date_t date, int years);

// Date information
int getDaysBetween(date_t date1, date_t date2);
int getWeekday(date_t date);
int getDaysInYear(int year);
int getDayOfYear(date_t date);

// Next weekday functions
date_t getNextWeekday(date_t date, int targetWeekday);
date_t getNextSunday(date_t date);
date_t getNextMonday(date_t date);
date_t getNextTuesday(date_t date);
date_t getNextWednesday(date_t date);
date_t getNextThursday(date_t date);
date_t getNextFriday(date_t date);
date_t getNextSaturday(date_t date);

// Previous weekday functions
date_t getPreviousWeekday(date_t date, int targetWeekday);
date_t getPreviousSunday(date_t date);
date_t getPreviousMonday(date_t date);
date_t getPreviousTuesday(date_t date);
date_t getPreviousWednesday(date_t date);
date_t getPreviousThursday(date_t date);
date_t getPreviousFriday(date_t date);
date_t getPreviousSaturday(date_t date);

// Weekday check functions
bool isSunday(date_t date);
bool isMonday(date_t date);
bool isTuesday(date_t date);
bool isWednesday(date_t date);
bool isThursday(date_t date);
bool isFriday(date_t date);
bool isSaturday(date_t date);

// Date comparison
bool isBefore(date_t date1, date_t date2);
bool isAfter(date_t date1, date_t date2);
bool isEqual(date_t date1, date_t date2);

// I/O operations
void printDate(date_t date);
date_t readDate();

#endif // DATE_H
