#include <stdio.h>
int main()
{
  int a,b,t;
  scanf("%d",&a);
  scanf("%d",&b);
  t=a;
  a=b;
  b=t;
  printf("%d",a);
  printf("%d",b);
  return 0;
}
