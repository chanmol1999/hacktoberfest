#include<bits/stdc++.h>
using namespace std;

int fib(int n){
     if(n==1||n==0){
         return n;
     }

     return fib(n-1) + fib(n-2);
    
}
// Topdownuproach-recursive
int fibdp(int n , int *dp){
    if(n==0||n==1){
        dp[n]=n;
        return n;
    }

    //Already computed
    if(dp[n]!=-1){
        return dp[n];
    }
    else{
        dp[n] = fibdp(n-1,dp) + fibdp(n-2,dp);
        return dp[n];
    }
}

//Bottom up approach-iterative
int fibbottomup(int n){
    int *dp = new int[n];
    dp[0] = 0;
    dp[1] = 1;
    for(int i=2;i<=n;i++){
        dp[i] = dp[i-1] +dp[i-2];
    }
    return dp[n];
}

int fibOpt(int n){
    int a =0,b=1;
    int c;

    for(int i=2;i<=n;i++){
        c=a+b;
        a=b;
        b=c;
    }
}

int main(){
    int dp[100];

    for(int i=0; i<100;i++){
        dp[i]=-1;
    }
    cout<<fibdp(5,dp)<<endl;
}