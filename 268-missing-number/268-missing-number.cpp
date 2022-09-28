class Solution {
public:
    int bs(vector<int> &v ,int find){
        int s=0,e=v.size()-1;
        int mid = s+(e-s)/2;
        while(s<=e){
            mid=s+(e-s)/2;
            if(find==v[mid])return mid;
            if(find<v[mid])e=mid-1;
            else{
                s=mid+1;
            }
        }
        return -1;
    }
//     0 1 2
//     0 1 3
//     s m e
    
    int missingNumber(vector<int>& v) {
        sort(v.begin(),v.end());
        int ans=0;
        for(int i=0;i<=v.size();i++){
            int id =bs(v,i);
            cout<<id<<endl;
            if(id==-1){
                ans=i;
                // break;
            }
        }
        return ans;
    }
};
