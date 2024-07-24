// Program to whether number is Armstrong number or not
#include<stdio.h>

int main()
{
    int a,r,sum=0,temp;
    //accepting input from user
    printf("Enter a number to check whether is Armstrong Number: ");
    if(scanf("%d", &a) != 1)
    {
        printf("Invalid input\n");
        return 1;
    }
    temp = a;
    //condition for checking if sum of individual numbers cube is equal to number
    do
    {
        r = a % 10;
        sum += r*r*r;
        a = a/10;

    } while (a>0);

    //printing final result.
    if(temp == sum)
    {
        printf("It is Armstrong Number.");
    }
    else
    {
        printf("It is not Armstrong Number.");
    }
    return 0;
}