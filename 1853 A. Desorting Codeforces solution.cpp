#include <bits/stdc++.h>
using namespace std;

#define int long long

int32_t main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        
        vector<int> nums(n);

        for(int i = 0; i < n; i++) {
            cin >> nums[i];
        }

        int mn = INT_MAX;
        for(int i = 1; i < n; i++) {
            int d = nums[i] - nums[i-1];
            mn = min(mn, d);
        }

        if(mn < 0) {
            cout << 0 << endl;
        }
        else {
            cout << (mn/2)+1 << endl;
        }

    }
}
