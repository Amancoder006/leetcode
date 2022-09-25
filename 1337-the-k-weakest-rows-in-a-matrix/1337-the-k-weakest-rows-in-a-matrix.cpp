class Solution {
public:
    
    int bs(vector<int> &a){
        int s=0,e=a.size()-1;
        int mid = (s+e) / 2;
        if(a[s]==0)return -1;
        while(s<=e){
            mid=((s+e)/2)+1;
            if(a[e]==1)return e;
            if(a[mid]==0){
                e=mid-1;
            }
            else if(a[mid]==1){
                s=mid;
            }
        }
        return -1;
    }
    vector<int> kWeakestRows(vector<vector<int>>& v, int k) {
        int n=v.size();
        int m=v[0].size();
        vector<pair<int , int>> ans;
        vector<int >mp;
        for(int i=0;i<n;i++){
            int id=bs(v[i]);
            cout<<id<<endl;
            if(id==-1)ans.push_back({0,i});
            else ans.push_back({id+1,i});
        }
        sort(ans.begin(),ans.end());
        for(int i=0;i<k;i++){
            mp.push_back(ans[i].second);
        }
        return mp;
    }
};