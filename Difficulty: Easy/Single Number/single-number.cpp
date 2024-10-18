//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
// User function template for C++
class Solution {
  public:
    int getSingle(vector<int>& arr) {
        sort(arr.begin(),arr.end());
        int n = arr.size();
        int count = 0;
        int ans =0;
        for(int i=0; i<n;i++){
            if(arr[i]-arr[i+1] == 0){
                count++;
                i++;
            }
            else if(count == 0 || n%2 == 1){
                ans = arr[i];
            }
        }
        return ans;
    }
};

//{ Driver Code Starts.

int main() {
    string ts;
    getline(cin, ts);
    int t = stoi(ts);
    while (t--) {

        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        Solution obj;
        int res = obj.getSingle(arr);
        cout << res << endl;
    }
    return 0;
}
// } Driver Code Ends