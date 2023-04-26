class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        stack<int> st;
        int n=heights.size();
        int rightSmall[n],leftSmall[n];
        
        stack<int> st2;
        for(int i=0;i<n;i++)
        {
            int element=heights[i];
            while(!st2.empty() && heights[st2.top()]>=element)
            {
                st2.pop();
            }
            if(!st2.empty())
                leftSmall[i]=st2.top()+1;
            else
                leftSmall[i]=0;
            st2.push(i);
        }
        
        for(int i=n-1;i>=0;i--){
            int element=heights[i];
            while(!st.empty() && heights[st.top()]>=element)
            {
                st.pop();
            }
            if(!st.empty())
                rightSmall[i]=st.top()-1;
            else
                rightSmall[i]=n-1;
            st.push(i);
        }
        
        int ans=0;
        for(int i=0;i<n;i++)
        {
            int temp=rightSmall[i]-leftSmall[i]+1;
            temp*=heights[i];
            ans=max(ans,temp);
        }
        return ans;
    }
};