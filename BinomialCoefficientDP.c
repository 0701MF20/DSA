//SHORTEST PATH BY DYNAMIC PROGRAMMING
#include <stdio.h>
#include <stdlib.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int main() 
{
	
int n,k;
printf("\nEnter the n value: ");
scanf("%d",&n);
printf("\nEnter the k value: ");
scanf("%d",&k);
int A[n][k];
//applying algorithm for binomial coefficient by dynammic programming
int i,j;
for(i=0;i<=n;i++)
{
for(j=0;j<=n;j++)
{
    if(k==0||k==n)
    {
        A[i][j]=1;
    }
    else
    {
        A[i][j]=A[i-1][j-1]+A[i-1][j];
    }
}
}
printf("\nBiomial coefficient : %d",A[i][j]);
/*
printf("\nShow the matrix:-\n");
for(int i=1;i<=n;i++)
{
    for(int j=1;j<=n;j++)
    {
        printf("  %d  ",A[i][j]);
    }
     printf("\n");
}*/
	return 0;
}
