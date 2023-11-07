#include <stdio.h>
int main()
{
   int arr[]={5,5,5,5,6,7,8,9};
   int n = sizeof(arr);
   int k= 5;
   printf("indices of %d in the array : ", k);
   for (int i=0; i<=n;i++)
   {
      if(arr[i]==k)
      {
        printf("%d", i);
      }
    }    
    printf("\n");
    return 0;
}    
