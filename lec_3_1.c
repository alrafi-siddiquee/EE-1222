


//  Days to Years, Months, Days Conversion


#include<stdio.h>

int main()
{
    int total_days, years, months, days, remain1, remain2;

    printf("Enter total days: ");
    scanf("%d", &total_days);

    years = total_days / 365;
    remain1 = total_days % 365;

    months = remain1 / 30;
    remain2 = remain1 % 30;

    days = remain2;

    printf("Years = %d\n", years);
    printf("Months = %d\n", months);
    printf("Days = %d", days);

    return 0;
}
