//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++

class Solution {
  public:

    string longestCommonPrefix(vector<string> arr) {
        string ans=arr[0];
        for(int i=1;i<arr.size();i++){
            string temp="";
            for(int j=0;j<min(arr[i].size(),ans.size());j++){
                if(arr[i][j]==ans[j]) temp+=ans[j];
                else break;
            }
            ans=temp;
        }
        if(ans.size()!=0) return ans;
        else return "-1"; 
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        vector<string> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        string number;
        while (ss >> number) {
            arr.push_back(number);
        }

        Solution ob;
        cout << ob.longestCommonPrefix(arr) << endl;
    }
}

// } Driver Code Ends