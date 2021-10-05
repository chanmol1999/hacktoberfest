#include<bits/stdc++.h>
using namespace std;
int budp(int arr[],int s){
 int dp[s+1]={0};
 
 for(int i=1;i<=s;i++){
     dp[i]=1;
 }
 
 
 for(int i=2;i<=s;i++){
     for(int j=1;j<i;j++){
         if(arr[i]>arr[j]){
             dp[i] = max(dp[j]+1,dp[i]);
         }
         else{
             dp[i]=dp[i];
         }

     }
 }
 for(int i=1;i<=s;i++){
     cout<<dp[i]<<" ";
 }
 cout<<endl;
 sort(dp,dp+s+1);
 for(int i=1;i<=s;i++){
     cout<<dp[i]<<" ";
 }
 cout<<endl;
 return dp[s];
}
int main(){
    int arr[] = {0,2,5,1,8,3};
    cout<<budp(arr,5);
}