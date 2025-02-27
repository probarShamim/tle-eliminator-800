#include <bits/stdc++.h>
using namespace std;

#define int long long

int32_t main() {
    int t;
    cin >> t;

    while (t--) {
        int n, x;
        cin >> n >> x;

        vector<int> nums(n+2);
        for (int i = 0; i < n; i++) {
            cin >> nums[i];
        }


        
        nums.push_back(x+(x-nums[n-1]));
        nums.push_back(0);
        
        
        sort(nums.begin(), nums.end());

        int max_distance = 0;

        for (int i = 1; i < nums.size(); i++) {
            max_distance = max(max_distance, nums[i] - nums[i - 1]);
        }

        // The final answer
        cout << max_distance << endl;
    }

    return 0;
}
