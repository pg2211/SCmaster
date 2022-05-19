#include<stdio.h>
struct node
{
 float value;
 float key;
};
int main()
{
	int n1,n2,i,ch;
	
	//Accepting 1st Fuzzy set
	printf("How many elements you want to enter in 1st Fuzzy set:\t");
	scanf("%d",&n1);
	struct node arr1[n1];
	printf("Enter %d elements in fuzzy set:\n",n1);
	for(i=0;i<n1;i++)
	{
		printf("Enter %dth value and key:\n",i+1);
		scanf("%f %f",&arr1[i].value,&arr1[i].key);
	}
	printf("Entered elements of 1st fuzzy set are:\n");
	for(i=0;i<n1;i++)
		printf("%.1f/%.1f + ",arr1[i].value,arr1[i].key);
	printf("\n");
	
	//Accepting 2nd Fuzzy set
	printf("How many elements you want to enter in 2nd Fuzzy set:\t");
	scanf("%d",&n2);
	struct node arr2[10];	
	
	printf("Enter %d elements in fuzzy set:\n",n2);
	for(i=0;i<n2;i++)
	{
		printf("Enter %dth value and key:\n",i+1);
		scanf("%f %f",&arr2[i].value,&arr2[i].key);
	}
	printf("Entered elements of 2nd fuzzy set are:\n");
	for(i=0;i<n2;i++)
		printf("%.1f/%.1f + ",arr2[i].value,arr2[i].key);
	printf("\n");
	
	do
	{
		printf("\n1.Union\n2.Intersection\n3.Complement\n4.Algebraic Sum\n5.Algebraic product\n6.Cartesian Product\n7.exit\n");
		printf("Enter the choice:\t");
		scanf("%d",&ch);
		
		switch(ch)
		{
			case 1:
					union1(arr1,arr2,n1,n2);		
		            break;
	    }//switch end
	}while(ch!=7);

	return 0;
}

void union1(struct node arr1[],struct node arr2[],int n1,int n2)
{
	int i;
	struct node arr3[10];
	if(n1==n2)
	{
		
		for(i=0;i<n1;i++)
		{
			if(arr1[i].value>arr2[i].value)
			 arr3[i].value=arr1[i].value;
			else
			 arr3[i].value=arr2[i].value;
		}
	}
	else
 	{
 		if(n1>n2)
 		{
 			for(i=0;i<n1;i++)
 			{
	 			if(arr1[i].key!=arr2[i].key)
	 			{
					
			    }
			}
			union1(arr1,arr2,n1,n2);
	    }
	    else //i.e n1<n2
	    {
	    	for(i=0;i<n2;i++)
 			{
	 			if(arr1[i].key!=arr2[i].key)
	 			{
					
			    }
			}
			union1(arr1,arr2,n1,n2);
		}
    }

	
	printf("Union of given fuzzy set is:\n");
	for(i=0;i<n2;i++)
		printf("%.1f/%.1f + ",arr3[i].value,arr1[i].key);
	printf("\n");
}