//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution
{
    public:
    //Function to reverse words in a given string.
    string reverseWords(string S) 
    { 
        S="."+S+".";
        string str="", ans="";
        for(int i=S.size()-1; i>=0; i--)
        {
            if(S[i]=='.')
            {
                ans+=str;
                str="";
            }
            str=S[i]+str;
        }
        ans.pop_back();
        return ans;
    } 
};

//{ Driver Code Starts.
int main() 
{
    int t;
    cin >> t;
    while (t--) 
    {
        string s;
        cin >> s;
        Solution obj;
        cout<<obj.reverseWords(s)<<endl;
    }
}
// } Driver Code Ends