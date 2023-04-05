class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        vector<vector<int>> ans;
        int n=intervals.size();
        sort(intervals.begin(),intervals.end());
        ans.push_back(intervals[0]);
        for(int i=1;i<n;i++)
        {
            int left=intervals[i][0];
            int right=intervals[i][1];
            auto it=ans.back();
            int prevLeft=it[0];
            int prevRight=it[1];
            if(prevRight<left)
            {
                vector<int>temp;
                temp.push_back(left);
                temp.push_back(right);
                ans.push_back(temp);
            }
            else
            {
                ans.pop_back();
                vector<int>temp;
                temp.push_back(min(left,prevLeft));
                temp.push_back(max(right,prevRight));
                ans.push_back(temp);
            }
            
        }
        return ans;
    }
};