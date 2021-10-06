#include<bits/stdc++.h>
using namespace std;
int bwdp(int wt[],int val[],int maxw,int items){
    int dp[100][100]={0};
    for(int i=0;i<=items;i++){
        for(int j=0;j<=maxw;j++){
            if(i==0|j==0){
                dp[i][j]=0;
            }
            else{
                if(j<wt[i]){
                    dp[i][j]=dp[i-1][j];
                }
                else{
                    dp[i][j] = max(val[i]+dp[i-1][j-wt[i]],dp[i-1][j]);
                }
            }
        }
    }
    return dp[items][maxw];
}

int main(){
    int wt[]={1,3,5,5};
    int val[] ={1,4,5,7};
    cout<<bwdp(wt,val,7,4);

}