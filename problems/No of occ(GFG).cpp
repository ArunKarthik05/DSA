int count(int arr[], int n, int x) {
	    // code here
	    auto it= lower_bound(arr,arr+n,x);
	    int index = it-arr;
	    
	    if( arr[index] == x)
	    {
	       int start = index;
	       auto itr = upper_bound(arr,arr+n,x);
	       int end = itr - arr;
	       return {end-start};
	    }
	   else
	        return 0;
	}
