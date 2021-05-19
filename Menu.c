include<stdio.h>
#include<conio.h>
int main()

{
	
		int a, b, choice, add, sub, div, prod;
		printf("\n\n\n\t\t\t\t\tMENU");
		printf("\n\t\t\t\t\t*****");
		printf("\n\t\t\t\t\t1)ADD");
		printf("\n\t\t\t\t\t2)SUBTRACT");
		printf("\n\t\t\t\t\t3)DiVISION");
		printf("\n\t\t\t\t\t4)PRODUCT");
		printf("\n\t\tEnter first number : ");
		scanf("%d", &a);
		printf("\n\t\tEnter second number : ");
		scanf("%d", &b);
		printf("\n\t\tEnter your choice of number : ");
		scanf("%d", &choice);
	if (choice==1)
	{
		add= a+b;
		printf(" \n\t\tYour answer is");
		  printf("\t%d",add);
		
	
	}
	else if (choice==2)
	{
	    sub= a-b;
	    printf("\n\t\tYour answer is");
	     printf("\t%d",sub);
	}
	else if (choice==3)
	{
		
		div = a/b;
		printf("\n\t\tYour answer is");
		  printf("\t%d",div);
	}
	else if (choice==4)
	{
		
		prod= a*b;
		printf("\n\t\tYour answer is");
		  printf("\t%d", prod);
	}
	else
	{
		printf(" Enter valid number");
	}
	
	return 0;
	
	
	
}
