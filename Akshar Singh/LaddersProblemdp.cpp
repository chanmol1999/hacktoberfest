#include<bits/stdc++.h>
using namespace std;

//recursive o(k^n)
int clad(int n){
     if(n==0){
         return 1;
     }
     if(n<0){
         return 0;
     }
    return clad(n-1)+clad(n-2)+clad(n-3);
}
int ways2(int n , int k){
    if(n==0){
        return 1;
    }
    if(n<0){
        return 0;
    }
    int ans=0;
    for(int i=1;i<=k;i++){
        ans = ans+ways2(n-i,k);
    }
    return ans;
}

//Bottom Up dp O(nk)
int waysbu(int n,int k){
    int *dp = new int[n];
      dp[0]=1;
    for(int step=1;step<=n;step++){
        dp[step]=0;
           for(int j=1;j<=k;j++){
               if(step-j>=0){
                dp[step]+=dp[step-j];
               }
           }
    }
    return dp[n];
}

//Can we do it in O(n)?
//yes
int waysbu2(int n,int k){
    int *dp = new int[n];
      dp[0]=1;
    for(int step=1;step<=n;step++){
        
        dp[step]=2*dp[step-1]-dp[step-k];
    }
    return dp[n];
}



int main(){
 cout<<clad(4)<<endl;
 cout<<waysbu(4,3);
}