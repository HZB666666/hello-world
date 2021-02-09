#include <stdio.h>
#include <string.h>
int main()
{
	int n,j,i,max,min,t,i1,i2;
	scanf("%d",&n);
	int num[n][n];
	for(i=0; i<n; i++)
	{    
	for(j=0; j<n; j++)
	{       
	 scanf("%d",&num[i][j]);
	}
	}
	for(i=0;i<n;i++)
	{
	j=0;
	max=num[i][j];
	for(;j<n;j++)
	{
	if(max<num[i][j])
	{
	max=num[i][j];	
	i1=i,i2=j;
	}
	}
	for(t=0;t<n;t++)
	{
	    if(num[t][i2]<=max&&t!=i1)
	{
		break;
	}		
	}
	if(t==n)
	{
		printf("%d %d",i1,i2);
		break;
	}
	}
	if(i==n)
	{
		printf("NONE");
	}
}
