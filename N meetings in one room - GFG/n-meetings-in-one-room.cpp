//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

#define pb push_back
class Solution
{
    public:
    //Function to find the maximum number of meetings that can
    //be performed in a meeting room.
    int maxMeetings(int s[], int e[], int n)
    {
        vector<pair<int,int>> v;
        for(int i=0;i<n;i++){
            v.pb({e[i],s[i]});
        }
        sort(v.begin(),v.end());
        int ans=1;
        int k=v[0].first;
        for(int i=1;i<n;i++){
            if(k<v[i].second){
                ans++;
                k=v[i].first;
            }
        }
        return ans;
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
        for (int i = 0; i < n; i++) cin >> start[i];

        for (int i = 0; i < n; i++) cin >> end[i];

        Solution ob;
        int ans = ob.maxMeetings(start, end, n);
        cout << ans << endl;
    }
    return 0;
}
// } Driver Code Ends