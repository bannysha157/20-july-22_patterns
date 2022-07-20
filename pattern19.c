#include<stdio.h>
int main()
{
	int i,j,rows=5,n=0;
	for(i=1;i<=rows;i++)
	{
		for(j=1;j<=i;j++)
		{
			n++;
			printf(" %d",n%2);
		}
		printf("\n");
	}
	return 0;
}
