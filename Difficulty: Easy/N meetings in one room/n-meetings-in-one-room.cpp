//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    // Function to find the maximum number of meetings that can
    // be performed in a meeting room.
    int maxMeetings(int n, int start[], int end[]) {
        if(n==0) return 0;
      vector<pair<int,int>>meeting(n);
      for(int i=0;i<n;i++){
          meeting[i]={end[i],start[i]};
      }
      sort(meeting.begin(),meeting.end());
      int count =1;
      int lastEndTime = meeting[0].first;
    
      for (int i = 1; i < n; ++i) {
        if (meeting[i].second > lastEndTime) {
            ++count;
            lastEndTime = meeting[i].first;
        }
       }
    
       return count;

    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int start[n], end[n];
        for (int i = 0; i < n; i++)
            cin >> start[i];

        for (int i = 0; i < n; i++)
            cin >> end[i];

        Solution ob;
        int ans = ob.maxMeetings(n, start, end);
        cout << ans << endl;
    }
    return 0;
}
// } Driver Code Ends