long long trappingWater(int arr[], int n){
        // code here
        int l[n],r[n];
        int maxHeight=INT_MIN;
        maxHeight=l[0]=arr[0];
        for(int i=1;i<n;i++)
        {
            maxHeight=max(maxHeight,arr[i]);
            l[i]=maxHeight;
        }
        maxHeight=r[n-1]=arr[n-1];
         for(int i=n-2;i>=0;i--)
        {
            maxHeight=max(maxHeight,arr[i]);
            r[i]=maxHeight;
            
        }
        
        long long sum=0;
        for(int i=0;i<n;i++)
        {
            sum+=min(l[i],r[i])-arr[i];
        }
        return sum;
    }
