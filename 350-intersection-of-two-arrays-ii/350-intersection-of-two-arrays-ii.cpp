class Solution {
public:
    int bs(vector<int> &v,int find){
        int s=0,e=v.size()-1;
        while(s<=e){
            int mid = s+(e-s)/2;
            if(v[mid]==find){
                int k=v[mid];
                v.erase(v.begin()+mid);
                return k;
            }
            if(v[mid]<find){
                s=mid+1;
            }
            else{
                e=mid-1;
            }
        }
        return -1;
    }
    
    vector<int> intersect(vector<int>& a, vector<int>& b) {
        sort(a.begin(),a.end());
        sort(b.begin(),b.end());
        for(auto i:a)cout<<i<<" ";cout<<endl;
        for(auto i:b)cout<<i<<" ";cout<<endl;
        vector<int> ans,ans2;
        
            for(int i=0;i<a.size();i++){
                int id = bs(b,a[i]);
                // cout<<id<<endl;
                if(id!=-1){
                    ans.push_back(a[i]);
                    
                }
            }
 
            return ans;
        
        
        // vector<int> v;
        
        
        
    }
};