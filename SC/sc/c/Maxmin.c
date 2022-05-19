#include<stdio.h>
int main()
{
	int m,n,p,q,c,d,k;
	float mat1[10][10],mat2[10][10],a[10][10],b[10][10],minm=0,maxm=0,min=0,sum=0,sum1=0;
	printf("\nEnter the no. of Rows and Columns of First Matrix:\n");
	scanf("%d%d",&m,&n);
	printf("\nEnter the Element of first Matrix:");
	for(c=0;c<m;c++)
		for(d=0;d<n;d++)
			scanf("%f",&mat1[c][d]);
	printf("\nEnter the no. of Rows and Columns of Second Matrix:\n");
	scanf("%d%d",&p,&q);
	if(n!=p)
		printf("Enter Valid Ordered Matrices\n");
	else
	{
		printf("Enter the Elements of Second Matrices\n");
		for(c=0;c<p;c++)
			for(d=0;d<q;d++)
				scanf("%f",&mat2[c][d]);
				for(c=0;c<m;c++)
				{
					for(d=0;d<q;d++)
					{
						for(k=0;k<p;k++)
						{
							if(minm==0)
							{
								if(mat1[c][k]<mat2[k][d])
								{	
			 						minm=mat1[c][k];
								}
								else
								{
									minm=mat2[k][d];
								}
							}
							else
							{
								if(mat1[c][k]<mat2[k][d])
								{
									min=mat1[c][k];
								}
								else
								{
									min=mat2[k][d];
								}
							}
						}
					if(minm>min)
					{
						maxm=minm;
					}
					else
					{
						maxm=min;
					}
					a[c][d]=maxm;
					minm=0;
					maxm=0;
				}
			}

			printf("maxmin compositin of the two matrices is:\n");
			for(c=0;c<m;c++)
			{
				for(d=0;d<q;d++)
				{
					printf("%1f\t",a[c][d]);
					printf("\n");
     				}
			}
			for(c=0;c<m;c++)
			{
				for(d=0;d<q;d++)
				{
					for(k=0;k<p;k++)
		 			{
						if(sum==0)
						{
			 				sum=mat1[c][k]*mat2[k][d];
						}
						else	
		 				{
							sum1=mat1[c][k]*mat2[k][d];	
						}	
					}
					if(sum>sum1)
					{
						maxm=sum;
					}
					else
					{
						maxm=sum1;
					}
					b[c][d]=maxm;
					sum=0;
					maxm=0;	
				}
			}

			printf("Max Product Composition of Matrices\n");
			for(c=0;c<m;c++)
			{
				for(d=0;d<q;d++)
				{
					printf("%2f\t",b[c][d]);
					printf("\n");
				}
			}
			return 0;
		}
	}


