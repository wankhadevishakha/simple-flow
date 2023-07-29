#include <stdio.h>
int main()
{
  int sp,cp,p,per;
  scanf("%d",&sp);
  scanf("%d",&cp);
  if(sp>cp){
  p=sp-cp;
  per=p/cp*100;
  printf("%d",p,per);
  }
  else{
  printf("invalid");
  }
  return 0;
  }
