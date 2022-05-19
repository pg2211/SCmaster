#include<stdio.h>
#include "header.h"

void main()
{
	int n1,n2,i,ch;
	printf("How many elements you want to enter in first array:\t");
	scanf("%d",&n1);

	printf("How many elements you want to enter in second array:\t");
	scanf("%d",&n2);

	struct node arr1[n1];
	struct node arr2[n2];

 	printf("enter key and values of first fuzzy set:\n");
	for(i=0;i<n1;i++)
	{
		scanf("%f %f",&arr1[i].value,&arr1[i].key);
	}
	printf("Entered first fuzzy set is:\n");
	for(i=0;i<n1;i++)
	{
		printf("%.1f/%.1f\t",arr1[i].value,arr1[i].key);
	}
	printf("\n");

	printf("enter key and values of second fuzzy set:\n");
	for(i=0;i<n2;i++)
	{
		scanf("%f %f",&arr2[i].value,&arr2[i].key);
	}
	printf("Entered second fuzzy set is:\n");
	for(i=0;i<n2;i++)
	{
		printf("%.1f/%.1f\t",arr2[i].value,arr2[i].key);
	}
      
	do
	{
		printf("\n1.Union\n2.Intersection\n3.complement\n4.algebraic sum\n5.Algebraic product\n6.Cartesian Product\n7.exit\n");
		printf("Enter the choice:\t");
		scanf("%d",&ch);

		switch(ch)
		{
			case 1:union1(arr1,arr2,n1,n2);
				break;
			case 2:intersection(arr1,arr2,n1,n2);
				break;
			case 3:printf("complement of set 1 is:\n");
			       complement(arr1,n1);
		        	printf("complement of set 2 is:\n");
			       complement(arr2,n2);
				break;
			case 4:printf("Algebraic sum of given fuzzy set is:\t");
				algebraic_sum(arr1,arr2,n1,n2);
				break;	
			case 5:printf("Algebraic product of given fuzzy set is:\t");
				algebraic_product(arr1,arr2,n1,n2);
				break;	
			case 6:printf("cartesian product of given fuzzy set is:\n");
				cartesian_product(arr1,arr2,n1,n2);
				break;			
		}
	}while(ch!=7);
	
	
}












