class Solution {
public:
    int uniquePaths(int rows, int cols) 
    {
        vector<vector<int>> dp(rows,vector<int>(cols,1));
        //All the values in the matrix is set to 1
        for(int row=1;row<rows;row++)
            for(int col=1;col<cols;col++)
                dp[row][col] = dp[row-1][col] + dp[row][col-1];

        //Return the value of last box in matrix which is destination
        return dp[rows-1][cols-1];    
    }
};
