int getPairsCount(int arr[], int n, int k) {
        // code here
        unordered_map<int,int> m;
        int count=0,min=0;
        for(int i=0;i<n;i++)
        {
            min=k-arr[i];
            if(m[min])
            {
                count+=m[min];
            }
            m[arr[i]]++;
        }
        return count;
        
    }
