 void booleanMatrix(vector<vector<int> > &matrix)
    {
        // code here 
        int rows = matrix.size();
        int cols = matrix[0].size();
        unordered_set<int>row;
        unordered_set<int>col;
        for(int i=0;i<rows;i++){
            for(int j=0;j<cols;j++){
                if( matrix[i][j]==1 ){
                    row.insert(i);
                    col.insert(j);
                }
            }
        }
        for(int i=0;i<rows;i++){
            for(int j=0;j<cols;j++){
                if ( row.find(i)!= row.end() ) 
                    matrix[i][j]=1;
                if ( col.find(j)!= col.end() ) 
                    matrix[i][j]=1;
            }
        }
    }
