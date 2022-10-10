#include<stdio.h>
void pass(int (*q)[5][5])

{
        int i,j,c,r,k;
        printf("\nenter position to delete\n");
        printf("\n enter row\n");
        scanf("%d",&r);
        printf("\n enter colum\n");
        scanf("%d",&c);
        printf("\n enter hight\n");
	scanf("%d",&k);

        q[r][c][k]=0;









        for(i=0;i<3;i++)
        {
                for(j=0;j<3;j++)
                        printf(" %d ",q[i][j][k]);
                printf("\n");
        }



}

void main()
{
        int a[5][5][5],b,c,i,j,k;
        printf("\n enter the elements\n");
          for(i=0;i<3;i++)
		  for(j=0;j<3;j++)
			  for(k=0;k<3;k++)
				  scanf("%d",&a[i][j][k]);

          pass(a);

 }
 

























~        
