//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
    public:
    int lenOfLongSubarr(int arr[],  int n, int k) 
    { 
       unordered_map<int,int> preSum;
       int sum=0,ans=0;
       for(int i=0;i<n;i++)
       {
           sum+=arr[i];
           int rem=sum-k;
           if(sum==k)
           {
               ans=max(ans,i+1);
           }
           if(preSum.find(rem)!=preSum.end())
           {
               int len=i-preSum[rem];
               ans=max(ans,len);
           }
           if(preSum.find(sum)==preSum.end())
           {
               preSum[sum]=i;
           }
       }
       return ans;
    } 

};

//{ Driver Code Starts.

int main() {
	//code
	
	int t;cin>>t;
	while(t--)
	{
	    int n, k;
	    cin>> n >> k;
	    int a[n];
	    
	    for(int i=0;i<n;i++)
	        cin>>a[i];
	   Solution ob;
	   cout << ob.lenOfLongSubarr(a, n , k)<< endl;
	    
	}
	
	return 0;
}
// } Driver Code Ends