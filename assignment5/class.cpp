#include<iostream>
#include<vector>
using namespace std;
#define int long long int
int32_t main(){
     int n, mod = 1e9 + 7;
   cin>>n;
   //dp[i] = number of ways to make i
   vector<int>dp(n+1, 0); // to store solutions
  //dp[i] = dp[i-6] + dp[i-5] +......+ dp[i-1]; for(i>=6)
  //base case dp[0] = 1;
  dp[0] = 1;
  for(long long i = 1; i<=n; i++){
    for(long long j = 1; j<=6; j++){
        if(i - j >= 0)dp[i] += dp[i -j], dp[i] %= mod;
    }
    
  }
  cout<< dp[n];
  return 0;
}