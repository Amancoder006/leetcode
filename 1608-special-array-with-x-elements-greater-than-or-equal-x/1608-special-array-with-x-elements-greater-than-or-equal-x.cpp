class Solution {
public:
    int bs(vector<int>& v,int find){
        int s=0,e=v.size()-1;
        int res=v.size();
        while(s<=e){
            int mid= s+(e-s)/2;
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
    int specialArray(vector<int>& v) {
        sort(v.begin(),v.end());
        int n=v.size();
        int ans=-1;
        for(int i=0;i<=n;i++){
            int id=bs(v,i);
            cout<<i<<"==>"<<id<<endl;
            if(n-id==i){
                ans=i;
                break;
            }
        }
        return ans;
    }
};
// 0 0 3 4 4