//Write a program to check whether a given number is a three-digit number or not.
#include<stdio.h>
int main()
{
    int x;
    printf("ENTER THE VALUE\n");
    scanf("%d",&x);
    if(x>=99 && x<=1000)
    printf("GIVEN VALUE IS A THREE DIGIT NUMBER\n");
    else
    printf("GIVEN VALUE IS NOT THREE DIGIT NUMBER");
}