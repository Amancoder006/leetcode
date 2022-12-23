//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

struct Item{
    int value;
    int weight;
};


// } Driver Code Ends
//class implemented
/*
struct Item{
    int value;
    int weight;
};
*/


class Solution
{
    public:
    bool static comp(Item a,Item b){
        double x=(a.value*1.00)/a.weight;
        double y=(b.value*1.00)/b.weight;
        
        return x>y;
    }
    double solve(int w, Item a[], int n){
        double ans=0.00;
        for(int i=0;i<n;i++){
            if(a[i].weight<=w){
                ans+=a[i].value;
                w-=a[i].weight;
            }else{
                ans+=((a[i].value*1.000)/a[i].weight)*w;
                break;
            }
        }
        return ans;
    }
    //Function to get the maximum total value in the knapsack.
    double fractionalKnapsack(int W, Item a[], int n)
    {
        sort(a,a+n,comp);
        double k= solve(W,a,n);
        return k;
    }
        
};


//{ Driver Code Starts.
int main()
{
	int t;
	//taking testcases
	cin>>t;
	cout<<setprecision(2)<<fixed;
	while(t--){
	    //size of array and weight
		int n, W;
		cin>>n>>W;
		
		Item arr[n];
		//value and weight of each item
		for(int i=0;i<n;i++){
			cin>>arr[i].value>>arr[i].weight;
		}
		
		//function call
		Solution ob;
		cout<<ob.fractionalKnapsack(W, arr, n)<<endl;
	}
    return 0;
}
// } Driver Code Ends