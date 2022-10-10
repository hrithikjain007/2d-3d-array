#include<stdio.h>
void pass(int (*q)[3][3])

{
	int i,j,k,s;
	  for(i=0;i<3;i++)
	  {
                for(j=0;j<3;j++)
		{
                        for(k=0,s=0;k<3;k++)
			{
                                 s=s+q[i][j][k];

			}	 
				 printf("\narray[%d][%d][%d] sum=%d\n",i,j,k,s);
			 
           }     }
}
void main()
{
	int a[3][3][3],i,j,k,s;
	printf("\nenter the elements\n");
	for(i=0;i<3;i++)
		for(j=0;j<3;j++)
			for(k=0;k<3;k++)

	                     scanf("%d",&a[i][j][k]);
	pass(a);

}

