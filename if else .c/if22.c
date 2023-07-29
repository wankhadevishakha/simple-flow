#include <stdio.h>
int main()
{
   int NH,NA,per;
   scanf("%d",&NH);
   scanf("%d",&NA);
   scanf("%d",&per);
   per=NA/NH*100;
   printf("%d",per);
   if(per>=75){
   printf("allowed to sit");
   }
   else{
   printf("not allowed sit ");
   }
   return 0;
   }   
