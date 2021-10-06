#include<bits/stdc++.h>
using namespace std;

int budp(int total,int coins[],int s){
  int dp[100][100] ={0};
  for(int i=0;i<=s;i++){
      for(int j=0;j<=total;j++){
          if(i==0 || j==0){
              dp[i][j]=0;
          }
          else{
              if(coins[i]>j){
                  dp[i][j] = dp[i-1][j];
              }
              else{
                  if(i!=1){
                  dp[i][j] = min(dp[i-1][j],j/coins[i] + dp[i][j%coins[i]] );
                  }
                  else{
                      dp[i][j] = j/coins[i] + dp[i][j%coins[i]];
                  }
              }
          }
      }
  }
  for(int i=0;i<=s;i++){
      for(int j=0;j<=total;j++){
          cout<<dp[i][j]<<" ";
      }
      cout<<endl;
  }
  return dp[s][total];
}
int main(){
    int total = 15;
    int coins[]={0,1,7,10};
    cout<<budp(total,coins,3);

}