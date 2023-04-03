class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int sum=0,maxx=nums[0];
        int n=nums.size();
        for(int i=0;i<n;i++)
        {
            sum+=nums[i];
            maxx=max(sum,maxx);
            sum=max(0,sum);
        }
        return maxx;
    }
};