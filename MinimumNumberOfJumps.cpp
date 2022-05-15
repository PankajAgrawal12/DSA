int minJumps(int arr[], int n){
        // Your code here
        int step=arr[0],maxReach=arr[0],jump=1;
        if(n<=1)
            return 0;
        if(arr[0]==0)
            return -1;
        else
        {
            for(int i=1;i<n-1;i++)
            {
                if(i==n-1)
                    return jump;
                maxReach=max(maxReach,arr[i]+i);
                step--;
                if(step==0)
                {
                   jump++;
                   if(i>=maxReach)
                       return -1;
                   step=maxReach-i;    
                }
            }
        }
        return jump;
    }
