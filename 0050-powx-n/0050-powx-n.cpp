class Solution {
public:
    double myPow(double x, int n) {
        long long int power=n;
        double ans=1.0;
        if(power<0)
            power*=-1;
        while(power!=0)
        {
            if(power%2==0)
            {
                x*=x;
                power/=2;
            }
            else
            {
                ans*=x;
                power-=1;
            }
        }
        
        if(n<0)
            return (double)(1.0)/(double)(ans);
        else
            return ans;
    }
};