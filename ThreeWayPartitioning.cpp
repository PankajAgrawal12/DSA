void threeWayPartition(vector<int>& arr,int a, int b)
    {
        // code here 
        int first=0,last=arr.size()-1;
        for(int i=0;i<=arr.size()-1;i++)
        {
            if(arr[i]<a)
            {
                swap(arr[i],arr[first]);
                first++;
            }
            else if(arr[i]>b)
            {
                swap(arr[i],arr[last]);
                last--;
                i--;
            }
        }
    }
