 #include <stdio.h>

int main() 
{
    int m,n, p, q, sum = 0;
    printf("Enter the m: ");
    scanf("%d", &m);

    printf("Enter the n: ");
    scanf("%d", &n);

    printf("Enter the value of p: ");
    scanf("%d", &p);

    printf("Enter the value of q: ");
    scanf("%d", &q);

    for (int i = m; i <= n; ++i) {
        if (i % p == 0 && i % q != 0) {
            sum += i;
        }
    }

    printf("Sum of numbers divisible by %d but not divisible by %d between %d and %d is: %d\n", p, q, m, n, sum);

    return 0;
}
       
   
