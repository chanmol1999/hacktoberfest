#include<bits/stdc++.h>
using namespace std;

int budp(string s1, string s2, int l1, int l2){
    int dp[100][100] = {0};
    dp[0][0] = 1;
    for(int i=0;i<=l2;i++){
        for(int j=0;j<l1;j++){
            if(i==0){
                if(j>0){
                dp[0][j]= dp[0][j-1]+1;
                }
            }
            else{
                if(j==0){
                    if(i==1){
                        if(s1[j]==s2[i-1]){
                            dp[i][j]=0;
                        }
                        else{
                            dp[i][j]=1;
                        }
                    }
                    else{
                         if(s1[j]==s2[i-1]){
                            dp[i][j]=dp[i-1][j];
                        }
                        else{
                            dp[i][j]=dp[i-1][j]+1;
                        }
                    }
                }
                else{
                   if(s1[j]==s2[i-1]){
                            dp[i][j]=min(dp[i-1][j]+1,min(dp[i][j-1]+1,dp[i-1][j-1]));
                        }
                        else{
                            dp[i][j]=min(dp[i-1][j]+1,min(dp[i][j-1]+1,dp[i-1][j-1]+1));
                        } 
                }
            }
        }
    }
    for(int i=0;i<=l2;i++){
        for(int j=0;j<l1;j++){
            cout<<dp[i][j]<<" ";
        }
        cout<<endl;
    }
    return dp[l2][l1-1];
}
int main(){
    string s1 = "abcdef";
    string s2 = "azced";
    cout<<budp(s1,s2,6,5);

}