#include <stdio.h>
#include <stdlib.h>


int main()
{
	int num;
	int i = 0;

	printf("Digite o numero que voce quer que seja feita a tabauda:");
	scanf("%d",&num);
	printf("\n Tabuada:\n");

	for(i = 0; i<=10;i++)
	{
		printf("%d X %d = %d\n",num,i,(num*i));
	}
}