class Solution {
public:
    
    int search(vector<int>& v, int target) {
        int s=0,e=v.size()-1;
        while(s<=e){
            int mid = s+(e-s)/2;
            if(v[mid]==target)return mid;
            if(v[mid]<target){
                s=mid+1;
            }
            else{
                e=mid-1;
            }
        }
        return -1;
    }
};