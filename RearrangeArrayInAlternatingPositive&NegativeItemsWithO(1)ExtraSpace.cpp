void modify(int arr[],int n)
{
	for(int i=1;i<n;i++)
	{
		if(arr[i-1]<0&&arr[i]>0)
			continue;
		else if(arr[i-1]<0&&arr[i]<0)
		{
			for(int j=i+1;j<n;j++)
			{
				if(arr[j]>0)
				{
					swap(arr[i],arr[j]);
					break;
				}
			}
		}
		else if(arr[i-1]>0&&arr[i-1]>0)
		{
			for(int j=i+1;j<n;j++)
			{
				if(arr[j]<0)
				{
					swap(arr[i],arr[j]);
					break;
				}
			}
		}
	}
}
