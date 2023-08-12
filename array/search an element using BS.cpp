class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int row= matrix.size(); 
        int col= matrix[0].size();
        int i=0,j=col-1;
        //J=COL-1:TO COMAPRE IF TARGET IS PRESENT ABOVE OR BELOW THE ROW 
        //BECAUSE THIS TAKES J TO THE LAST ELEMENT OF EACH ROW
        while(i<row && j>=0  ){
            //CHECKS CURRENT ELEMENT
            if(matrix[i][j]==target) return 1;
            //IF TARGET IS GREATER MOVE TO NEXT ROW
            else if(target>matrix[i][j]) i++;
            //IF TARGET IS LESS COMPARE WITH CURRENT ROW ELEMENTS
            else if(target<matrix[i][j]) j--;
        }
       return 0; 
    }
};
