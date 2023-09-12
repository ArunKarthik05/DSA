  int isPerfectNumber(long long N) 
    {
        // code here
        if(N==1)    return 0;
        long long sum =1;
        for(int is_factor=2;is_factor<sqrt(N);is_factor++)
        {
            if(N % is_factor==0){
                sum += is_factor;
                sum+= N/is_factor;
            }
        }
       if(sum == N) return 1;
       return 0;
    }
