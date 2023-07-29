#include <stdio.h>
int main()
{
  int sp,cp,l,per;
  scanf("%d%d",&sp,&cp);
  if(sp<cp){
  l=cp-sp;
  per=l/cp*100;
  printf("%d",l);
  }
  else{
  printf("invalid");
  }
  return 0;
  }
