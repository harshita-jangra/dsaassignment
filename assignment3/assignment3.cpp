#include <iostream>
using namespace std;

int main() {
	int x;
	cin>>x;
	int n = 100;
	if(x%5==0){
	cout<<"no";}
	else{
	    cout<<"yes";
	}
return 0;
}




#include <iostream>
using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        int N, M;
        cin >> N >> M;

        string A, B;
        cin >> A >> B;

        string ans = "";

        int len = min(A.size(), B.size());

        for (int i = 0; i < len; i++) {
            if (A[i] == B[i])
                ans += A[i];
            else
                break;
        }

        cout << ans << "\n";
    }

    return 0;
}