#include<bits/stdc++.h>
using namespace std;

//recursive soln
int cutrod(int p [],int n ){
    if(n==0){
        return 0;
    }
    int q = INT_MIN;
    for(int i=1;i<=n;i++){
        q=max(q,p[i]+cutrod(p,n-i));
    }
    return q;
}
//bottomupdp
int crbud(int p[],int n){
    int dp [n+1]={0};
    for(int i=1 ;i<=n;i++){
        int q = INT_MAX;
        for(int j = 1 ;j<=i;j++){
            q=min(q,p[j]+dp[i-j]);
        }
        dp[i]=q;
    }
    return dp[n];
}


int main(){
int p [11] = {0,1,5,8,9,10,17,20,24,30};
cout<<crbud(p,4);
}