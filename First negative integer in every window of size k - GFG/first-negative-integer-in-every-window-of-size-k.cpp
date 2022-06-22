// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

vector<long long> printFirstNegativeInteger(long long int arr[],
                                             long long int n, long long int k);

// Driver program to test above functions
int main() {
    long long int t, i;
    cin >> t;
    while (t--) {
        long long int n;
        cin >> n;
        long long int arr[n];
        for (i = 0; i < n; i++) {
            cin >> arr[i];
        }
        long long int k;
        cin >> k;

        vector<long long> ans = printFirstNegativeInteger(arr, n, k);
        for (auto it : ans) cout << it << " ";
        cout << endl;
    }
    return 0;
}
// } Driver Code Ends


vector<long long> printFirstNegativeInteger(long long int A[],
                                             long long int N, long long int K) {
    vector<long long>dq;
    deque<long long>d;
    for(int i=0;i<K;i++){
        if(A[i]<0)d.push_back(i);
    }
    for(int i=K;i<N;i++){
        if(d.empty())dq.push_back(0);
        else{
            dq.push_back(A[d.front()]);
        }
        while(d.front()<=i-K&&!d.empty()){
            d.pop_front();
        }
        if(A[i]<0)d.push_back(i);
        // for(auto i:dq)cout<<i<<" ";cout<<endl; 
        
    } 
    if(!d.empty()){
        dq.push_back(A[d.front()]);
    }
    else{
        dq.push_back(0);
    }
    // for(auto i:dq)cout<<i<<" ";cout<<endl;
    
   
    return dq;                                             
 }