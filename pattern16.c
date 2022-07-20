#include<stdio.h>
int main()
{
	int i,j,k,rows=5;
		for(i=1;i<rows;i++)
		{
			k=102;
			for(j=1;j<=i;j++)
			{
				k=k-1;
				printf(" %c",k);
			}
			printf("\n");
		}
	return 0;
}
