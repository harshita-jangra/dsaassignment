#include <bits/stdc++.h>
using namespace std;

int main() {
 int D, T;
 cin>> D >> T;
 if(D>=T){
     cout<< D - T;
 }
 else{
     cout<< 0;
 }
 return 0;
}






#include <bits/stdc++.h>
using namespace std;

int main() {
int T;
cin>>T;
while(T--){
    int N,K;
    cin>> N >> K;
   int X = 1;
   while(X + K<=N){
     X = X + K;
       
   }
   cout<<X<<endl;
}
return 0;
}
