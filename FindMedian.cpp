int find_median(vector<int> v)
		{
		    // Code here.
		    sort(v.begin(),v.end());
		    int n=v.size(),sum=0;
		    if(n%2==0)
		    {
		         sum=(v[n/2]+v[(n/2)-1])/2;
		    }
		    else
		    {
		        sum=v[(n/2)];
		    }
		    return sum;
		}
