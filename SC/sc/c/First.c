#include<stdio.h>
int main()
{
	int i,j,n,k,cnt,ch,n1;
	float a[10],b[10],c[10],d[10],c11[10][10],c1[10],c2[10],c3[10];
	printf("\nEnter How Many Elements in 1st Array:");
	scanf("%d",&n);
	printf("\n Enter the Element of an 1st Array:");
	for(i=0;i<n;i++)
	{
		scanf("%f",a[i]);
	}
	printf("\nEnter How Many Elements in 2nd Array:");
	scanf("%d",&n1);
	printf("\nEnter the Element of an 2nd Array:");
	for(i=0;i<(n1);i++)
	{
		scanf("%f",b[i]);
	}
	do
	{
		printf("*****MENU*****");
		printf("\n1.Union");
		printf("\n2.Intersection");
		printf("\n3.Complement");
		printf("\n4.Algebric Sum");
		printf("\n5.Algebric Product");
		printf("\n6.Cartesian Product");
		printf("\n7.Exit(0)");
		printf("\nEnter Your Choice:");
		scanf("%d",&ch);
		switch(ch)
		{
		case 1:printf("\n 1.Union");
				if(n==n1)
				{
					for(i=0;i<n;i++)
					{
						if(a[i]>b[i])
							c[i]=a[i];
						else
							c[i]=b[i];
					}
					for(i=0;i<n;i++)
					{
						printf("%f\t",c[i]);
						printf("\n");
					}
				}
				else if(n>n1)
				{
					for(k=0;k<=n;k++)
					{
						for(j=n1;j<=n;j++)
						{
							b[j]=0;
						}
					}
				}
				else
				{
					for(k=0;k<n1;k++)
					{
						for(j=0;j<=n;j++)
						{
							cnt=0;
							a[j]=0;
							cnt++;
						}
					}
				}
				n=n+cnt;
				for(i=0;i<n;i++)
				{
					if(a[i]>b[i])
						c[i]=a[i];
					else
						c[i]=b[i];
				}
				for(i=0;i<(n);i++)
				{
					printf("%f\t",c[i]);
					printf("\n");
				}
				break;
			case 2:printf("\n 2.Intersection");
				if(n==n1)
				{
					for(i=0;i<n;i++)
					{
						if(a[i]<b[i])
							c[i]=a[i];
						else
							c[i]=b[i];
					}
					for(i=0;i<n;i++)
					{
						printf("%f\t",c[i]);
						printf("\n");
					}
				}
				else if(n<n1)
				{
					for(k=0;k<n;k++)
					{
						for(j=n1;j<n;j++)
						{
							b[j]=0;
						}
					}
				}
				else
				{
					for(k=0;k<n1;k++)
					{
						for(j=n;j<=n1;j++)
						{
							cnt=0;
							a[j]=0;
							cnt++;
						}
					}
					n=n+cnt;
				}
				for(i=0;i<n;i++)
				{
					if(a[i]<b[i])
					{
						c[i]=a[i];
					}
					else
						c[i]=b[i];
				}
				for(i=0;i<n;i++)
				{
					printf("%f\t",c[i]);
					printf("\n");
				}
				break;
			case 3:printf("\n 3.Complement");
				for(i=0;i<n;i++)
				{
					c1[i]=1-a[i];
					c2[i]=1-b[i];
				}
				printf("\nComplement of 1st Array:");
				for(i=0;i<n;i++)
				{
					printf("%f",c1[i]);
					printf("\n");
				}
				printf("\nComplement of 2nd Array:");
				for(i=0;i<n;i++)
				{
					printf("%f",c2[i]);
					printf("\n");
				}
				break;
			case 4:printf("\n 4.Algebric Sum");
				for(i=0;i<n;i++)
				{
					c1[i]=a[i]+b[i];
					c2[i]=a[i]*b[i];
					c3[i]=c1[i]-c2[i];
				}
				for(i=0;i<n;i++)
				{
					printf("%f",c3[i]);
					printf("\n");
				}
				break;
			case 5:printf("\nCartesian Product");
				for(i=0;i<n;i++)
				{
					c2[i]=a[i]*b[i];
				}
				for(i=0;i<n;i++)
				{
					printf("%f",c2[i]);
					printf("\n");
				}
				break;
			case 6:printf("\n 6.Cartesian Product");
				for(i=0;i<n;i++)
				{
					for(j=0;j<n;j++)
					{
						if(a[i]<b[i])
							c11[i][j]=a[i];
						else
							c11[i][j]=b[j];
					}
				}
				for(i=0;i<n;i++)
				{
					for(j=0;j<(n-1);j++)
					{
						printf("%f",c11[i][j]);
					}
					printf("\n");
				}
				break;
		}
	}while(ch!=7);			
}
