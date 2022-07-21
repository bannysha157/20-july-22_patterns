#include<stdio.h>
int main()
{
	int i,j,rows=5;
	for(i=0;i<rows;i++)
	{
		for(j=0;j<=i;j++)
		{
			(i%2==0)?printf("a"):printf("A");
		}
		printf(" \n");
	}
	return 0;
}
