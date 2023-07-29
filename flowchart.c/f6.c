#include <stdio.h>
#include <math.h>
int main()
{
   int p,n,i,t;
   scanf("%d",&p);
   scanf("%d",&n);
   scanf("%d",&i);
   t=p*pow(1+i/100.0,n);
   printf("%d",t);
   return 0;
}
