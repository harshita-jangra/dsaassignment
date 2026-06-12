#include <iostream>

using namespace std;

int main(){

    int n;
    cin >> n;

    vector<int> a(n);
    for(int i = 0; i <n ; i++){
        cin >> a[i];
    }

    vector<int> span(n);
    stack<int > st;

    for(int i = 0; i < n; i++){
         while (!st.empty() && a[st.top()] <= a[i]) {
            st.pop();
        }

        if (st.empty()) {
            span[i] = (i + 1);
        }
        else {
            span[i] = (i - st.top());
        }

        st.push(i);
    }

     for (int x : span) {
        cout << x << " ";
    }
    return 0;
}