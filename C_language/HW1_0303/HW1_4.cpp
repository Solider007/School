#include <stdio.h>
//Ex 43
int main()
{
	int input[9];
	printf("Input:\n");
	for(int i=0;i<9;i++)
	{
		scanf("%d",&input[i]);
	}
	printf("Ouput:\n");
	int count=0;
	while(count<9)
	{
		printf("%d\t",input[count]);
		if(count==2 || count==5 || count==8)
		{
			printf("\n");
		}
		count++;
	}
}
