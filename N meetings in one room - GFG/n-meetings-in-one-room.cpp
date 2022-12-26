//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

#define pb push_back
#define ss second
#define ff first
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
        int t=v[0].ff;
        for(int i=1;i<n;i++){
            if(t<v[i].ss){
                ans++;
                t=v[i].ff;
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