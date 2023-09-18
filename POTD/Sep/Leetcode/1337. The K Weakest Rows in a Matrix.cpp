class Solution {
public:
/*SOLUTION 1:
    vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {
        int rows = mat.size();
        int col = mat[0].size();
        vector<pair<int,int>>ones;
        for(int i=0;i<rows;i++){
            int temp_ones=0;
            for(int j=0;j<col;j++){
                if( mat[i][j] ) 
                    temp_ones++;
            }
            ones.push_back(make_pair(i,temp_ones) );
        }
        auto cmp=[](const pair<int, int>& a, const pair<int, int>& b){
            if(a.second == b.second)    return a.first<b.first;
            return a.second<b.second;
        };
        sort(ones.begin(), ones.end(), cmp);
        vector<int> result;
        for (int i = 0; i < k; i++) {
        result.push_back(ones[i].first);
        }
        return result;
    }
*/

//SOLUTION-2
vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {
    int rows = mat.size();
    int col = mat[0].size();

    // Define a custom comparator function to sort rows based on the number of ones.
    auto customComparator = [&mat](int a, int b) {
        int onesA = count(mat[a].begin(), mat[a].end(), 1);
        int onesB = count(mat[b].begin(), mat[b].end(), 1);
        if (onesA != onesB) {
            return onesA < onesB;
        } else {
            return a < b;
        }
    };

    // Create a vector of row indices and sort them using the custom comparator.
    vector<int> rowIndices(rows);
    iota(rowIndices.begin(), rowIndices.end(), 0);
    sort(rowIndices.begin(), rowIndices.end(), customComparator);

    // Create a result vector containing the indices of the k weakest rows.
    vector<int> result(rowIndices.begin(), rowIndices.begin() + k);

    return result;
}

};
