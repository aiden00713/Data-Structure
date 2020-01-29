//°j¤å¹ïºÙ¯x°}

#include <stdio.h>
int main(void)
{
	int t,n,i,j,k;
	scanf("%d",&t);
	
	for(i=1;i<=t;i++)
	{
		printf("N = ");
		scanf("%d",&n);
		int a[n*n],b[n*n],j1=n*n,key=1;
		
		for(j=0;j<n*n;j++)
		{
			scanf("%d",&a[j]);
			b[--j1]=a[j];
			//printf("a[%d]=%d b[%d]=%d\n",j,a[j],j1,b[j1]);  ´ú¸Õ 
		}

		for(k=0;k<n*n;k++)
		{
			if(a[k]!=b[k])
			{
				key=0;	
			}
		}
		
		if(key==0)
		{
			printf("Test #%d:Non-symmetric.\n",i);
		}
		else
		{
			printf("Test #%d:Symmetric.\n",i);
		}
	}
	return 0;
 } 
