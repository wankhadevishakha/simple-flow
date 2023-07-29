#include <stdio.h>
int main()
{
   int num,x;
   scanf("%d",&num);
   x=num%10;
   if (x==3)
   {
   printf("end with 3");
   }
  else
  {
    if(x==7)
    {
    printf("end with 7");
    }
    else
    {
     printf("no it self");
    }
  }
   return 0;
   
}
