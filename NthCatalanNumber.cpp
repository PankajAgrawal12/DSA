cpp_int fact(int k){

        if(k==1)

            return k;

        else

            return k*fact(k-1);

    }

    cpp_int findCatalan(int n) 

    {

        return (fact(2*n))/(fact(n+1)*fact(n));

    }
