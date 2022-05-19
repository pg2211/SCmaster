#include<stdio.h>
#include <stdlib.h>
struct node 
{
	float value;
	float key;
};

	void first_cond(struct node arr1[],struct node arr2[],int n1,int n2);
	void second_cond(struct node arr1[],struct node arr2[],int n1,int n2);
	struct node* union1(struct node arr1[],struct node arr2[],int n1,int n2);
	struct node* intersection(struct node arr1[],struct node arr2[],int n1,int n2);
	struct node* complement(struct node arr[],int n);
	
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
		printf("\n1.(AuB)'=A'n B'\n2.1.(AnB)'=A'u B'\n");
		printf("Enter the choice:\t");
		scanf("%d",&ch);

		switch(ch)
		{
			case 1:first_cond(arr1,arr2,n1,n2);
				break;
			case 2:second_cond(arr1,arr2,n1,n2);
				break;
		}
	}while(ch!=3);
}

void first_cond(struct node arr1[],struct node arr2[],int n1,int n2)
{
//   struct node* temp1 = malloc(n1 * sizeof(*temp1));
//   temp1=union1(arr1,arr2,n1,n2);
   struct node* lhs = malloc(n1 * sizeof(*lhs));
   lhs=complement(union1(arr1,arr2,n1,n2),n1);
//   struct node* temp2 = malloc(n1 * sizeof(*temp2));
//   temp2=complement(arr1,n1);
//   struct node* temp3 = malloc(n1 * sizeof(*temp3));
//   temp3=complement(arr2,n2);
   struct node* rhs = malloc(n1 * sizeof(*rhs));
   rhs=intersection(complement(arr1,n1),complement(arr2,n2),n1,n2);
	 int flag,i;

   for(i=0;i<n1;i++)
   {
	if(lhs[i].value!=rhs[i].value && lhs[i].key!=rhs[i].key)
	  flag=1;
   }
  
	if(flag==1)
	   printf("(AuB)'=A'n B' not proved\n"); 
	else
            printf("(AuB)'=A'n B' hence proved\n"); 
}

void second_cond(struct node arr1[],struct node arr2[],int n1,int n2)
{
   	struct node* lhs = malloc(n1 * sizeof(*lhs));
   	lhs=complement(intersection(arr1,arr2,n1,n2),n1);
   
   	struct node* rhs = malloc(n1 * sizeof(*rhs));
   	rhs=union1(complement(arr1,n1),complement(arr2,n2),n1,n2);
	 int flag,i;

   for(i=0;i<n1;i++)
   {
	if(lhs[i].value!=rhs[i].value && lhs[i].key!=rhs[i].key)
	  flag=1;
   }
  
	if(flag==1)
	   	printf("(AuB)'=A'n B' not proved\n"); 
	else
		printf("(AuB)'=A'n B' hence proved\n"); 
}

struct node* union1(struct node arr1[],struct node arr2[],int n1,int n2)
{
	int i,j,n;
        
       
	   struct node* union_set = malloc(n1 * sizeof(*union_set));
	if(n1==n2)
	{
	  for(i=0;i<n1;i++)
	  {				
	    if(arr1[i].value>arr2[i].value)
	     union_set[i].value=arr1[i].value;
	    else
	     union_set[i].value=arr2[i].value;
	  }
	 return union_set;
    }
    else
	{
	   if(n1>n2)
	   {
	        for(i=0,j=0;i<n1;i++,j++)
			{
				if(arr1[i].key==arr2[j].key)
				{
				    if(arr1[i].value>arr2[j].value)
				    {
				    	union_set[i].value=arr1[i].value;
						union_set[i].key=arr1[i].key;	
					}
				     
				    else
				    {
				    	 union_set[i].value=arr2[j].value;
				    	 union_set[i].key=arr2[j].key;
					}
				    
				}
				else
				{
				     union_set[i].value=arr1[i].value;
				     union_set[i].key=arr1[i].key;
				    j--;
				}
	        }
       }
	   
    }
	  return union_set;
}

struct node* intersection(struct node arr1[],struct node arr2[],int n1,int n2)
{
	int i,j;
        
       
	struct node* intersection_set = malloc(n1 * sizeof(*intersection_set));
	if(n1==n2)
	{
		  for(i=0;i<n1;i++)
		  {				
		    if(arr1[i].value<arr2[i].value)
		    {
		    	intersection_set[i].value=arr1[i].value;
				intersection_set[i].key=arr1[i].key;
			}
		    else
		    {
		    	intersection_set[i].value=arr2[i].value;
		    	intersection_set[i].key=arr2[i].key;
			}
		     
		  }
		   return intersection_set;
    }
    else
	 {
	   if(n1>n2)
	   {
	        for(i=0,j=0;i<n1;i++,j++)
			{
				if(arr1[i].key==arr2[j].key)
				{
				    if(arr1[i].value<arr2[j].value)
				    {
				    	intersection_set[i].value=arr1[i].value;
						intersection_set[i].key=arr1[i].key;						
					}
				    else
				    {
				    	intersection_set[i].value=arr2[j].value;
						intersection_set[i].key=arr2[j].key;
					}
				     
				}
				else
				{
				    intersection_set[i].value=arr1[i].value;
				    intersection_set[i].key=arr1[i].key;
				    j--;
				}
		    }
				return intersection_set;
	  }
	   
    } 
}
struct node* complement(struct node arr[],int n)
{
	int i;
	struct node* complement_set = malloc(n * sizeof(*complement_set));
	for(i=0;i<n;i++)
	{
		complement_set[i].value=1-arr[i].value;
		complement_set[i].key=arr[i].key;
	}
	return complement_set;
}

