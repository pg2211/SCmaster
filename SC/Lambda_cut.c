#include<stdio.h>
struct node
{
 float value;
 char key;
};
int main()
{
	int n1,n2,i,ch;
	float lambda;
	void lambdaFunc(struct node arr[],int n,float lambda);
	
	//Accepting 1st Fuzzy set
	printf("How many elements you want to enter in 1st Fuzzy set:\t");
	scanf("%d",&n1);
	struct node arr1[n1];
	printf("Enter %d elements in fuzzy set:\n",n1);
	for(i=0;i<n1;i++)
	{
		printf("Enter %dth value and key:\n",i+1);
		scanf("%f %c",&arr1[i].value,&arr1[i].key);
	}
	
	
	//Accepting 2nd Fuzzy set
	printf("How many elements you want to enter in 2nd Fuzzy set:\t");
	scanf("%d",&n2);
	struct node arr2[10];	
	
	printf("Enter %d elements in fuzzy set:\n",n2);
	for(i=0;i<n2;i++)
	{
		printf("Enter %dth value and key:\n",i+1);
		scanf("%f %c",&arr2[i].value,&arr2[i].key);
	} 
	printf("Enter the value of lambda:\t");
	scanf("%f",&lambda);
	
	printf("Entered elements of 1st fuzzy set are:\n");
	for(i=0;i<n1;i++)
		printf("%.1f/%c + ",arr1[i].value,arr1[i].key);
	printf("\n");
	
	printf("Entered elements of 2nd fuzzy set are:\n");
	for(i=0;i<n2;i++)
		printf("%.1f/%c + ",arr2[i].value,arr2[i].key);
	printf("\n");
	
	do
	{
		printf("\n1.A_Lambda\n2.B_Lambda\n3.AnB_Lambda\n4.AuB_Lambda\n5.exit\n");
		printf("Enter the choice:\n");
		scanf("%d",&ch);
		
		switch(ch)
		{
			case 1:
					lambdaFunc(arr1,n1,lambda);		
		            break;
			case 2:
					lambdaFunc(arr2,n2,lambda);		
		            break;
//		    default:printf("Invalid choice ..!\n");
//					break;        
	    }//switch end
	}while(ch!=3);

	return 0;
}
void lambdaFunc(struct node arr[],int n,float lambda)
{
	char ans[n];
	int i;
	for(i=0;i<n;i++)
	{
		if(arr[i].value >= lambda)
		 ans[i]=arr[i].key;
	}
	printf("Lambda cut set for given fuzzy set is:\n");
	for(i=0;i<n;i++)
		printf("%c\t",ans[i]);
	
	printf("\n");
}

