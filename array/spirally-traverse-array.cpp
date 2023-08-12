int top=0;
        int bottom=r-1;
        int left=0;
        int right=c-1;
        vector<int> value;
        while(top<=bottom && left<=right)
        {
            //LEFT->RIGHT
            for(int i=left;i<=right;i++)
                value.push_back(matrix[top][i]);
            top++;
            //ROW 0 IS OMITTED AFTER TRAVERSING
            //TOP-BOTTOM
            for(int i=top;i<=bottom;i++)
                value.push_back(matrix[i] [right]);
            right--;
            if(top<=bottom)
            {
            //LAST COLOUMN IS OMITTED
            //RIGHT-LEFT
                for(int i=right;i>=left;i--)
                    value.push_back(matrix[bottom][i]);
                bottom--;
            }
            if(left<=right)
            {
            //LAST ROW IS OMITED
            //BOTTOM-TOP
                for(int i=bottom;i>=top;i--)
                    value.push_back(matrix[i][left]);
                left++;
            }
        }
        return value;
        //RETURNS THE VALUES STORED IN VECTOR
    }
};
