#include<bits/stdc++.h>
using namespace std;
int budp(string a,string b, int l1,int l2){
    int dp[100][100]={0};
    for(int i=0;i<=l1;i++){
    for(int j=0;j<=l2;j++){
         int ch =0;
         if(i==0|j==0){
         dp[i][j]=0;
    }
    else{
        if(a[i]==b[j] & ch==0){
            ch=1;
             dp[i][j]=dp[i][j-1]+1;
        }
        else{
            dp[i][j] =max(dp[i-1][j],dp[i][j-1]);
        }
    }
    }
}
return dp[l1][l2];
}

int main(){
    string a = "abcdaf";
    string b= "abcdef";
    cout<<budp(a,b,6,6);
    
}