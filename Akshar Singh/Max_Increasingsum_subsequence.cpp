#include<bits/stdc++.h>
using namespace std;

int budp(int arr[],int n){
    int dp[100]={0};
    for(int i=0;i<n;i++){
        dp[i]=arr[i];
    }
    for(int i=1;i<n;i++){
      for(int j=0;j<i;j++){
          if(arr[j]<arr[i]){
              dp[i] = max(dp[i],arr[i]+dp[j]);
          }
      }
    }
    
    for(int i=0;i<n;i++){
        cout<<dp[i]<<" ";
    }
    return 0;
}
int main(){
    int arr[7] = {4,6,1,3,8,4,6};
    budp(arr,7);
}