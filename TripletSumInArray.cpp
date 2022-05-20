   for(int i=0;i<n-2;i++)
       {
           unordered_set<int> s;
           int curr = X-A[i];
           for(int j=i+1;j<n;j++)
           {
               if(s.find(curr-A[j])!=s.end())
                   return true;
               s.insert(A[j]);
           }
       }
       return false;
