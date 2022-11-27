//Write a program to check whether a given number is positive or non-positive
#include<stdio.h>
int main()
{
    int x;
    printf("ENTER A NUMBER\n");
    scanf("%d",&x);
    if(x>=0)
    printf("GIVEN NUMBER %d IS POSITIVE\n",x);
    else
    printf("GIVEN NUMBER IS NON POSITIVE");
}