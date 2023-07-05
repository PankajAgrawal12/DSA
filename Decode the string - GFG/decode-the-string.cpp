//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:
    string decodedString(string s){
        // code here
        stack<char>st;
        int n=s.size();
        for(int i=0;i<n;i++)
        {
            if(s[i]==']')
            {
                string temp="";
                while(!st.empty() && st.top()!='[')
                {
                    temp=st.top()+temp;
                    st.pop();
                }
                st.pop();
                string num;
                while(!st.empty() && isdigit(st.top()))
                {
                    num=st.top()+num;
                    st.pop();
                }
                
                int number=stoi(num);
                string repeat;
                for(int j=0;j<number;j++)
                {
                    repeat+=temp;
                }
                for(int k=0;k<repeat.size();k++)
                    st.push(repeat[k]);
            }
            else
            {
                st.push(s[i]);
            }
        }
        string ans;
        while(!st.empty())
        {
            ans=st.top()+ans;
            st.pop();
        }
        return ans;
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        
        Solution ob;
        cout<<ob.decodedString(s)<<"\n";
    }
    return 0;
}
// } Driver Code Ends