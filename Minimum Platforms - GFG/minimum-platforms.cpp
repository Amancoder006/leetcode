//{ Driver Code Starts
// Program to find minimum number of platforms
// required on a railway station
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

#define pb push_back
#define ff first
#define ss second
class Solution{
    public:
    //Function to find the minimum number of platforms required at the
    //railway station such that no train waits.
    int findPlatform(int a[], int d[], int n)
    {
    	
    	sort(a,a+n);
    	sort(d,d+n);
    	int ans=0,c=0,e=0,i=0;
    	while(i<n && e<n){
    	    if(a[i]<=d[e]){
    	        c++;
    	        i++;
    	    }
    	    else {
    	        e++;
    	        ans=max(c,ans);
    	        c--;
    	    }
    	}
    	return ans;
    }
};


//{ Driver Code Starts.
// Driver code
int main()
{
    int t;
    cin>>t;
    while(t--) 
    {
        int n;
        cin>>n;
        int arr[n];
        int dep[n];
        for(int i=0;i<n;i++)
            cin>>arr[i];
        for(int j=0;j<n;j++){
            cin>>dep[j];
        }
        Solution ob;
        cout <<ob.findPlatform(arr, dep, n)<<endl;
    } 
   return 0;
}
// } Driver Code Ends