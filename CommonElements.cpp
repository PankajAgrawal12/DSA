vector <int> commonElements (int a[], int b[], int c[], int n1, int n2, int n3)
        {
            //code here.
            vector<int> v;
            set<int> ans;
            int i=0,j=0;
            while(i<n1&&j<n2)
            {
                if(a[i]==b[j])
                {
                    v.push_back(a[i]);
                    i++;
                    j++;
                }
                else if(a[i]>b[j])
                    j++;
                else
                    i++;
            }
            i=0,j=0;
            while(i<v.size()&&j<n3)
            {
                if(v[i]==c[j])
                {
                    ans.insert(v[i]);
                    i++;
                    j++;
                }
                else if(v[i]>c[j])
                    j++;
                else
                    i++;
                
            }
            v.clear();
            for(auto it:ans)
            {
                v.push_back(it);
            }
            return v;
        }
