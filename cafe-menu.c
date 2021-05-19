#include<stdio.h>
#include<conio.h>
int main()

{
	
		int choice, add1, add2, add3, add4,add5, add6;
		printf("\n\n\n\t\t\t\t\tCoCo Cafe");
		printf("\n\n\n\t\t\t\t\tMENU");
		printf("\n\t\t\t\t\t******");
		printf("\n\t\t\t\t\t1)Momo");
		printf("\n\t\t\t\t\t2)Butter naan");
		printf("\n\t\t\t\t\t3)Chicken curry");
        printf("\n\t\t\t\t\t4)Burger");
        	printf("\n\t\t\t\t\t5)Woo:");
        		printf("\n\t\t\t\t\t6)Self-made brownie");
		
		printf("\n\n\n\t\t\tWhat do you want to eat :p , choose the number : ");
		scanf("%d", &choice);
	if (choice==1)
	{
		add1 = 50+50 ;
		printf(" \n\t\tprice:");
		  printf("\t%d",add1);
		
	
	}
	else if (choice==2)
	{
	    	add2 = 20+20 ;
	    printf("\n\t\tprice per naan: ");
	     printf("\t%d",add2);
	}
	else if (choice==3)
	{
		
	add3 = 100 + 120;
		printf("\n\t\t Price :");
		  printf("\t%d",add3);
	}
	else if (choice==4)
	{
		
		add4 = 100+60;
		printf("\n\t\tPrice :  ");
		
		  printf("\t%d", add4);
	}
	
	else if (choice==5)
	{
		
		add5 = 20 + 20;
		printf("\n\t\tPrice per piece : ");
		  printf("\t%d", add5);
	}
	
	else if (choice==6)
	{
		
		add6 = 100+50;
		printf("\n\t\tPrice  : ");
		  printf("\t%d", add6);
	}
	
	else
	{
		printf(" Enter valid number");
	}
	
	return 0;	
	
}
