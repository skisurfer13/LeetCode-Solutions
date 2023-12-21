class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        
        int rows = mat.size();
        int cols = mat[0].size();

        int total = 0;
        int alpha = 0;

        // Sum of major diagonal

        for (int i = 0; i < rows; i++){
            for (int j = 0; j < cols; j++){
                if (i == j)
                    total = total + mat[i][j];
            }
        }


        for (int i = 0; i < rows; i++){
            for (int j = 0; j < cols; j++){
                if (i!=j && (i+1 + j+1) == (rows + 1))
                    alpha = alpha + mat[i][j];
            }
        }

        return (total + alpha);

    }
};
