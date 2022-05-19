#include<stdio.h>
int main()
{
	float arr1[5][5],arr2[5][5],arr3[5][5],arr4[5][5],max,min[5],prod[5];
	int r1,r2,c1,c2,i,j,k,count=0;
	
	float findMax(float arr[5],int count);
	float findMin(float a,float b);
	printf("Enter rows and columns of First matrix: \n");
	scanf("%d %d",&r1,&c1);

	
	printf("Enter rows and columns of second matrix: \n");
	scanf("%d %d",&r2,&c2);
	
	printf("Enter 1st MAtrix:\n");
	for(i=0;i<r1;i++)
		for(j=0;j<c1;j++)
			scanf("%f",&arr1[i][j]);

	printf("Enter 2nd MAtrix:\n");
	for(i=0;i<r2;i++)
		for(j=0;j<c2;j++)
			scanf("%f",&arr2[i][j]);
			
	printf("1st MAtrix:\n");
	for(i=0;i<r1;i++)
	{
		for(j=0;j<c1;j++)
			printf("%.1f\t",arr1[i][j]);
		printf("\n");
	}
		

	
	printf("2nd MAtrix:\n");
	for(i=0;i<r2;i++)
	{
		for(j=0;j<c2;j++)
			printf("%.1f\t",arr2[i][j]);
		printf("\n");	
	}
		
				
	if(c1==r2)
	{
		for(i=0;i<r1;i++)
		{
			for(j=0;j<c2;j++)
			{
				count=0;
				for(k=0;k<c1;k++)
				{
				  min[k]=findMin(arr1[i][k],arr2[k][j]);	
				  prod[k]=arr1[i][k]*arr2[k][j];
				  count++;
				}
					
				arr3[i][j]=findMax(min,count);
				arr4[i][j]=findMax(prod,count);				
				
			}
		}
		printf("Max-Min composition for given matrices are:\n");
		for(i=0;i<r1;i++)
		{
			for(j=0;j<c2;j++)
				printf("%.2f\t",arr3[i][j]);
			printf("\n");
		}
		printf("Max-product composition for given matrices are:\n");
		for(i=0;i<r1;i++)
		{
			for(j=0;j<c2;j++)
				printf("%.2f\t",arr4[i][j]);
			printf("\n");
		}
	}
	else
		printf("max-min composition is not possible..!\n");
	
	return 0;
}
float findMin(float a,float b)
{
		return a<b ? a:b;			
	
}
float findMax(float arr[],int count)
{
	int i;
	float max;
	for(i=0;i<count-1;i++)
	{
		max=arr[i]>arr[i+1] ?arr[i]:arr[i+1];
    }
	return max;
}
