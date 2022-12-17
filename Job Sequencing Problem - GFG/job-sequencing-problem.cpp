//{ Driver Code Starts
// Program to find the maximum profit job sequence from a given array 
// of jobs with deadlines and profits 
#include<bits/stdc++.h>
using namespace std; 

// A structure to represent a job 
struct Job 
{ 
    int id;	 // Job Id 
    int dead; // Deadline of job 
    int profit; // Profit if job is over before or on deadline 
}; 


// } Driver Code Ends
/*
struct Job 
{ 
    int id;	 // Job Id 
    int dead; // Deadline of job 
    int profit; // Profit if job is over before or on deadline 
};
*/
#define ff first
#define ss second
class Solution 
{
    public:
    //Function to find the maximum profit and the number of jobs done.
    vector<int> JobScheduling(Job a[], int n) 
    { 
        vector<pair<int,pair<int,int>>> v;
        int m=0;
        for(int i=0;i<n;i++){
            v.push_back({a[i].profit,{a[i].dead,a[i].id}});
            if(a[i].dead>m)m=a[i].dead;
        }
        sort(v.rbegin(),v.rend());
        // for(auto i:v)cout<<i.ff<<" "<<i.ss.ff<<" "<<i.ss.ss<<endl;
        int ans=0,c=0;
        int b[m+1]={0};
        // cout<<m<<endl;
        for(int i=0;i<n;i++){
            if(b[v[i].ss.ff]==0){
                b[v[i].ss.ff]=v[i].ss.ss;
                ans+=v[i].ff;c++;
                // cout<<"yo==>";
            }
            else{
                int k=v[i].ss.ff;
                
                while(b[k]!=0 && k>0){k--;}
                if(k<=0)continue;
                else{
                    // k++;
                    b[k]=v[i].ss.ss;
                    ans+=v[i].ff;
                    c++;
                }
            }
        }
        return {c,ans};
    } 
};

//{ Driver Code Starts.
// Driver program to test methods 
int main() 
{ 
    int t;
    //testcases
    cin >> t;
    
    while(t--){
        int n;
        
        //size of array
        cin >> n;
        Job arr[n];
        
        //adding id, deadline, profit
        for(int i = 0;i<n;i++){
                int x, y, z;
                cin >> x >> y >> z;
                arr[i].id = x;
                arr[i].dead = y;
                arr[i].profit = z;
        }
        Solution ob;
        //function call
        vector<int> ans = ob.JobScheduling(arr, n);
        cout<<ans[0]<<" "<<ans[1]<<endl;
    }
	return 0; 
}



// } Driver Code Ends