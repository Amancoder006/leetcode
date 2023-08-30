//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
    public:
    //Function to return max value that can be put in knapsack of capacity W.
    int t[1000][1000];
    int solve(int W,int n,int wt[],int v[]){
        if(n==0 || W==0)return 0;
        
        if(t[n][W]!=-1)return t[n][W];
        
        if(W >= wt[n-1] )return t[n][W] =  max(solve(W,n-1,wt,v),v[n-1]+solve(W-wt[n-1],n-1,wt,v));
    
        return t[n][W] = solve(W,n-1,wt,v);
    }
    
    
    int knapSack(int W, int wt[], int val[], int n) 
    { 
       // Your code here
        memset(t,-1,sizeof(t));
    //   for(int i=0;i<n+1;i++)t[i][0]=0;
    //   for(int i=0;i<W+1;i++)t[0][i]=0;
       
    //   for(int i=1;i<n+1;i++){
    //       for(int j=1;j<W+1;j++){
    //          if(W>=j)t[i][j] = max(t[i-1][j],val[i-1]+ t[i-1][W-j]);
    //          else t[i][j]= t[i-1][j];
    //       }
    //   }
    return solve(W,n,wt,val);
    }
};

//{ Driver Code Starts.

int main()
 {
    //taking total testcases
    int t;
    cin>>t;
    while(t--)
    {
        //reading number of elements and weight
        int n, w;
        cin>>n>>w;
        
        int val[n];
        int wt[n];
        
        //inserting the values
        for(int i=0;i<n;i++)
            cin>>val[i];
        
        //inserting the weights
        for(int i=0;i<n;i++)
            cin>>wt[i];
        Solution ob;
        //calling method knapSack()
        cout<<ob.knapSack(w, wt, val, n)<<endl;
        
    }
	return 0;
}
// } Driver Code Ends