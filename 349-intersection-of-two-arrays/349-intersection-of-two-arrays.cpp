class Solution {
public:
    int bs(vector<int> &v,int tar){
        int s=0,e=v.size()-1;
        int mid=(s+e)/2;
        while(s<=e){
            if(v[mid]==tar)return tar;
            mid=(s+e)/2;
            if(v[mid]<tar){
                s=mid+1;
            }
            else if(v[mid]>tar){
                e=mid-1;
            }
        }
        return -1;
    }
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        set<int> a,b;
        for(auto i:nums1)a.insert(i);
        for(auto i:nums2)b.insert(i);
        vector<int> x,y,ans;
        for(auto i:a)x.push_back(i);
        for(auto i:b)y.push_back(i);
  
        for(int i=0;i<x.size();i++){
            int id=bs(y,x[i]);
            if(id!=-1)ans.push_back(x[i]);
        }
        return ans;
    }
};