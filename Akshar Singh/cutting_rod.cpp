#include<bits/stdc++.h>
using namespace std;

int budp(int p[],int lr, int l){
    int dp[100][100] = {0};
    for(int i=0;i<=l ; i++){
        for(int j=0;j<=lr;j++){
            if(i==0 || j==0){
                dp[i][j]=0;
            }
            else{
                        if(j<i){
            dp[i][j] = dp[i-1][j];
            }
            else{
                dp[i][j] = max(dp[i-1][j],dp[i][j-i]+p[i]);
            }
            }
        }
    }
    for(int i=0;i<=l;i++){
        for(int j=0;j<=lr;j++){
            cout<<dp[i][j]<<" ";
        }
        cout<<endl;
    }
    return dp[l][lr];
}
int main(){
    int lr = 5;
    int p [] = {0,2,5,7,8};
    cout<<budp(p,lr,4);
}