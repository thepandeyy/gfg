//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    int maxPathSum(vector<int> &arr1, vector<int> &arr2) {
     int i = 0, j = 0;
    int n1 = arr1.size(), n2 = arr2.size();
    int ans = 0;
    int sum1 = 0, sum2 = 0;
    
    while (i < n1 || j < n2) {
        if (i < n1 && j < n2 && arr1[i] == arr2[j]) {
            // Common element, choose the maximum path sum
            ans += max(sum1 + arr1[i], sum2 + arr2[j]);
            // Reset the sums
            sum1 = 0;
            sum2 = 0;
            // Move both pointers forward
            i++;
            j++;
        } 
        else if (i < n1 && (j >= n2 || arr1[i] < arr2[j])) {
            sum1 += arr1[i++];
        } 
        else if (j < n2 && (i >= n1 || arr1[i] > arr2[j])) {
            sum2 += arr2[j++];
        }
    }
    
    // Add the remaining elements
    ans += max(sum1, sum2);
    
    return ans;   
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        vector<int> arr1;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr1.push_back(number);
        }
        vector<int> arr2;
        string input2;
        getline(cin, input2);
        stringstream ss2(input2);
        int number2;
        while (ss2 >> number2) {
            arr2.push_back(number2);
        }
        Solution ob;
        long long ans = ob.maxPathSum(arr1, arr2);
        cout << ans << endl;
    }
    return 0;
}
// } Driver Code Ends