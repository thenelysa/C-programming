#include<stdio.h>
#include<conio.h>
int main()
{
	//input two numbers and display remainder and quotient
	
	 int num1,num2,rem,quot;
	 printf("Enter two numbers : ");
	 scanf("%d %d", &num1,&num2);
	 rem = num1 % num2;
	 quot = num1/ num2;
	 printf(" The quotient is : %d", quot);
	 printf(" \nThe remainder is : %d", rem);
	 return 0;
		
	
}
