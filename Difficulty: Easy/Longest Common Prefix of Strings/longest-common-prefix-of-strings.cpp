//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++

class Solution {
  public:

    string longestCommonPrefix(vector<string> arr) {
         int mini=INT_MAX,i,n=arr.size();
        string minst="",st;
        for(i=0;i<arr.size();i++){
           if(arr[i].length()<mini){
                mini=arr[i].length();
                minst=arr[i];
            }
        }
     //  cout<<minst<<"hello"<<endl;
       string ans="";
       int f=0;
        for(i=0;i<minst.length();i++){
            f=0;
            st=minst.substr(0,i+1);
           
            for(int i=0;i<n;i++){
                if(arr[i].find(st)!=0)
                {
                    f=1;break;
                }
            }
            if(f==0)
            ans=st;}
         
            if(ans=="")return "-1";
        return ans;
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