// Write a program to check whether a given number is an even number or an odd 
//number without using % operator
#include<stdio.h>
int main()
{
    int x;
    printf("ENTER THE VALUE\n");
    scanf("%d",&x);
    if(x&1)
    printf("GIVEN VALUE IS ODD");
    else
    printf("GIVEN VALUE IS EVEN");
}