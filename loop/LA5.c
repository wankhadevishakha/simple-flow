/*#include <stdio.h>

int main() {
    int N;
    unsigned long long product = 1; 

    printf("Enter a positive integer N: ");
    scanf("%d", &N);

    if (N < 0) {
        printf("N should be a positive integer.\n");
    } else {
        for (int i = 1; i <= N; i++) {
            product *= i; // Multiply the product by 'i'
        }

        printf("The product of the first %d natural numbers is: %llu\n", N, product);
    }

    return 0;
}*/

#include<stdio.h>
int main()
{
	int n,p=1;
	printf("enter a number n:");
	scanf("%d",&n);
	
	for(int i=1; i<=n; i++)
	{
	p=p*i;
	}
	printf("%d",p);
return 0;
}
