class Solution {
public:
    
    int bsLowerBound(vector<int> v,int target){
        int s=0,e=v.size()-1;
        int mid=s+(e-s)/2;
        while(s<e){
            if(target>=v[e])return v[e];
            if(target==v[mid])return v[mid];
            if(target<v[mid+1])e=mid;
            else{
                s=mid;
            }
             mid=s+(e-s)/2;
        }
        return v[mid];
    }
// a => -10 -5 -4 6 7
// b => 1 2 4 8
//  0 1 2 3 
//  1 2 4 8 
//  s m   e
//    s m e
//      s e
// s e
// m
    int bsUpperBound(vector<int> &v,int target){
        int s=0,e=v.size()-1;
        int mid= s+(e-s)/2;
        while(s<e){
            if(target<=v[s])return v[s];
            if(v[mid]==target)return v[mid];
            if(target<v[mid])e= mid;
            else{
                s=mid+1;
            }
             mid= s+(e-s)/2;
        }
        return v[mid];
    }
    int findTheDistanceValue(vector<int>& a1, vector<int>& a2, int d) {
        sort(a1.begin(),a1.end());
        sort(a2.begin(),a2.end());
        int ans=0;
        for(int i=0;i<a1.size();i++){
            int id1=bsLowerBound(a2, a1[i]);
            cout<<id1<<" ";
            int id2=bsUpperBound(a2,a1[i]);
            cout<<id2<<endl;
            if(abs(a1[i]-id1)>d&&abs(a1[i]-id2)>d)ans++;
            
        }
        return ans;
    }
};


// 