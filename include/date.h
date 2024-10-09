#ifndef __DATE_H__
#define __DATE_H__

#include <stdbool.h>

typedef struct {
    int year;
    int month;
    int day;
} date_t;

/**
 * @brief
 */
date_t
createDate(int year, int month, int day);

int
getYear(date_t date);

int
getMonth(date_t date);

int
getDay(date_t date);

bool
isLeapYear(int year);

int
getDaysInMonth(int year, int month);

/**
 * \defgroup DateIO Date Input/Output Functions
 * @{
 */

/**
 * @brief Write a date
 * @param date The date to print
 */
void
printDate(date_t date);

/**
 * @brief Read a date
 * @return The date read
 */
date_t
readDate();

/**@}*/

/**
 * \defgroup DateArithmetic Date Arithmetic Functions
 * @{
 */

/**
 * @brief Add days to a date
 * @param date The date to which days are added
 * @param days The number of days to add
 * @return A date_t with days added to date
 */
date_t
addDays(date_t date, int days);

/**
 * @brief Add months to a date
 * @param date The date to which months are added
 * @param months The number of months to add
 * @return A date_t with months added to date
 */
date_t
addMonths(date_t date, int months);

/**
 * @brief Add years to a date
 * @param date The date to which years are added
 * @param years The number of years to add
 * @return A date_t with years added to date
 */
date_t
addYears(date_t date, int years);

/**
 * @brief Subtract days from a date
 * @param date The date from which days are subtracted
 * @param days The number of days to subtract
 * @return A date_t with days subtracted from date
 */
date_t
subtractDays(date_t date, int days);

/**
 * @brief Subtract months from a date
 * @param date The date from which months are subtracted
 * @param months The number of months to subtract
 * @return A date_t with months subtracted from date
 */
date_t
subtractMonths(date_t date, int months);

/**
 * @brief Subtract years from a date
 * @param date The date from which years are subtracted
 * @param years The number of years to subtract
 * @return A date_t with years subtracted from date
 */
date_t
subtractYears(date_t date, int years);

/**@}*/

/**
 * \defgroup DateComparison Date Comparison Functions
 * @{
 */

/**
 * @brief Compare the ordering of two dates
 * @param date1 The date to be compared against
 * @param date2 The date to compare
 * @return A positive number if date1 is greater than date2, zero if date1 is
 *         the same as date2, a negative number if date1 is less than date2
 */
int
compareDates(date_t date1, date_t date2);

/**
 * @brief Determine if a date is after another date
 * @param date1 The date to be compared against
 * @param date2 The date to compare
 * @return true if date2 is after date1, otherwise fase
 */
bool
isAfter(date_t date1, date_t date2);

/**
 * @brief Determine if a date is before another date
 * @param date1 The date to be compared against
 * @param date2 The date to compare
 * @return true if date2 is before date1, otherwise false
 */
bool
isBefore(date_t date1, date_t date2);

/**
 * @brief Determine if a date is the same as another date
 * @param date1 The date to be compared against
 * @param date2 The date to compare
 * @return true if date2 is the same as date1, otherwise false
 */
bool
isEqual(date_t date1, date_t date2);

/**@}*/

// Date information
int getDaysBetween(date_t date1, date_t date2);
int getDaysInYear(int year);
int getDayOfYear(date_t date);

/**
 * \defgroup Weekday Weekday Functions
 * @{
 */

/**
 * @brief Get the day of the week
 * @param date
 * @return The weekday number of the week
 */
int
getWeekday(date_t date);

/**
 * @brief Get the next target weekday
 * @param date The reference date
 * @param targetWeekday The weekday number of the target weekday
 * @return A date_t representing the next target weekday from date
 */
date_t
getNextWeekday(date_t date, int targetWeekday);

/**
 * @brief Get the previous target weekday
 * @param date The reference date
 * @param targetWeekday The weekday number of the target weekday
 * @return A date_t representing the previous target weekday from date
 */
date_t
getPreviousWeekday(date_t date, int targetWeekday);

/**
 * @brief Get the next Sunday given a date
 * @param date The reference date
 * @return A date_t representing the Sunday following date
 */
date_t
getNextSunday(date_t date);

/**
 * @brief Get the next Monday given a date
 * @param date The reference date
 * @return A date_t representing the Monday following date
 */
date_t
getNextMonday(date_t date);

/**
 * @brief Get the next Tuesday given a date
 * @param date The reference date
 * @return A date_t reprsenting the Tuesday following date
 */
date_t
getNextTuesday(date_t date);

/**
 * @brief Get the next Wednesday given a date
 * @param date The reference date
 * @return A date_t representing the Wednesday following date
 */
date_t
getNextWednesday(date_t date);

/**
 * @brief Get the next Thursday given a date
 * @param date The reference date
 * @return A date_t representing the Thursday following date
 */
date_t
getNextThursday(date_t date);

/** 
 * @brief Get the next Friday given a date
 * @param date The reference date
 * @return A date_t reprsenting the Friday following date
 */
date_t
getNextFriday(date_t date);

/**
 * @brief Get the next Saturday given a date
 * @param date The reference date
 * @return A date_t representing the Saturday following date
 */
date_t
getNextSaturday(date_t date);

/**
 * @brief Get the previous Sunday given a date
 * @param date The reference date
 * @return A date_t representing the Sunday preceding date
 */
date_t
getPreviousSunday(date_t date);

/**
 * @brief Get the previous Monday given a date
 * @param date The reference date
 * @return A date_t representing the Monday preceding date
 */
date_t
getPreviousMonday(date_t date);

/**
 * @brief Get the previous Tuesday given a date
 * @param date The reference date
 * @return A date_t representing the Tuesday preceding date
 */
date_t
getPreviousTuesday(date_t date);

/**
 * @brief Get the previous Wednesday given a date
 * @param date The reference date
 * @return A date_t representing the Wednesday preceding date
 */
date_t
getPreviousWednesday(date_t date);

/**
 * @brief Get the previous Thursday given a date
 * @param date The reference date
 * @return A date_t representing the Thursday preceding date
 */
date_t
getPreviousThursday(date_t date);

/**
 * @brief Get the previous Friday given a date
 * @param date The reference date
 * @return A date_t representing the Friday preceding date
 */
date_t
getPreviousFriday(date_t date);

/**
 * @brief Get the previous Saturday given a date
 * @param date The reference date
 * @return A date_t representing the Saturday preceding date
 */
date_t
getPreviousSaturday(date_t date);

/**
 * @brief Determine if a date falls on a Sunday
 * @param date The date to check
 * @return true if date falls on a Sunday, otherwise false
 */
bool
isSunday(date_t date);

/**
 * @brief Determine if a date falls on a Monday
 * @param date The date to check
 * @return true if date falls on a Monday, otherwise false
 */
bool
isMonday(date_t date);

/**
 * @brief Determine if a date falls on a Tuesday
 * @param date The date to check
 * @return true if date falls on a Tuesday, otherwise false
 */
bool
isTuesday(date_t date);

/**
 * @brief Determine if a date falls on a Wednesday
 * @param date The date to check
 * @return true if date falls on a Wednesday, otherwise false
 */
bool
isWednesday(date_t date);

/**
 * @brief Determine if a date falls on a Thursday
 * @param date The date to check
 * @return true if date falls on a Thursday, otherwise false
 */
bool
isThursday(date_t date);

/**
 * @brief Determine if a date falls on a Friday
 * @param date The date to check
 * @return true if date falls on a Friday, otherwise false
 */
bool
isFriday(date_t date);

/**
 * @brief Determine if a date falls on a Saturday
 * @param date The date to check
 * @return true if date falls on a Saturday, otherwise false
 */
bool
isSaturday(date_t date);

/**@}*/

#endif // __DATE_H__
