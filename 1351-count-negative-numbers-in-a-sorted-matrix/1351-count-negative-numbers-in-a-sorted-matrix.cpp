class Solution {
public:
    int bs(vector<int> &v){
        // reverse(v.begin(),v.end());
        int s=0,e=v.size()-1;
        int mid=(s+e)/2;
        while(s<=e){
            mid=(s+e)/2;
            if(v[s]<0)return s;
            if(v[mid]>=0){
                s=mid+1;
                // if(v[s]<0)return s;
            }
            else if(v[mid]<=0){
                e=mid;
            }
        }
        return -1;
    }
    int countNegatives(vector<vector<int>>& grid) {
        int n=grid.size();
        int m=grid[0].size();
        int ans=0;
        for(int i=0;i<n;i++){
            int id=bs(grid[i]);
            cout<<id<<endl;
            if(id==-1)continue;
            else{
                ans+=(m-id);
            }
        }
        return ans;
    }
};