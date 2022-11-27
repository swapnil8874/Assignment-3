//Write a program to find the greatest among three given numbers. Print number once 
// if the greatest number appears two or three times.
#include<stdio.h>
int main()
{
    int a,b,c;
    printf("ENTER THE VALUE\n");
    scanf("%d%d%d",&a,&b,&c);
    if(a>b && a>c)
    printf("A is greater \n");
    else if(b>a && b>c)
    printf("b is greater \n");
    else
    printf("c is greter");
}