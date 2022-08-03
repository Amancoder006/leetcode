class Solution {
public:
    int kthSmallest(vector<vector<int>>& v, int k) {
        int n=v[0].size();
        int a[n*n];
        int c=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                a[c++]=v[i][j];
            }
        }
        sort(a,a+n*n);
        // for(auto i:a)cout<<i<<" ";cout<<endl;
        return a[k-1];
    }
    
};