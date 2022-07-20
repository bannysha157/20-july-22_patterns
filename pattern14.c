#include<stdio.h>
int main()
{
	int i,j,rows=5;
	char ch;
	for(i=1;i<=rows;i++)
	{
		ch='a';
		for(j=1;j<=i;j++)
		{
			printf(" %c",ch);
			ch++;
	}
	printf("\n");

	}
	return 0;
}
