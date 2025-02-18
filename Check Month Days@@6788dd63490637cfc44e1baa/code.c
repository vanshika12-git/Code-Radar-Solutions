#include <stdio.h>
int main()
{
    int d;
    scanf("%d",&d);
    switch (d) {
        case 1: // January
        case 3: // March
        case 5: // May
        case 7: // July
        case 8: // August
        case 10: // October
        case 12: // December
            return 31;
        case 4: // April
        case 6: // June
        case 9: // September
        case 11: // November
            return 30;
        case 2: // February
            if (isLeapYear(year)) {
                return 29; // Leap year
            } else {
                return 28; // Non-leap year
            }
        default:
            return -1;
 }         