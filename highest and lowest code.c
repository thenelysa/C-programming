#include<stdio.h>
#include<conio.h>
int main()
{
	int a[10],i=0,j=0,temp=0;
	int *p;
	p=a;
	printf("\nEnter number in array : ");
	scanf("%d",p+i);
	for(i=0;i<=9;i++)
{
	scanf("%d",(p+i));
}
for(i=0;i<=9;i++)
{
	for(j=0;j<i-1;j++)
	{
		if(a[i]>a[j])
		{
			temp=*(p+i);
			*(p+i)=*(p+j);
			*(p+j)=temp;
		}
	}
	}
	printf("The highest value is %d", *(p+1));
	printf("The lowest value is %d",*(p+1));
	return 0;
}

