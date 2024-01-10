//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution {
  public:
    int singleElement(int arr[] ,int N) {
        // code here
    sort(arr,arr+N);
    if(arr[0]!=arr[1])
        return arr[0];
    int ptr=0, ct=1;
    for(int i=1; i<N; i++)
    {
        if(arr[i]!=arr[ptr] && ct !=3)
            return arr[ptr];
        else if(arr[i]!=arr[ptr] && ct==3)
        {
            ptr=i;
            ct=1;
        }
        else
        {
            ct++;
        }
    }
    return arr[ptr];
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        
        cin>>N;
        int arr[N];
        
        for(int i=0 ; i<N ; i++)
            cin>>arr[i];

        Solution ob;
        cout<<ob.singleElement(arr,N);
        cout<<"\n";
    }
    return 0;
}
// } Driver Code Ends