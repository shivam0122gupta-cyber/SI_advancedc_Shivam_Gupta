#include <stdio.h>

int main() {
    int total_days;
    int years, weeks, days;

    
    printf("Enter the total number of days: ");
    scanf("%d", &total_days);
    years = total_days / 365;

    
    weeks = (total_days % 365) / 7;

    
    days = (total_days % 365) % 7;

    
    printf("\n%d days is equivalent to:\n", total_days);
    printf("Years: %d\n", years);
    printf("Weeks: %d\n", weeks);
    printf("Days:  %d\n", days);

    return 0;
}

