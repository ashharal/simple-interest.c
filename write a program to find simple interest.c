/******************************************************************************
Name :- Haral Ashwini
Assignment No : 2
 WAP to calculate Simple interest.

*******************************************************************************/
#include<stdio.h>
int main()
{
    double p, r,n,SI;
    printf("enter the principapl amount:");
    scanf("%lf",&p);
    
    printf("\n enter the rate  of simple interest:");
    scanf("%lf",&r);
    
    printf("\n enter the number of years:");
    scanf("%lf",&n);
   
  SI = p*r*n/100;
  printf("simple interest = %.2lf",SI);
  return 0;
}

/* output
enter the principapl amount:23

 enter the rate  of simple interest:5.5

 enter the number of years:10
simple interest = 12.65
*/
