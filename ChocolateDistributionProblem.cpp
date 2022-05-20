 long long findMinDiff(vector<long long> a, long long n, long long m){
    //code
        sort(a.begin(),a.end());
   long long min_diff=a[a.size()-1]-a[0];
   int i=0;
   int j=i+m-1;
   while(j<a.size())
   {
       min_diff=min(min_diff,(a[j]-a[i]));
       i++;
       j=i+m-1;
   }
   return min_diff;
    }   
