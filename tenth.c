//0. Write a program which takes the cost price and selling price of a product from the 
//user. Now calculate and print profit or loss percentage
#include<stdio.h>
int main()
{
    int cp,sp;
    printf("ENTER THE VALUE");
    scanf("%d%d",&cp,&sp);
    if(sp>cp)
    {
     int profit = (sp-cp/cp)*100;
      printf("PROIFT PERCENTAGE IS -- %d ",profit);
    }
    else if(sp<cp)
    {
    int loss = (cp-sp/cp)*100;
    printf("LOSS PERCENTAGE IS -- %d",loss);
}
}