#include<stdio.h>

main()
{
	int a,b,c,d,e;
	
	printf("enter value of A = ");
	scanf("%d",&a);	
	printf("enter value of B = ");
	scanf("%d",&b);
	printf("enter value of C = ");
	scanf("%d",&c);	
	printf("enter value of D = ");
	scanf("%d",&d);	
	printf("enter value of E = ");
	scanf("%d",&e);	
	
	if(a>b)
	{
		if(a>c)
		{
			if(a>d)
			{
				if(a>e)
				{
					printf("A is max");
				}
				else
				{
					printf("E is max");
				}
			}
			else
			{
				if(d>e)
				{
					printf("D is max");
				}
				else
				{
					printf("E is max");
				}
			}
		}
		else
		{
			    if(c>e)
			    {
				printf("A is max");
				}
				else
				{
				printf("E is max");
				}
		}	
	}
	else
	{
		if(b>c)
		{
			if(b>d)
			{
				if(b>e)
				{
					printf("B is max");
				}
				else
				{
					printf("E is max");
				}
			}
			else
			{
				if(d>e)
				{
					printf("D is max");
				}
				else
				{
					printf("E is max");
				}
			}
		}
		else
		{
			    if(c>e)
			    {
				printf("D is max");
				}
				else
				{
				printf("E is max");
				}
		}	
	}	
}
