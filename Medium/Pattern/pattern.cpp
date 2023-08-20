//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
class Solution {
  public:
    void printDiamond(int n) {
        for(int i=1; i<=n; i++)
        {
            
            for(int sp=n-1; sp>=i; sp--)
            {
                cout<<" ";
            }
            for(int j=1; j<=i; j++)
            {
                cout<<"*"<<" ";
            }
            cout<<endl;
        }
        for(int i=1; i<=n; i++)
        {
            
            for(int sp=1; sp<i; sp++)
            {
                cout<<" ";
            }
            for(int j=n; j>=i; j--)
            {
                cout<<"*"<<" ";
            }
            cout<<endl;

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
        ob.printDiamond(n);
    }
    return 0;
}
// } Driver Code Ends