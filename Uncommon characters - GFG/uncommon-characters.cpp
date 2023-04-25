//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
    public:
        string UncommonChars(string a, string b)
        {
            // code here
            int n1=a.size();
            int n2=b.size();
            int arr[26]={0};
            int brr[26]={0};
            for(int i=0;i<n1;i++)
            {
                arr[a[i]-'a']++;
            }
            string ans="";
            for(int i=0;i<n2;i++)
            {
                brr[b[i]-'a']++;
            }
            for(int i=0;i<26;i++)
            {
                if((arr[i]!=0 && brr[i]==0)||(arr[i]==0 && brr[i]!=0))
                {
                    int n=i;
                    char ch='a';
                    ch=ch+n;
                    ans+=ch;
                }
            }
            if(ans.size()==0)
                return "-1";
            return ans;
        }
};



//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string A,B;
        cin>>A;
        cin>>B;
        Solution ob;
        cout<<ob.UncommonChars(A, B);
        cout<<endl;
    }
    return 0;
}
// } Driver Code Ends