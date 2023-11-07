#include <stdio.h>
int main()
{
int d,c;
printf("Enter the No. of days: ");
scanf("%d",&d);
	if(d<=5)
	{
		c=d*2;
	}
	else if(d<=10)
	{
		c=(5*2)+((d-5)*3);
	}
	else if(d<=15)
	{
		c=(5*2)+(5*3)+((d-10)*4);
	}
	else
	{
		c=(5*2)+(5*3)+(5*4)+((d-15)*5);
	}
	printf("%d",c);
return 0;
}
