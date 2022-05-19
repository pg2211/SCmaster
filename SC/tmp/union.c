// fuzzy set union and intersection by

#include<stdio.h>
#include "headerfile.h"

void main()
{
	int n1,n2,ch;
	int i,j;
	
	printf("How many Element You want to enter in First Array:\t ");
	scanf("%d",&n1);
	
	printf("How many Element You want to Enter in Second Array:\t");
	scanf("%d",&n2);
	
	struct node arr1[n1];
	struct node arr2[n2];
	
	
	// first set
	printf("\n Enter Value and key of First Fuzzy set: \n");
		for(i=0;i<n1;i++)
		{
			scanf("%f %f",&arr1[i].value,&arr1[i].key);
		}
		
		printf("\n First Fuzzy Set:\t");
			for(i=0;i<n1;i++)
			{
				printf("%.1f/%.1f  \t",arr1[i].value,arr1[i].key);
			}
				printf("\n");
			// second set
		
			printf("\n Enter value and key of Second Fuzzy Set: \n");
			for(i=0;i<n2;i++)
			{
				scanf("%f %f",&arr2[i].value,&arr2[i].key);
			}
	 	
		
			printf("\n Second Fuzzy Set:\t");
			for(i=0;i<n2;i++)
			{
				printf("%.1f/%.1f	\t",arr2[i].value,arr2[i].key);
			}
			printf("\n");
			
			
			do
			{
				printf("\n 1. Union \n 2. Intersection \n 3. Complement \n 4. Algebraic Sum \n 5. Algebraic Product \n 6. Cartesion Product \n 7. Exit \n");
				printf("\n Enter the Choise: ");
				scanf("%d",&ch);
				
				
				switch(ch)
				{
					case 1: union1(arr1,arr2,n1,n2);
							break;
					case 2:  
							intersection(arr1,arr2,n1,n2);
							break;
					case 3: printf("\n Complement of set 1: \t");
							complement(arr1,n1);

							printf("\n Complement of set 2: \t");
							complement(arr2,n2);
							break;	
					case 4: printf("\n Algebraic sum of given fuzzy set: ");	
							algebraic_sum(arr1,arr2,n1,n2);
							break;	
					case 5: printf("\n Algebraic Product of given fuzzy set: ");	
							algebraic_prod(arr1,arr2,n1,n2);
							break;		
					case 6: printf("\n cartesion Product of given fuzzy set: \n");	
							cartesion_prod(arr1,arr2,n1,n2);
							break;		
				 	
						
				
					
				}
			}while(ch!=7);
	
	
	
}


