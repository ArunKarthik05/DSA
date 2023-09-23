    int equilibriumPoint(long long arr[], int n) {
    
        // Your code here
        if(n==1)    
            return 1;
        long long left_sum=arr[0];
        long long total_sum=0;
        
        for(int i=0;i<n;i++)  
            total_sum += arr[i];
            
        for(int i=1;i<n-1;i++)
        {
            long long right_sum = ( total_sum - arr[i] )- left_sum;
            if( left_sum == right_sum ) return i+1;
            left_sum += arr[i];
        }
        return -1;
    }
