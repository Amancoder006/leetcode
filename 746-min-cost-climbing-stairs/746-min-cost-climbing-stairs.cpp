class Solution {
public:
    long int t[2000]={0};
    long int ans=0;
    long int solve(vector<int>& v,int n){
        if(n<0)return 0;
        if(n==0||n==1)return v[n];
        if(t[n]!=0){
            // cout<<n<<"-"<<t[n]<<endl;
            return t[n];
        }

        t[n]=v[n]+min(solve(v,n-1),solve(v,n-2));
        
        return t[n];
    }
    int minCostClimbingStairs(vector<int>& v) {
        long int n=v.size();
        long int k=min(solve(v,n-1),solve(v,n-2));
        return k;
        
    }
};