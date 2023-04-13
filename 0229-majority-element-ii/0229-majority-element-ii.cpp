class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        vector<int> ans;
        int curr=0,currEle,prev=0,prevEle;
        int n=nums.size();
        for(int i=0;i<n;i++)
        {
            if(nums[i]==currEle)
                curr++;
            else if(nums[i]==prevEle)
                prev++;
            else if(curr==0)
            {
                curr=1;
                currEle=nums[i];
            }
            else if(prev==0)
            {
                prev=1;
                prevEle=nums[i];
            }
            else
            {
                curr--;
                prev--;
            }
        }
        curr=0,prev=0;
        for(int i=0;i<n;i++)
        {
            if(nums[i]==currEle)
                curr++;
            else if(nums[i]==prevEle)
                prev++;
        }
        if(curr>n/3)
            ans.push_back(currEle);
        if(prev>n/3)
            ans.push_back(prevEle);
        return ans;
    }
};