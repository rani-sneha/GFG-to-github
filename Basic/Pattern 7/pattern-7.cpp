//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
class Solution {
  public:
    void printTriangle(int n) {
        int k=1;
        for(int i=1; i<=n; i++)
        {
            
            for(int sp=n-1; sp>=i; sp--)
            {
                cout<<" ";
            }
            for(int j=1; j<=k; j++)
            {
                cout<<"*";
            }
            cout<<endl;
            k+=2;
        }
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        Solution ob;
        ob.printTriangle(n);
    }
    return 0;
}
// } Driver Code Ends