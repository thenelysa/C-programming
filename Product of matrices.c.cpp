#include<stdio.h>
int main()
{
	int m,n,p,q,i,j,k,sum=0;
		int A[10][10],B[10][10],C[10][10];
		printf("Enter number of rows and columns of A matrix\n");
		scanf("%d%d" ,&m, &n);
		printf("Enter elements of A matrix\n");
		for(i=0;i<m;i++)
		for(j=0;j<n;j++)
		scanf("%d", &A[i][j]);
		printf("Enter number of rows and columns of B matric\n");
		scanf("%d%d" , &p, &q);
		if(n!=0)
		printf("The multiplication of matrix not possible\n");
		else
		{
			printf("Enter elements of B matrix");
			for(i=0;i<p;i++)
			for(j=0;j<q;j++)
			scanf("%d", &B[i][j]);
			for(i=0;i<m;i++)
			{
				for(j=0;j<q;j++)
				{
					for(k=0;k<p;k++)
					{
						sum=sum+ A[i][j]+ B[i][j];
					}
					C[i][j]=sum;
					sum=0;
				}
			}
			printf("Product of the matrices:\n");
			for(i=0;i<m;i++)
			{
				for(j=0;j<q;j++)
				printf("%d\t", C[i][j]);
				printf("\n");
			}
		}
	return 0;
}
