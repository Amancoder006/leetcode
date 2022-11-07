// tu wohi h na jo logo ke code dekhta h
// kahi same to nahi
//  sharam kar saale
#include <bits/stdc++.h>
#define ll long long int
#define pb push_back
#define ss second
#define ff first
const ll mod = 1e9+7;
class Solution {
public:
    int maxProduct(vector<int>& a) {
        int maxh=a[0];
        int minh=a[0];
        int ans=a[0];
        int n=a.size();
        // cout<<n<<endl;
        for(int i=1;i<n;i++){
            int k=max({a[i],maxh*a[i],minh*a[i]});
            minh=min({a[i],maxh*a[i],minh*a[i]});
            maxh=k;
            // cout<<ans<<" "<<maxh<<endl;
            ans=max(ans,maxh);
        }
        cout<<ans<<endl;
        return ans;
    }
};