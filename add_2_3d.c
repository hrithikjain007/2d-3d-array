//wap to add two 3d array

#include<stdio.h>
void pass(int (*a)[3][3],int (*b)[3][3])
{
        int c[3][3][3],i,j,k;

        printf("\n enter elements in array\n");
          for(i=0;i<3;i++)
          {
                  for(j=0;j<3;j++) 
			  for(k=0;k<3;k++)
                            {
                             c[i][j][k]=a[i][j][k]+b[i][j][k];
                             
                              }
                  
           }
	   for(i=0;i<3;i++)
                  for(j=0;j<3;j++)
		  {	  
                          for(k=0;k<3;k++)
                  {
                          printf("%d",c[i][j][k]);
                  }
			  printf("\n");
                    }

}
void main()
{
        int a[3][3][3],b[3][3][3],i,j,k;
        printf("\n enter elements in array\n");
          for(i=0;i<3;i++)
                  for(j=0;j<3;j++)
			  for(k=0;k<3;k++)
                  {
                          scanf("%d",&a[i][j][k]);
                  }






printf("\n enter elements in second  array\n");
          for(i=0;i<3;i++)
                  for(j=0;j<3;j++)
			  for(k=0;k<3;k++)
                  {
                          scanf("%d",&b[i][j][k]);
                  }



          pass(a,b);


}


