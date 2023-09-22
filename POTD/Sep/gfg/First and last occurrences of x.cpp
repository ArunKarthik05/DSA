public:
    vector<int> find(int arr[], int n , int x )
    {
        int low = lower_bound(arr, arr + n, x) - arr;
        int high = upper_bound(arr, arr + n, x) - arr;
        if (low > high - 1) 
            return {-1, -1};
        return {low, high - 1};
    }
}
