#include<stdio.h>
void pass(int (*p)[3])
{
	int i,j,s;
	for(i=0;i<2;i++)
	{
		for(j=0,s=0;j<3;j++)
		{
			s=s+p[i][j];
		}
		printf("\nrow %d sum=%d\n",i,s);
	}
}
void main()
{
	int a[2][3]={{1,2,3},{1,2,3}};
         pass(a);

}

