#include <stdio.h>
int main ()
{
     int u,b;
     scanf("%d",&u);
     if(u<=100)
     { 
    ("no charges");
     }
     else
      {
     if (u<=200)
        {
     b=100*5+(u-200)*10;
        }
        if(u>200)
          {
          b=100*5+200*10;
          printf("bill");
          }
        }
       return 0;
}
