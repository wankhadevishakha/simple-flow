#include <stdio.h>
int main()
{
    float u,a,b;
    printf("Enter the value of u:-");
    scanf("%f",&u);
    if(u<=50)
    {
    a=u*0.50;
    b=a*20/100;
    printf("%f",b);
    }
      else if(u<=150)
      {
      a=50*0.5+(u-100)*0.75;
      b=a*20/100;
      printf("%f",b);
      }
      
       else if(u<=250)
         {
         a=50*0.5+100*0.75+(u-100)*1.20;
         b=a*20/100;
         printf("%f",b);
         }
       
         else if(u<=250)
           {
           a=50*0.5+100*0.75+150*1.20+(u-250)*1.50;
           b=a*20/100;
           printf("%f",b);
           }
         
         return 0;
}         
           
           
           
           
           
           
           
           
           
           
           
           
                   
    
