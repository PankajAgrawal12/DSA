long long maxProduct(vector<int> arr, int n) {
	    long long ma=arr[0],mi=arr[0];
	    long long ans=arr[0],temp;
	    for(int i=1;i<n;i++)
	    {
	        temp=arr[i];
	        if(temp<0)
	        {
	            swap(ma,mi);
	        }
	        ma=max(temp,(ma*temp));
	        mi=min(temp,(mi*temp));
	        ans=max(ma,ans);
	    }
	    return ans;
	}
