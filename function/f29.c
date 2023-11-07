#include <stdio.h>
#include <stdio.h>
int main()
{
   double t,l,g;
   printf("Enter the time periods (in second):");
   scanf("%lf",&t);
   printf("Enter the length of the pendalum (in meters ):");
   scanf("%lf",&l);
   g==(2*pi*pi*l)/(t*t);
   printf("accerlation due to gravity :%.2lf m/s^2\n",g);
   return 0;
}
