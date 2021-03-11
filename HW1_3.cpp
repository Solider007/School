#include <stdio.h>
//Ex 42
//Out of course progress,but this way is more efficient :)
int main()
{
	int input[10];
	printf("Please enter 10 numbers:\n");
	for(int i=0;i<10;i++)
	{
		scanf("%d",&input[i]);
	}
	printf("Your numbers are:\n");
	int count=0;
	while(count<5)
	{
		printf("\t%d\t%d\n",input[count], input[9-count]);
		count++;
	}
}
