#include <bits/stdc++.h>
using namespace std;

int main() {
int X , Y;
cin>> X >> Y;
   if(abs(X - Y) <= 2){
       cout<<"interesting";
   }
   else{
       cout<<"boring";
   }
   return 0;
}




#include <iostream>
using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        int M, N;
        cin >> M >> N;

        int w = 0;

        if (N > M) {
            w = (N - M + 1) / 2;   
        }

        int l = M - N + 2 * w;

        cout << l << endl;
    }

    return 0;
}