#include  <stdio.h>
int main()
{
   int a=10;
   int b=5;
   int temp;
   printf("Enter two numbers:-");
   scanf("%d%d",&a,&b);
   temp=a;
   a=b;
   b=temp;
   printf("%d %d", a,b);
   return 0;
}   
