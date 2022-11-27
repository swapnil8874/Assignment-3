//Write a program to check whether a given year is a leap year or not
#include<stdio.h>
int main()
{
    int x;
    printf("ENTER THE VALUE\n");
    scanf("%d",&x);
    if(x%400==0)
    printf("%d IS A LEAP YEAR\n",x);
    else
    printf("%d IS NOT A LEAP YEAR",x);
}