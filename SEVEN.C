//WAP to check whether roots of a given quadratic equation are real & distinct, real & equal or imaginary roots
#include<stdio.h>
int main()
{
    int a,b,c;
    printf("ENTER THE VALUE OF A,B AND C\n");
    scanf("%d%d%d",&a,&b,&c);
    int dist=(b*b)-(4*a*c);
    if(dist==0)
    printf("ROOTS ARE REAL & EQUAL \n");
    else if(dist>0)
    printf("ROOTS ARE REAL & DISTINCT \n");
    else
    printf("ROOT ARE IMAGINARY");
}