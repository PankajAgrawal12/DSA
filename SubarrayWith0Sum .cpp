bool subArrayExists(int arr[], int n)
    {
        int sum=0,flag=0;
        unordered_map<int,int> m;
        for(int i=0;i<n;i++)
        {
            sum+=arr[i];
            if(arr[i]==0||sum==0||m[sum])
            {
                flag=1;
                break;
            }
            else
            {
                m[sum]=1;
            }
        }
        if(flag==1)
            return true;
        else
            return false;
    }
