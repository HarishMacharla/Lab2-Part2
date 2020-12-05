


#include <stdio.h>
int main()
{
    int x1,x2,x3,x4,x5,x6,x7,x8,x9,x10,x11,x12,x13,x14,x15,x16;
    int row1_sum,row2_sum,row3_sum,row4_sum;
    int column1_sum,column2_sum,column3_sum,column4_sum;
    int diag1_sum,diag2_sum;

    printf("enter number from 1-16 in any order:");
    scanf("%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,",&x1,&x2,&x3,&x4,&x5,&x6,&x7,&x8,&x9,&x10,&x11,&x12,&x13,&x14,&x15,&x16);

    row1_sum=x1+x2+x3+x4;
    row2_sum=x5+x6+x7+x8;
    row3_sum=x9+x10+x11+x12;
    row4_sum=x13+x14+x15+x16;

    column1_sum=x1+x5+x9+x13;
    column2_sum=x2+x6+x10+x14;
    column3_sum=x3+x7+x11+x15;
    column4_sum=x4+x8+x12+x16;          

    diag1_sum=x1+x6+x11+x16;
    diag2_sum=x13+x10+x7+x4;

    printf("%2d %2d %2d %2d\n", x1, x2, x3, x4);
    printf("%2d %2d %2d %2d\n", x5, x6, x7, x8);
    printf("%2d %2d %2d %2d\n", x9, x10, x11, x12);
    printf("%2d %2d %2d %2d\n", x13, x14, x15, x16);

    printf("rows sums:%d %d %d %d\n",row1_sum,row2_sum,row3_sum,row4_sum);
    printf("column_sums :%d %d %d %d\n",column1_sum,column2_sum,column3_sum,column4_sum);
    printf("diagonal sum :%d %d \n",diag1_sum,diag2_sum);

}