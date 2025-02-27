#include <bits/stdc++.h>
using namespace std;

#define int long long

int32_t main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        int even = 0, odd = 0, a = 0;
        for(int i = 0; i < n; i++) {
            cin >> a;
            if(a%2==0) even++;
            else odd++;
        }

        if(odd==0) {
            cout << "YES" << endl;
        }
        else if(odd%2==0) {
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }

    }
}
