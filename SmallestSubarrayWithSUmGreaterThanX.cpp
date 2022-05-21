int smallestSubWithSum(int arr[], int n, int x)
    {
        // Your code goes here   
        int minn=INT_MAX;
        int i=0,j=0,sum=0;
        while(i<=j&&j<n)
        {
            while(sum<=x&&j<n)
            {
                sum+=arr[j];
                j++;
            }
            while(sum>x&&i<j)
            {
                minn=min(minn,j-i);
                sum-=arr[i];
                i++;
            }
        }
        return minn;
    }
