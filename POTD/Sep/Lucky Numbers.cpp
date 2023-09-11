class Solution{
public:
    bool isLucky(int n) 
    {
        // code here
        for(int divisor=2;divisor<=n;divisor++){
            if(n%divisor==0)  return false;
            n = n - (n/divisor);
        }
        return true;
    }
};
