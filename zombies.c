#include<stdio.h>

int main()
{
	int n=6,cre[50];
	int j=0,zomb=0,zom[6],i;
	int k=0,vemp=0,vem[6];
	printf("enter number of creature\n");
	scanf("%d",&n);
	printf("enter  creature power\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&cre[i]);		
	}	
	
	for(i=0;i<n;i++)
	{
		if(cre[i]%2==0)
		{
			zom[j]=cre[i];
			zomb=zomb+zom[j];
			j++;
		}
		else
		{
			vem[k]=cre[i];
			vemp=vemp+vem[k];
			k++;
		}
	}
	
	
		for(i=0;i<j;i++)
		{
			printf("%d\t",zom[i]);
		}
		printf("%d\t",zomb);

	
	for(i=0;i<k;i++)
	{
		printf("%d\t",vem[i]);
	}
	printf("%d\t",vemp);
	
}
