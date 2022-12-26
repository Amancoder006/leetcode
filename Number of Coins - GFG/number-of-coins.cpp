//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{

	public:
	
	int minCoins(int a[], int n, int w) 
	{ 
	   int t[n+1][w+1];
	   sort(a,a+n);
	   for(int i=0;i<=n;i++){
	        t[i][0]=0;
	    }
	    for(int i=1;i<=w;i++){
	       // t[0][i]=INT_MIN;
	        if(i%a[0]==0){
	            t[1][i]=i/a[0];
	        }
	        else t[1][i]=INT_MAX-1;
	    }
	    for(int i=2;i<=n;i++){
	        for(int j=1;j<=w;j++){
	            if(a[i-1]<=j)t[i][j]=min(t[i][j-a[i-1]]+1,t[i-1][j]);
	            else t[i][j]=t[i-1][j];
	        }
	    }
	    if(t[n][w]<=w)return t[n][w];
	    else return -1;
	} 
	  
};

//{ Driver Code Starts.
int main() 
{
   
   
   	int t;
    cin >> t;
    while (t--)
    {
        int v, m;
        cin >> v >> m;

        int coins[m];
        for(int i = 0; i < m; i++)
        	cin >> coins[i];

      
	    Solution ob;
	    cout << ob.minCoins(coins, m, v) << "\n";
	     
    }
    return 0;
}

// } Driver Code Ends