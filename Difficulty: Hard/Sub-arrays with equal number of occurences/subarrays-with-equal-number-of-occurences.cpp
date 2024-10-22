//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends


class Solution {
  public:
    int sameOccurrence(vector<int>& arr, int x, int y) {
         unordered_map<int,int>mp;
        mp[0]=1;
        int cx=0,cy=0,cnt=0;
        for(int i:arr)
        {
            if(i==x)cx++;
            if(i==y)cy++;
            int diff=cx-cy;
            //if diff is present in mp
            if(mp.find(diff)!=mp.end())
            {
                cnt+=mp[diff];
                mp[diff]++;
            }
            else
                mp[diff]=1;
        }
        return cnt;
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
        string ks;
        getline(cin, ks);
        int x = stoi(ks);
        string ks1;
        getline(cin, ks1);
        int y = stoi(ks1);
        Solution ob;
        int ans = ob.sameOccurrence(arr, x, y);
        cout << ans << "\n";
        // cout<<"~"<<endl;
    }
    return 0;
}
// } Driver Code Ends