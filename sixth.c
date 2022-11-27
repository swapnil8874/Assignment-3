// WAP to print greater between two numbers. Print one number of both are the same
#include<stdio.h>
int main()
{
    int x,y;
    printf("ENTER THE VALUE\n");
    scanf("%d \n %d",&x,&y);
    if(x>=y)
    printf("%d is greater than %d\n",x,y);
    else
    printf("%d is greater than %d",y,x);
}