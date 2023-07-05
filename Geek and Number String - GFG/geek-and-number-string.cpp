//{ Driver Code Starts
//Initial template for C++
 
#include<bits/stdc++.h>
using namespace std; 

// } Driver Code Ends
//User function template for C++

class Solution{
public:
    int minLength(string s, int n) {
        // code here
        stack<char> st;
        map<char,char> mp;
        mp.insert(std::make_pair('1', '2'));
        mp.insert(std::make_pair('2', '1'));
        mp.insert(std::make_pair('3', '4'));
        mp.insert(std::make_pair('4', '3'));
        mp.insert(std::make_pair('5', '6'));
        mp.insert(std::make_pair('6', '5'));
        mp.insert(std::make_pair('7', '8'));
        mp.insert(std::make_pair('8', '7'));
        mp.insert(std::make_pair('9', '0'));
        mp.insert(std::make_pair('0', '9'));
        for(int i=0;i<n;i++)
        {
            st.push(s[i]);
            while(st.size()>1)
            {
                char temp=st.top();
                st.pop();
                if(st.top()==mp[temp])
                    st.pop();
                else
                {
                    st.push(temp);
                    break;
                }
            }
        }
        return st.size();
    } 
};


//{ Driver Code Starts.

int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;

        string s;
        cin >> s;

        Solution obj;
        cout << obj.minLength(s, n) << "\n";
    }
    return 0;
}
// } Driver Code Ends