#include<stdio.h>
#include<conio.h>
int main()
{
	
	int i,num,prod;
	printf("Enter the choice of your number : ");
		scanf("%d", &num);
	for(i=1;i<=10;i++)
{
	
	prod = num*i;
	printf("%d *  %d = %d\n", num, i, prod);
}
	return 0;
	
}
