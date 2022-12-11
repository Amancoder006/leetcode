//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
/*You are required to complete this function*/

class Solution{
    public:
    int maxLen(vector<int>&v, int n)
    {   
       int sum=0,ans=0;
       map<int,int> m;
       
       for(int i=0;i<n;i++){
           sum+=v[i];
           if(m[sum]!=0){
               ans=max(ans,i-m[sum]+1);
           }
           else{
               m[sum]=i+1;
           }
           if(sum==0){
               ans=max(ans,i+1);
               continue;
           }
       }
       return ans;
    }
};


//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int m;
        cin>>m;
        vector<int> array1(m);
        for (int i = 0; i < m; ++i){
            cin>>array1[i];
        }
        Solution ob;
        cout<<ob.maxLen(array1,m)<<endl;
    }
    return 0; 
}



// } Driver Code Ends