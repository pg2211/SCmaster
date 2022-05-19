// headerfile

struct node 
{
	float value;
	float key;
};

void union1(struct node arr1[] ,struct node arr2[] , int n1, int n2)
{
	int i,j;
	struct node union_set[n1];
	
	if(n1==n2)
	{
		for(i=0; i<n1; i++)
		{
			if(arr1[i].value > arr2[i].value)
			  union_set[i].value=arr1[i].value;
			  else
			  union_set[i].value=arr2[i].value;

		}
		
		printf("\n union of given fuzzy set: \t");
		for(i=0;i<n1;i++)
		{
			printf("%.1f/%.1f \t",union_set[i].value,arr1[i].key);
		}
	}
	else
	{
		if(n1>n2)
		{
			for(i=0,j=0;i<n1;i++,j++)
			{
				if(arr1[i].key == arr2[j].key)
				{
					if(arr1[i].value > arr2[j].value)
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
			
				printf("\n union of given fuzzy set: \t");
				for(i=0;i<n1;i++)
				{
					printf("%.1f/%.1f \t",union_set[i].value,arr1[i].key);
				}
			
		}
	 
	}
}

void intersection(struct node arr1[] ,struct node arr2[] , int n1, int n2)
{
	int i,j;
	struct node inter_set[n1];
	
 
	
	if(n1==n2)
	{
			 
		for(i=0; i<n1; i++)
		{
			if(arr1[i].value < arr2[i].value)
			  inter_set[i].value=arr1[i].value;
			  else
			  inter_set[i].value=arr2[i].value;

		}
		
		printf("\n Intersection of given fuzzy set: \t");
		for(i=0;i<n1;i++)
		{
			printf("%.1f/%.1f \t",inter_set[i].value,arr1[i].key);
		}
	}
	else
	{
		 
		if(n1>n2)
		{
				printf("\n n1 > n2 fuc in");
			for(i=0,j=0;i<n1;i++,j++)
			{
				if(arr1[i].key == arr2[j].key)
				{
					if(arr1[i].value < arr2[j].value)
			 			 inter_set[i].value=arr1[i].value;
			  		else
			 			 inter_set[i].value=arr2[j].value;
				}
				else
				{
					inter_set[i].value=arr1[i].value;
					inter_set[i].key=arr1[i].key;
					j--;
				}
				
			}
			
				printf("\n Intersection of given fuzzy set: \t");
				for(i=0;i<n1;i++)
				{
					printf("%.1f/%.1f \t",inter_set[i].value,arr1[i].key);
				}
			
		}
	 
	}
}

void complement(struct node arr[], int n)
{
	int i;
	struct node complement_set[n];
	
	for(i=0;i<n;i++)
	{
		complement_set[i].value=1-arr[i].value;
	}
		
	 
				for(i=0;i<n;i++)
				{
					printf("%.1f/%.1f \t",complement_set[i].value,arr[i].key);
				}
				printf("\n");
}

void algebraic_sum(struct node arr1[] ,struct node arr2[] , int n1, int n2)
{
	struct node sum[n1],product[n2],al_set[n1];
	
		int i;
		
		for(i=0;i<n1;i++)
		{
			sum[i].value=arr1[i].value + arr2[i].value;
			product[i].value=arr1[i].value * arr2[i].value;
			
			al_set[i].value=sum[i].value - product[i].value;
		}
		
			for(i=0;i<n1;i++)
				{
					printf("%.1f/%.1f \t",al_set[i].value,arr1[i].key);
				}
				printf("\n");
}


void algebraic_prod(struct node arr1[] ,struct node arr2[] , int n1, int n2)
{
	int i;
	struct node al_prod[n1];
	
	for(i=0;i<n1;i++)
	{
		al_prod[i].value=arr1[i].value * arr2[i].value;
	}
	
				for(i=0;i<n1;i++)
				{
					printf("%.1f/%.1f \t",al_prod[i].value,arr1[i].key);
				}
				printf("\n");
}

void cartesion_prod(struct node arr1[] ,struct node arr2[] , int n1, int n2)
{
	int i,j;
	float cartesion_set[n1][n2];
	
	for(i=0;i<n1;i++)
	{
		for(j=0;j<n2;j++)
		{
			if(arr1[i].value < arr2[j].value)
			cartesion_set[i][j]=arr1[i].value;
			else
			cartesion_set[i][j]=arr2[i].value;
			
		}
	}
	
			 for(i=0;i<n1;i++)
			 {
			 	for(j=0;j<n2;j++)
			 	{
			 			printf("%.1f \t",cartesion_set[i][j]);
				 }
				 printf("\n");
			 }
	
}

