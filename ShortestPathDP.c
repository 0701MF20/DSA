//SHORTEST PATH BY DYNAMIC PROGRAMMING
#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int min(int a,int b)
{
    int min=a;
    if(b<=min)
    {
      min=b;  
    }
    return min;

}
int main() 
{
	
int n;
printf("\nEnter the number: ");
scanf("%d",&n);
int A[n][n];
printf("Enter thedata in the matrix for the path:-\n");
for(int i=1;i<=n;i++)
{
    printf("For row %d\n",i);
	for(int j=1;j<=n;j++)
	{
	scanf("%d",&A[i][j]);	
	}
}
printf("Show the matrix:-\n");
for(int i=1;i<=n;i++)
{
    for(int j=1;j<=n;j++)
    {
        printf(" %d ",A[i][j]);
    }
    printf("\n");
}
//applying algorithm for shortest path by dynammic programming
for(int k=1;k<=n;k++)
{
for(int i=1;i<=n;i++)
{
    for(int j=1;j<=n;j++)
    {
        A[i][j]=min(A[i][j],A[i][k]+A[k][j]);
    }
}
}
printf("\nShow the matrix:-\n");
for(int i=1;i<=n;i++)
{
    for(int j=1;j<=n;j++)
    {
        printf("  %d  ",A[i][j]);
    }
     printf("\n");
}
	return 0;
}
