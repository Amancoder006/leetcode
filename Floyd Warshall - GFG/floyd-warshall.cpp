//{ Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution {
  public:
	void shortest_distance(vector<vector<int>>&m){
	    // Code here
	    int n=m.size();
	    
	     for(int j=0;j<n;j++){
            for(int k=0;k<n;k++){
                if(m[j][k]==-1)m[j][k]=1e9;
            }
        }
	    
	    for(int i=0;i<n;i++){
	        for(int j=0;j<n;j++){
	            for(int k=0;k<n;k++){
	               m[j][k] = min(m[j][k],m[j][i]+m[i][k]);
	            }
	        }
	    }
	    
	    for(int j=0;j<n;j++){
            for(int k=0;k<n;k++){
                if(m[j][k]==1e9)m[j][k]=-1;
            }
        }
	}
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n;
		cin >> n;
		vector<vector<int>>matrix(n, vector<int>(n, -1));
		for(int i = 0; i < n; i++){
			for(int j = 0; j < n; j++){
				cin >> matrix[i][j];
			}
		}
		Solution obj;
		obj.shortest_distance(matrix);
		for(int i = 0; i < n; i++){
			for(int j = 0; j < n; j++){
				cout << matrix[i][j] << " ";
			}
			cout << "\n";
		}
	}
	return 0;
}
// } Driver Code Ends