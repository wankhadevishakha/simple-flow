#include <stdio.h>
int main()
{
  int a,b,add,sub,mul;
  float div;
  printf("Enter the value");
  scanf("%d",&a);
  scanf("%d",&b);
  add=a+b;
  sub=a-b;
  div=a/b;
  mul=a*b;
  printf("%d",add);
  printf("%d",sub);
  printf("%f",div);
  printf("%d",mul);
  return 0;
}
  
