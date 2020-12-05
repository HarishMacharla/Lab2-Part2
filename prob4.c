//write a program that prompts the user to enter a telephone number in the form of (xxx) xxx-xxxx
//and then displys the number in the form of xxx.xxx.xxxx

#include <stdio.h>
int main()
{
    int a, b, c;

    printf("Enter phone number(xxx) xxx-xxxx:");
    scanf("(%d) %d-%d", &a, &b, &c);

    printf("you entered:%d.%d.%d\n",a,b,c);
    

    return 0;

}
