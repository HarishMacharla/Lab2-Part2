//Write a program that acceps a date from the user in form mm/dd/yyyy and then display
// it in the form yyyymmdd.

#include <stdio.h>
int main()
{
    int date,month,year;

    printf("enter month:");
    scanf("%d",&month);
    printf("enter date:");
    scanf("%d",&date);
    printf("enter year:");
    scanf("%d",&year);

    printf("Enter a date(mm/dd/yyyy):%d/%d/%d\n",month,date,year);
    printf("you entered date:%d%d%d\n",year,month,date);

    return 0;

    
    
    
    
    

}