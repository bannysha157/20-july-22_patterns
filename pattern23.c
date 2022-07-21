#include<stdio.h>
int main()
{
	int i,j,k=-2,rows=5;
	for(i=0;i<rows;i++)
	{
		for(j=0;j<=i;j++)
		{
			k=k+2;
			printf(" %d",k);
		}
		printf("\n");
	}
	return 0;
}
