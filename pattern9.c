#include<stdio.h>
int main()
{
	int i,j,rows=5,num=1;
	for(i=1;i<=rows;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf(" %d",num*num);
			num++;
		}
		printf(" \n");
	}return 0;
}
