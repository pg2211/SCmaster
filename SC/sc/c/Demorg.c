#include<stdio.h>
void main()
{
	int i,j,n;
	float a[10],b[10],c[10],ac[10],bc[10],cc[10];
	printf("enter no of element\n");
	scanf("%d",&n);
	printf("Enter the element of first array\n");
	for(i=0;i<n;i++)
	{
		scanf("%f",&a[i]);
	}
	printf("Enter element of second array\n");
        for(i=0;i<n;i++)
	{
		scanf("%f",&b[i]);
	}
	for(i=0;i<n;i++)
	{
		ac[i]=1-a[i];
		bc[i]=1-b[i];
	}
	printf("complement of first array ,A:");
	for(i=0;i<n;i++)
	{
		printf("%f\t",ac[i]);
	}
	printf("\n");
	printf("complement of second array,B:");
	for(i=0;i<n;i++)
	{
		printf("%f\t",bc[i]);
	}
	printf("\n");
	printf("by demorgans law\n");
	printf("1 (AUB)'=(A')n(B')\n");
	printf("2 (AnB)'=(A')U(B')\n");
	printf("verifying 1\n");

	for(i=0;i<n;i++)
	{
		if(a[i]>b[i])
		  c[i]=a[i];
		else 
		  c[i]=b[i];	
	}
	for(i=0;i<n;i++)
	{
		c[i]=1-c[i];
	}
	printf("(AUB)'=");
	for(i=0;i<n;i++)
	{
		printf("%f\t",c[i]);
	}
	printf("(A')n(B')=");
	for(i=0;i<n;i++)
	{
		if(ac[i]<bc[i])
			cc[i]=ac[i];
		else
			cc[i]=bc[i];			
	}
	for(i=0;i<n;i++)
	{
		printf("%f\t",cc[i]);
	}
	printf("\n");
	printf("Hence (AUB)'=(A')n(B') is Verified Successfully...\n\n");
	printf("Verifying 2-\n");
	for(i=0;i<n;i++)
	{
		if(a[i]<b[i])
			c[i]=a[i];
		else
			c[i]=b[i];
	}
	for(i=0;i<n;i++)
	{
		c[i]=1-c[i];
	}
	printf("(AnB)'=");
	for(i=0;i<n;i++)
	{
		printf("%f\t",c[i]);
	}
	printf("\n");
	printf("(A')U(B')=");
	for(i=0;i<n;i++)
	{
		if(ac[i]>bc[i])
			cc[i]=ac[i];
		else
			cc[i]=bc[i];
	}
	for(i=0;i<n;i++)
	{
		printf("%f\n",cc[i]);
	}
	printf("\n");
	printf("Hence (AnB)'=(A')U(B') is Verified Successfully...\n");
	
}
