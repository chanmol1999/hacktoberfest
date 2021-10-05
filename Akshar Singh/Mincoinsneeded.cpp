#include<bits/stdc++.h>
using namespace std;

//recursion
int minCoins(int coins[],int amount, int n){

    if(amount==0){
        return 0;
    }

    int ans=INT_MAX;

    for(int i=0;i<n;i++){
          if(amount-coins[i]>=0){
              int smallerAns = minCoins(coins,amount-coins[i],n);
              if(smallerAns!=INT_MAX){
                  ans = min(ans,smallerAns+1);
              }
          }
    }
    return ans;
}
//Bottom Up dp
int coinsNeededp(int coins[], int amount,int n){
    int *dp = new int[amount+1];
    for(int i=0;i<=amount;i++){
        dp[i] = INT_MAX;
    }
    dp[0] = 0;
    for(int rupay= 1;rupay<=amount;rupay++){

        //Iterate Over Coins
        for(int i=0;i<n;i++){
           
            if(coins[i]<=rupay){

                int smallerAns = dp[rupay-coins[i]];
                if(smallerAns!=INT_MAX){
                    dp[rupay]=min(dp[rupay],smallerAns+1);
                }
            }
        }
    }
    return dp[amount];

}


int main(){
 int us_coins[] ={1,7,10};
 int n=3;
 int amount =15;
}