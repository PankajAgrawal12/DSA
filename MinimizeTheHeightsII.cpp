int getMinDiff(int arr[], int n, int k)
{
        sort(arr,arr+n);
        int largest=arr[n-1]-k;
        int smallest=arr[0]+k;
        int ans=arr[n-1]-arr[0];
        for(int i=0;i<n-1;i++)
        {
            int minn=min(smallest,arr[i+1]-k);
            int maxx=max(largest,arr[i]+k);
            if(minn<0)
                continue;
            else
                ans=min(ans,(maxx-minn));
        }
        return ans;  
    }
