#include <stdio.h>
#include <stdlib.h>


int main() 
{
	int n, i, a, sum, nzero, min, max, prev, ndif, continuity, ncont;
	sum=0, nzero=0, min=0, max=0, prev=0, ndif=0, continuity=0, ncont=0;
	
	printf("n=? ");
	scanf("%d", &n);
	// if (n==0) printf("");
	if (n<=0) printf("invalid input\n");
	else
	{
		for (i=0; i<n; i++)
		{
			scanf("%d",&a);
			//1
			sum=sum+a;
			//2
			if (a==0) nzero++;
			//3
			if (i==0) 
				{
					min=a;
					max=a;
				}
			else if (a<min) min=a;
			else if (a>max) max=a;
			//4
			if (i==0)	
				{
					ndif++;
				}
			else if (a>prev) ndif++;
			//5	
			if ((continuity==1)&&((a!=prev)||(i==(n-1))))
				{
					ncont++;
					continuity=0;
				}
			else if ((i>0)&&(a==prev)) continuity=1;
			
			prev=a;
		}
	
	printf("sum = %d\n",sum);
	printf("zero: %d\n",nzero);
	printf("minimum: %d\n",min);
	printf("maximum: %d\n",max);
	printf("different numbers: %d\n",ndif);
	printf("number of segments of continuity: %d\n",ncont);
	}
	return 0;
}