class Solution {
public:
    int t[38]={0};
    int tribonacci(int n) {
        if(n==0)return t[n]=0;
        if(n==1||n==2)return t[n]=1;
        if(t[n]!=0) return t[n];
        return t[n]=tribonacci(n-1)+tribonacci(n-2)+tribonacci(n-3);
    }
};