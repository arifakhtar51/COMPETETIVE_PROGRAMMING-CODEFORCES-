// #include <iostream>
// #include <algorithm>
// #include <vector>
// using namespace std;

// int main() {
//     int t;
//     cin >> t;

//     while (t--) {
//         int n;
//         cin >> n;

//         vector<int> weights(n);
//         for (int i = 0; i < n; ++i) {
//             cin >> weights[i];
//         }


//         int max_difference = 0;
//         for (int k = 1; k < n; ++k) {
//             max_difference = max(max_difference, weights[n - k] - weights[k - 1]);
//         }

//         cout << max_difference << endl;
//     }

//     return 0;
// }
#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        int n;
        cin >> n;
        
        vector<int> arr(n);
        for (int i = 0; i < n; ++i) {
            cin >> arr[i];
        }
        
        int res = 0;
        vector<int> pre(n);
        pre[0] = arr[0];
        for (int i = 1; i < n; ++i) {
            pre[i] = pre[i - 1] + arr[i];
        }
        
        res = 0;
        int i = 1;
        while (i < n) {
            if (n % i != 0) {
                i++;
                continue;
            }
            
            vector<int> num;
            for (int j = 0; j < n; j += i) {
                int val = pre[min(j + i - 1, n - 1)];
                if (j - 1 >= 0) {
                    val -= pre[j - 1];
                }
                num.push_back(val);
            }
            int val = abs(*max_element(num.begin(), num.end()) - *min_element(num.begin(), num.end()));
            if (res < val) {
                res = val;
            }
            i++;
        }
        cout << res << endl;
    }
    return 0;
}
