struct node
{
	float value;
	float key;
};




void union1(struct node arr1[],struct node arr2[],int n1,int n2)
{
	int i,j,n;
        
       
	  struct node union_set[n1];
	if(n1==n2)
	{
	  for(i=0;i<n1;i++)
	  {				
	    if(arr1[i].value>arr2[i].value)
	     union_set[i].value=arr1[i].value;
	    else
	     union_set[i].value=arr2[i].value;
	  }
	  printf("union of given fuzzy set is:\n");
		  for(i=0;i<n1;i++)
		  {
		    printf("%.1f/%.1f\t",union_set[i].value,arr1[i].key);
		  }
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
			     union_set[i].value=arr1[i].value;
			    else
			     union_set[i].value=arr2[j].value;
			}
			else
			{
			     union_set[i].value=arr1[i].value;
			     union_set[i].key=arr1[i].key;
			    j--;
			}
	         }
		  printf("union of given fuzzy set is:\n");
		  for(i=0;i<n1;i++)
		  {
		    printf("%.1f/%.1f\t",union_set[i].value,arr1[i].key);
		  }
            }
	   
         }
	  
}

void intersection(struct node arr1[],struct node arr2[],int n1,int n2)
{
	int i,j;
        
       
	  struct node intersection_set[n1];
	if(n1==n2)
	{
	  for(i=0;i<n1;i++)
	  {				
	    if(arr1[i].value<arr2[i].value)
	     intersection_set[i].value=arr1[i].value;
	    else
	     intersection_set[i].value=arr2[i].value;
	  }
	  printf("intersection of given fuzzy set is:\n");
		  for(i=0;i<n1;i++)
		  {
		    printf("%.1f/%.1f\t",intersection_set[i].value,arr1[i].key);
		  }
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
			     intersection_set[i].value=arr1[i].value;
			    else
			     intersection_set[i].value=arr2[j].value;
			}
			else
			{
			    intersection_set[i].value=arr1[i].value;
			    intersection_set[i].key=arr1[i].key;
			    j--;
			}
	         }
		printf("Intersection of given fuzzy set is:\n");
		  for(i=0;i<n1;i++)
		  {
		    printf("%.1f/%.1f\t",intersection_set[i].value,arr1[i].key);
		  }
            }
	   
         }
	  
}
void complement(struct node arr[],int n)
{
	int i;
	struct node complement_set[n];
	for(i=0;i<n;i++)
	 complement_set[i].value=1-arr[i].value;

	 
	  for(i=0;i<n;i++)
	  {
	    printf("%.1f/%.1f\t",complement_set[i].value,arr[i].key);
	  }
	 printf("\n");
}

void algebraic_sum(struct node arr1[],struct node arr2[],int n1,int n2)
{
	int i;
	struct node sum_set[n1],product[n1],sum[n1];
	for(i=0;i<n1;i++)
	{
	 sum[i].value=arr1[i].value+arr2[i].value;
	 product[i].value=arr1[i].value*arr2[i].value;
	 sum_set[i].value=sum[i].value-product[i].value;
	}

	 
	  for(i=0;i<n1;i++)
	    printf("%.3f/%.3f\t",sum_set[i].value,arr1[i].key);
	 printf("\n");
}
void algebraic_product(struct node arr1[],struct node arr2[],int n1,int n2)
{
	int i;
	struct node product[n1];
	for(i=0;i<n1;i++)
	{
	 product[i].value=arr1[i].value*arr2[i].value;
	}

	 
	  for(i=0;i<n1;i++)
	    printf("%.3f/%.3f\t",product[i].value,arr1[i].key);
	 printf("\n");
}

void cartesian_product(struct node arr1[],struct node arr2[],int n1,int n2)
{
	int i,j;
	float product[n1][n2];
	for(i=0;i<n1;i++)
	{
	   for(j=0;j<n2;j++)
	   {
		if(arr1[i].value<arr2[j].value)
		  product[i][j]=arr1[i].value;
		else
		   product[i][j]=arr2[j].value;
	   }
	 
	}

	 
	  for(i=0;i<n1;i++)
          {  
	    for(j=0;j<n2;j++)
	     printf("%.1f\t",product[i][j]);
	   printf("\n");
          }
	 
}

