// adding two 2d arrays
#include<stdio.h>
void pass(int (*a)[3],int (*b)[3])
{
	int c[3][3],i,j;

	printf("\n enter elements in array\n");
          for(i=0;i<3;i++)
	  {
	    	  for(j=0;j<3;j++)
                  {
                             c[i][j]=a[i][j]+b[i][j];
			     printf("%d ",c[i][j]);
                  }
		  printf("\n");
           }
}
void main()
{
	int a[3][3],b[3][3],i,j;
	printf("\n enter elements in array\n");
	  for(i=0;i<3;i++)
		  for(j=0;j<3;j++)
		  {
			  scanf("%d",&a[i][j]);
		  }






printf("\n enter elements in second  array\n");
          for(i=0;i<3;i++)
                  for(j=0;j<3;j++)
                  {
                          scanf("%d",&b[i][j]);
                  }  



	  pass(a,b);


}  

