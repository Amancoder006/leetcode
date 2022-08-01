class Solution {
public:
    vector<string> wordSubsets(vector<string>& a, vector<string>& b) {
vector<string> ans;
    map<char,int> ym;
    for(auto j:b){
        string y=j;
        map<char,int> c;
        for(int k=0;k<y.size();k++){
            c[y[k]]++;
            if(c[y[k]]>ym[y[k]])ym[y[k]]=c[y[k]];
        }
    }   
    for(int i=0;i<a.size();i++){
        
        string x=a[i];
        map<char,int> xm;
        int f=1;
        for(int j=0;j<x.size();j++)xm[x[j]]++;
        
        for(auto i:ym){
            if(i.second<=xm[i.first]){}
            else {
                f=2;break;
            }
        }
        if(f==1)ans.push_back(x);
    }
        return ans;
    }
};