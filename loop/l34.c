#include <stdio.h>

int main() {
    int N;
    printf("Enter the value of N:-");
    scanf("%d", &N);
    
    int k = 2;
    printf("0\n");
    
    for (int i = 2; i <= N; i++)
     {
        for (int j = 1; j <= i; j++) 
        {
            if (j == 1)
             {
                printf("%d ", k);
                k=k*2;
            } 
            else 
            {
                printf("%d ", k);
            }
         }  
        printf("\n");
    }
    
    return 0;
}

       
     
