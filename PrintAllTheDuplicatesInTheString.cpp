string removeDuplicates(string str) {
	    // code here
	    string ans="";
	    set<char> st;
	    for(int i=0;i<str.size();i++)
	    {
	        if(st.find(str[i])==st.end())
	        {
	            st.insert(str[i]);
	            ans+=str[i];
	        }
	    }
	    return ans;
	}
