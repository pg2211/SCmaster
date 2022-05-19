
#include<stdio.h>
int main()
{
	float a,b,arr[5];
	int i,count;
	
	float findMin(float a,float b);
	float findMax(float arr[],int count);
	
	printf("Enter two float value:\n");
	scanf("%f %f",&a,&b);
	printf("how any elements in an array:\t");
	scanf("%d",&count);
	printf("Enter array of float value:\n");
	for(i=0;i<count;i++)	
		scanf("%f",&arr[i]);
		
	printf("minimum=%f\n",findMin(a,b));	
	printf("maximum element in an array is: %f\n",findMax(arr,count));
}

	float findMin(float a,float b)
	{
			if(a<b)
				return a;
		    else
				return b;			
	}
	
float findMax(float arr[],int count)
{
	int i;
	float max;
	for(i=0;i<count-1;i++)
	{
		if( arr[i]>arr[i+1])
			max=arr[i];
		else
			if(arr[i]==arr[i+1])
	 			max=arr[i];
		 	else
			 	max=arr[i+1];
	}
	return max;
}