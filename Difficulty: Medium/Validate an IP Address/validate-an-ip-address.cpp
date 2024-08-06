//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
/* The function returns 1 if
IP string is valid else return 0
You are required to complete this method */
class Solution {
  public:
    int isValid(string str) {
        int n=str.size();
       int ans=-1;
       int k=0;
       for(int i=0;i<n;i++){
           if(str[i]=='.'){
               k++;
               if(k>3){
                   return 0;
               }
               if(ans<0 or ans>255){
                   return 0;
               }
               ans=-1;
           }
           else{
               ans=(ans==-1)?0:ans;
               ans=ans*10+str[i]-'0';
           }
       }
       if(k<3 or ans<0 or ans>255 )
       {
           return 0;
       }
       return 1;
    }
};

//{ Driver Code Starts.

int main() {
    // your code goes here
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        // if (s.size() == 3) {
        //     cout << "false" << endl;
        //     return 0;
        // }
        Solution ob;
        bool f = ob.isValid(s);
        if (f)
            cout << "true" << endl;
        else
            cout << "false" << endl;
    }
    return 0;
}
// } Driver Code Ends