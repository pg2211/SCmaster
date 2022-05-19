#include<stdio.h>


void main()
{
	int i,j,k,s[4]={1,1,1,-1},t[4]={1,1,1,-1},ip[4]={1,-1,-1,-1},yin[1][4],y[4];
	int w[4][4]={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
	printf("input vector is:\n");
	for(i=0;i<4;i++)
		printf("%d\t",s[i]);
	printf("\n");

	for(i=0;i<4;i++)
	  for(j=0;j<4;j++)
	   w[i][j]=w[i][j]+(s[i]*t[j]);

	printf("Weights to store the given vector is \n");

	for(i=0;i<4;i++)
	{
	  for(j=0;j<4;j++)
	    printf("%d\t",w[i][j]);
	  printf("\n");
	}
	
	printf("Testing the net with vector\n");  
	for(i=0;i<4;i++)
		printf("%d\t",ip[i]);

	for(i=0;i<1;i++)
	{
	   for(j=0;j<4;j++)
	   {
		yin[i][j]=0;
		for(k=0;k<4;k++)
		{
		 yin[i][j]=yin[i][j]+ip[k]*w[k][j];
		}
	   }
	}

	for(i=0;i<1;i++)
	{
	  for(j=0;j<4;j++)
	    printf("%d\t",yin[i][j]);
	  printf("\n");
	}
	for(i=0;i<4;i++)
	  if(yin[i]>0)
	    y[i]=1 ;
	  else
	    y[i]=0;

	if(y==s)
	 printf("pattern is recognised..!\n");
	else
	 printf("pattern is  not recognised..!\n");
	
}
