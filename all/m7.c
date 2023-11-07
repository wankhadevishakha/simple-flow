#include <stdio.h>
int main()
{
  int n,a,b;
  printf("Enter the number :-");
  scanf("%d",&n);
    if (n>2000)
    {
        a=n/2000;
        a=(a);
        b=n%2000;
        printf("it is a add num (a)%2000");
    }
     else if(n>500)
     {
         a=n/500;
         a=(a);
         b=n%500;
         printf("it is a add num (a)%500");
     }
     else if (n>200)
     {
          a=n/200;
          a=(a);
          b=n%200;
          printf("it is add num (a)%200");
     }
     else if(n>100)
     {
          a=n/100;
          a=(a);
          b=n%100;
          printf("it is add num (a)%100");     
     }
     else if(n>20)
     {
          a=n/20;
          a=(a);
          b=n%20;
     }
     else if(n>10)
     {
          a=n/10;
          a=(a);
          b=n%10;   
          printf("it is add num (a)%10");   
     }
     else
     {
          a=n/5;
          a=(a);
          b=n%5;
          printf("it is add num (a)%5");
     }
     return 0;
}
