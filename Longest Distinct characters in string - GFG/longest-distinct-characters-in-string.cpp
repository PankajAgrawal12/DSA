//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;
int longestSubstrDistinctChars (string S);
int main()
{
    int t; cin >> t;
    while (t--)
    {
        string S; cin >> S;

        cout << longestSubstrDistinctChars (S) << endl;
    }
}

// Contributed By: Pranay Bansal

// } Driver Code Ends


int longestSubstrDistinctChars (string s)
{
    int n=s.size();
    int i=0,j=0,maxx=0;
    map<char,int> mp;
    while(j<n)
    {
        char ch=s[j];
        mp[ch]++;
        while(mp[ch]==2)
        {
            mp[s[i]]--;
            i++;
        }
        maxx=max(maxx,j-i+1);
        j++;
    }
    return maxx;
}