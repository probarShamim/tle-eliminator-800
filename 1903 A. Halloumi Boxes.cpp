#include <bits/stdc++.h>
#include <cstring>
using namespace std;
#define int long long int

int32_t main() {

    int t;
    cin >> t;

    while(t--) {
        
        int n, k;
        cin >> n >> k;

        vector<int> nums(n);

        for(int i = 0; i < n; i++) {
            cin >> nums[i];
        }


        if(is_sorted(nums.begin(), nums.end())) {
            cout << "YES" << endl;
        }
        else {
            if(k >= 2) {
                cout << "YES" << endl;
            }
            else {
                cout << "NO" << endl;
            }
        }


    }
    

}
