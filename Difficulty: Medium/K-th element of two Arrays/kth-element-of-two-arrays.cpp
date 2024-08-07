//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    int kthElement(int k, vector<int>& arr1, vector<int>& arr2) {
        int n1 = arr1.size();
        int n2 = arr2.size();

        // Ensure arr1 is the smaller array for efficiency
        if (n1 > n2) {
            return kthElement(k, arr2, arr1);
        }

        int lo = max(0, k - n2), hi = min(n1, k);

        while (lo <= hi) {
            int i = lo + (hi - lo) / 2;
            int j = k - i;

            // Handling out-of-bound cases
            int arr1_left = (i > 0) ? arr1[i - 1] : INT_MIN;
            int arr1_right = (i < n1) ? arr1[i] : INT_MAX;
            int arr2_left = (j > 0) ? arr2[j - 1] : INT_MIN;
            int arr2_right = (j < n2) ? arr2[j] : INT_MAX;

            if (arr1_left <= arr2_right && arr2_left <= arr1_right) {
                return max(arr1_left, arr2_left);
            } else if (arr1_left > arr2_right) {
                hi = i - 1;
            } else {
                lo = i + 1;
            }
        }

        return -1;
    }
};

//{ Driver Code Starts.

// Driver code
int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        int n, m, k;
        cin >> k;
        cin.ignore();
        string input;
        int num;
        vector<int> arr1, arr2;

        getline(cin, input);
        stringstream s2(input);
        while (s2 >> num) {
            arr1.push_back(num);
        }

        getline(cin, input);
        stringstream s3(input);
        while (s3 >> num) {
            arr2.push_back(num);
        }

        Solution ob;
        cout << ob.kthElement(k, arr1, arr2) << endl;
    }
    return 0;
}
// } Driver Code Ends