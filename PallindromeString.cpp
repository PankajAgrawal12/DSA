int isPalindrome(string s)
	{
	    // Your code goes here
	    for(int i=0;i<s.size()/2;i++)
	    {
	        if(s[i]!=s[s.size()-i-1])
	            return 0;
	    }
	    return 1;
	}
