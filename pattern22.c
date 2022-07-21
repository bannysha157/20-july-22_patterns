#include<stdio.h>
int main()
{

	int i,j,k=-1,rows=5;
	for(i=1;i<=rows;i++)
	{
		for(j=1;j<=i;j++)
		{
			k=k+2;
			printf(" %d",k);
		}
		printf("\n");
	}
	return  0;

}
