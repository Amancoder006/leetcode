class Solution {
public:
    int searchInsert(vector<int>& v, int target) {
        int s=0,e=v.size()-1,ans=v.size();
        while(s<=e){
            int mid = s+(e-s)/2;
            if(v[mid]==target){
                ans = mid;
                break;
            }
            if(v[mid]<target){
                ans = mid+1;
                s=mid+1;
            }
            else {
                ans = mid;
                e = mid-1;
            }
        }
        return ans;
    }
};