class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n=nums.size();
        unordered_set<int> st;
        int longest=1;
        for(int i=0;i<n;i++)
            st.insert(nums[i]);
        for(auto it:st)
        {
            if(st.find(it-1)==st.end())
            {
                int count=1;
                int element=it;
                while(st.find(element+1)!=st.end())
                {
                    count++;
                    element+=1;
                }
                longest=max(longest,count);
            }
        }
        
        if(n==0)
            return 0;
        
        return longest;
    }
};