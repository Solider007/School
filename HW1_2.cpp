#include <stdio.h>

int main()
{
	float a,b,c,sum=0.0;
	printf("Please enter three floating point values:\n");
	scanf("%f%f%f",&a,&b,&c);
	sum=a+b+c;
	printf("Sum=%-.3f",sum);
}
