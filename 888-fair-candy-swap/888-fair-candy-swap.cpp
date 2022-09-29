class Solution {
public:
    vector<int> fairCandySwap(vector<int>& a, vector<int>& b) {
        vector<int> v;
        vector<int> ans;
        int s=0,al=0,bb=0;
        for(int i=0;i<a.size();i++){
            v.push_back(a[i]);
            al+=a[i];
        }
        for(int i=0;i<b.size();i++){
            v.push_back(b[i]);
            bb+=b[i];
        }
        s=(al+bb)/2;
        map<int, int> m;
        for(int i=0;i<b.size();i++)m[b[i]]++;
        for(int i=0;i<a.size();i++){
            int bob = s-(al-a[i]);
            if(m[bob]>0){
                ans.push_back(a[i]);
                ans.push_back(bob);
                break;
            }
        }
        
        return ans;
    }
};