#include<stdio.h>

int max(int a, int b) 
{ 
    return (a > b)? a : b; 
}

int knapSack(int W, int wt[], int val[], int n)
{
   int i, w;
   int K[n+1][W+1];
   for (i = 0; i <= n; i++)
   {
       for (w = 0; w <= W; w++)
       {
           if (i==0 || w==0)
               K[i][w] = 0;
           else if (wt[i-1] <= w)
                 K[i][w] = max(val[i-1] + K[i-1][w-wt[i-1]],  K[i-1][w]);
           else
                 K[i][w] = K[i-1][w];
       }
   }
   return K[n][W];
}
int main()
{
    int i, W;
    int n=5;
    int val[20]={2,5,9,8,1};
    int wt[20]={1,2,4,9,2};
  
 
    printf("Enter size of knapsack:");
    scanf("%d", &W);
    
    printf("%d", knapSack(W, wt, val, n));
    return 0;
}