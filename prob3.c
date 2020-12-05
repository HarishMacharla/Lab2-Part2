#include <stdio.h>

int main()
{
    int ISBN,GS1_prefix,Group_identifier,publisher_code,Item_number,check_digit;
    printf("Enter ISBN:");
    scanf("%d-%d-%d-%d-%d",&GS1_prefix,&Group_identifier,&publisher_code,&Item_number,&check_digit);
    printf("GS1_prefix:%d\n",GS1_prefix);
    printf("Group_identifier:%d\n",Group_identifier);
    printf("publisher_code:%d\n",publisher_code);
    printf("Item_number:%d\n",Item_number);
    printf("check_digit:%d\n",check_digit);
}