#include<bits/stdc++.h>
using namespace std;

int knapsack(int wts[],int prices[],int N, int W){
  if(N==0||W==0){
      return 0;
  }

  int inc = 0,exc=0;
  if(wts[N-1]<=W){
    inc = prices[N-1] + knapsack(wts,prices,N-1,W-wts[N-1]);
  }
  //excluding the current item
  exc =0 + knapsack(wts,prices,N-1,W);

  return max(inc,exc);
}
//Bottom up dp

int bottomUp(int wts[],int prices[], int N,int W){
    int dp[100][100] ={0};
        for(int i=0;i<=N;i++){
            for(int w=0;w<=W;w++){
               if(i==0||w==0){
                   dp[i][w] =0;
               }
               else{
                   int inc=0,exc=0;
                   if(wts[i-1]<=w){
                       inc = prices[i-1] + dp[i-1][w-wts[i-1]];
                        exc = dp[i-1][w];
                   }
                   dp[i][w] = max(inc,exc);
               }
            }
        }
        return dp[N][W];
}


int main(){

   int wts[] ={2,7,3,4};
   int prices[] = {5,20,20,10};
   int N =4;
   int W =5;

   int maxProfit= knapsack(wts,prices,N,W) ;
   cout<<maxProfit;
}