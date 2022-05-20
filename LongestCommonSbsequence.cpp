int LongestCommonSbsequence(int arr[],int N)
{
      unordered_set<int>s;
      for(int i=0;i<N;i++) s.insert(arr[i]);
      int longestStreak = 0;
      for(int i=0;i<N;i++){
          if(s.find(arr[i] - 1) == s.end()){
              int currentElement = arr[i];
              int currentStreak = 0;
              while(s.find(currentElement) != s.end()){
                  currentStreak++;
                  currentElement++;
              }
              longestStreak = max(currentStreak,longestStreak);
          }
      }
      return longestStreak;
    }
