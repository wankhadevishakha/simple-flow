#include <stdio.h>
int main()
{
  int l,b,h,s,t;
  scanf("%d",&l);
  scanf("%d",&b);
  scanf("%d",&h);
  s=2*(l+b)*h;
  t=2*(l*b+b*h+l*h);
  printf("%d\n",s);
  printf("%d",t);
  return 0;
}
  
