class Solution{
	public:
	    int fun(int n,vector<int> &dp)
	    {
	        if(n==0)
	        {
	            return 1;
	        }
	        if(n<0)
	            return 0;
	            
	        if(dp[n]!=-1)
	            return dp[n];
	        int one=0,two=0;
	        if(n-1>=0)
	            one=fun(n-1,dp);
	        if(n-2>=0)
	            two=fun(n-2,dp);
	       
	       return dp[n]=(one+two)%1000000007;
	    }
		int nthPoint(int n){
		    // Code here
		    vector<int> dp(n+1,-1);
		    return fun(n,dp);
		}
};
