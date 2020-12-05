#include <stdio.h>

int main()
{
    int item_number, date, month, year;
    float unit_price;
    printf("Enter item number:");
    scanf("%d", &item_number);
    printf("enter unit price:");
    scanf("%f", &unit_price);
    printf("enter purchase date(mm/dd/yyyy):");
    scanf("%d/%d/%d", &month, &date, &year);

    printf("Item\t\tUnit\t\tPurchase\n\t\tPrice\t\tdate\n");
    printf("%d\t\t$%7.2f\t%.2d/%.2d/%d\n",item_number,unit_price,month,date,year);


}