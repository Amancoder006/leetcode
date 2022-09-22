class Solution {
public:
    int bs(vector<int> &a,int target){
        sort(a.begin(),a.end());
        int s=0,e=a.size()-1;
        int mid=(s+e)/2;
        while(s<=e){
            mid=(s+e)/2;
            if(a[s]==target)return s;
            if(target<=a[mid]){
                if(s==e)return -1;
                e=mid;
            }
            else if(target>a[mid]){
                s=mid+1;  
            } 
        }
        return -1;
    }
    vector<int> targetIndices(vector<int>& a, int target) {
        vector<int> v;
        int id = bs(a,target);
        // cout<<id<<endl;
        if(id ==-1)return {};
        
        for(int i=id;i<a.size();i++){
            if(a[i]==target){
                v.push_back(i);
            }else break;
        }
        return v;
    }
};