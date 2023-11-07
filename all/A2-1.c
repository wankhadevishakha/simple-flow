/*#include <stdio.h>
int main()
{
  int N;
  printf("Enter the value of N :-");
  scanf("%d", &N);
  int sum = 0,p;
  for (int i = 1; i <= N; i++)
  {
      p=i/1;
     sum = sum + p;
     
  }
  printf("%d", sum);
  return 0;
} */ 
#include <stdio.h>

int main() {
    int n;
    double sum = 0.0;
    int i = 1;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Please enter a positive integer for n.\n");
    } else {
        while (i <= n) {
            sum += 1.0 / i;
            i++;
        }

        printf("The sum of the series is: %lf\n", sum);
    }

    return 0;
}
   
