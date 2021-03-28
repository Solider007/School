#include <stdio.h>
//p145, ex33
int main(){
	float f,c;
	printf("Enter the temperature in Fahrenheit: ");
	scanf("%f",&f);
	c=(100.0/180.0)*(f-32);
	printf("Fahrenheit temperature is: %.1f\n",f);
	printf("Celsius temperature is: %.1f",c);
}
