#include<stdio.h>
//#include<conio.h>
int main()
{
	signed int x[4][2],tar[4],mew;
	float w[2],wc[2],out=0;
	int i,j,k=0,h=0;
	float s=0,b=0,bc=0,alpha=0;
	float theta;
	//clrscr(); 
	printf("enter the value of theta and alpha\n");
	scanf("%f%f",&theta,&alpha);
	for(i=0;i<3;i++)
	{
		printf("enter the value of %d input row & target\n",i);
		for(j=0;j<=i;j++)
		{
			scanf("%d",&x[i][j]);		
		}
			scanf("%d",&tar[i]);
			w[i]=0;
			wc[i]=0;
	}
	printf("\tnet\ttarget\tweight changes\t new weight\tbias changes\tbias\n");
	printf("-------------------------------------------------------------\n");
	mew;
	printf("ITERATION %d\n",h);
	printf("---------------\n");
	for(i=0;i<=3;i++)
	{
		for(j=0;j<=1;j++)
		{
			s+=(float)x[i][j]*w[j];
		}

		s+=b;
		printf("%2f\t",s);
			if(s>theta)
			 out=1;
			else if(s<-theta)
			out=-1;
			else
			{
			out=0;		
			}
		printf("%d\t",tar[i]);
		s=0;
		if(out==tar[i])
		{
			for(j=0;j<1;j++)
			{
				wc[j]=0;
				bc=0;
			printf("%2f\t",wc[j]);
			}
		for(j=0;j<=1;j++)
		printf("%.2f\t",w[j]);
		k+=1;
		b+=bc;
		printf("%.2f\t",bc);
		printf("%.2f\t",b);
		}
		else
		{
			for(j=0;j<=1;j++)
			{
				wc[j]=x[i][j]*tar[i]*alpha;
				w[j]+=wc[j];
				printf("%.2f\t",wc[j]);
				wc[j]=0;
			}
				for(j=0;j<1;j++)
				printf("%.2f\t",w[j]);
				bc=tar[i]*alpha;
				b+=bc;
				printf("%.2f\t",bc);
				printf("%.2f\t",b);
		}
				printf("\n");							
		}
		if(k==4)
		{
			printf("\nfinal weights\n");
			for(j=0;j<=1;j++)
			{
				printf("w[%d]=%.2f\t",j,w[j]);
			}
				printf("bias b=%.2f",b);
		}
		else
		{
			k=0;
			h=h+1;
			mew;	
		}
		//getch();		
	}
