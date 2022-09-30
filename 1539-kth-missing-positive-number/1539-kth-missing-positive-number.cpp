class Solution {
public:
    int bs(vector<int> v,int find){
        int s=0,e=v.size()-1;
        int res=e+1;
        while(s<=e){
            int mid = s+(e-s)/2;
            if(v[mid]>=find){
                res=mid;
                e=mid-1;
            }
            else{
                s=mid+1;
            }
        }
        return res;
    }
    int findKthPositive(vector<int>& arr, int k) {
        vector<int> v;
        map<int,int> m;
        for(int i=0;i<arr.size();i++){
            m[arr[i]]++;
            v.push_back(arr[i]-(i+1));
        }
        int id= bs(v,k);
        cout<<id<<endl;
        if(id==v.size()){
            int ans=arr[id-1];
            while(v[id-1]<k){
                ans++;
                v[id-1]++;
            }
            return ans;
        }
        cout<<v[id]<<endl;
        
        int ans=arr[id];
        while(v[id]>=k){
            v[id]--;
            ans--;
        }
        cout<<ans<<endl;
        return ans;
    }
};