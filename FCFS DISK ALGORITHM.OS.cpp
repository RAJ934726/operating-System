#include<stdio.h>
#include<stdlib.h>
int main()
{
	int RQ[100],i,n,TotalHeadMoment=0,initial;
	printf("Enter the number of requests:");
	scanf("%d",&n);
	printf("Enter the Request Sequence:\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&RQ[i]);
	}
	printf("Enter initial Head position:");
	scanf("%d",&initial);
	
	for(i=0;i<n;i++)
	{
		TotalHeadMoment+=abs(RQ[i]-initial);
		initial=RQ[i];
	}
	
	printf("Total Seek Time: %d",TotalHeadMoment);	
	return 0;
}