#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int>v(n);
    for(int i = 0; i<n; i++){
        cin>> v[i];
    }
    vector<int>dp(n);
    //base cases
    dp[0] = 0;
    dp[1] = abs(v[1] - v[0]);
    //now fill the rest of the array
    for(int i = 2; i<n; i++){
        dp[i] = min(dp[i-1]+ abs(v[i] - v[i - 1]),
    dp[i-2]+abs(v[i]-v[i-2]));
    }
    cout<<dp[n-1];
}