class Solution {
public:
    int t[100]={0};
    int climbStairs(int n) {
        if(n==1||n==2)return t[n]=n;
        if(t[n]!=0)return t[n];
        return t[n]=climbStairs(n-1)+climbStairs(n-2);
        }
};
// n=4
// 1 1 1 1
// 1 1 2
// 1 2 1
// 2 1 1
// 2 2
// n=5
// 1 1 1 1 1
// 1 1 1 2
// 1 1 2 1
// 1 2 1 1
// 2 1 1 1
// 1 2 2
// 2 1 2
// 2 2 1
