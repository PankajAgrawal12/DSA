//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
    public:
    //Function to count number of ways to reach the nth stair.
    int fun(int x,vector<int> &dp)
    {
        if(x==0 || x==1)
            return 1;
        if(x<0)
            return 0;
        if(dp[x]!=-1)
            return dp[x];
        int left=fun(x-1,dp);
        int right=fun(x-2,dp);
        
        return dp[x]=(left+right)%1000000007;
    }
    int countWays(int n)
    {
        // your code here
        vector<int> dp(n+1,-1);
        return fun(n,dp);
    }
};



//{ Driver Code Starts.
int main()
{
    //taking total testcases
    int t;
    cin >> t;
    while(t--)
    {
        //taking stair count
        int m;
        cin>>m;
        Solution ob;
        cout<<ob.countWays(m)<<endl; // Print the output from our pre computed array
    }
    return 0;
}

// } Driver Code Ends