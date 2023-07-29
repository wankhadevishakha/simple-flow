#include <stdio.h>
int main()
{
   int salary,services;
   scanf("%d",&salary);
   scanf("%d",&services);
   if (services > 5){
    salary=salary*5/100;
   printf("net salary");
   }
   else{
   printf("no bonus");
   }
   return 0;
   }
