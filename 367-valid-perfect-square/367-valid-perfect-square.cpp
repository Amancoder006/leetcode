class Solution {
public:
    bool isPerfectSquare(int num) {
        int s=1,e=num;
        while(s<=e){
            int mid = s+(e-s)/2;
            if(mid==(num/mid) && num%mid==0)return true;
            if(mid<(num/mid))s=mid+1;
            else e=mid-1;
        }
        return false;
    }
};