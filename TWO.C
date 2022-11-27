// Write a program to check whether a given number is divisible by 5 or not.
#include<stdio.h>
int main()
{
    int x;
    printf("ENTER THE VALUE\n");
    scanf("%d",&x);
    if(x%5==0)
    printf("GIVEN VALUE IS DIVISIBLE BY 5");
    else
    printf("GIVEN VALUE IS NOT DIVISIBLE BY 5");
}