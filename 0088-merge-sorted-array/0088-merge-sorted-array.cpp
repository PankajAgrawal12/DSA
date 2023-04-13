class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        if(n==0)
            return;
        else if(m==0)
            nums1=nums2;
        else
        {
            for(int i=0;i<m;i++)
            {
                if(nums1[i]>=nums2[0])
                {
                    swap(nums1[i],nums2[0]);
                    for(int j=0;j<n-1;j++)
                    {
                        if(nums2[j]<=nums2[j+1])
                                break;
                        else
                            swap(nums2[j],nums2[j+1]);
                    }
                }
            }
            for(int i=0;i<n;i++)
                nums1[m+i]=nums2[i];
        }
        
    }
};