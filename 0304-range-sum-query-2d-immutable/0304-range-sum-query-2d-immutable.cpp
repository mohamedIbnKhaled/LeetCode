class NumMatrix {
    
    vector<vector<int>> prefix;
public:
    NumMatrix(vector<vector<int>>& matrix) {
        prefix=matrix;
        for(int i=0;i<prefix.size();i++){
            for(int j=1;j<prefix[0].size();j++){
                prefix[i][j]+=prefix[i][j-1];
            }
        }
        for(int i=1;i<prefix.size();i++){
            for(int j=0;j<prefix[0].size();j++){
                prefix[i][j]+=prefix[i-1][j];
            }
        }
    }
    int get(int row,int col){
       if(row==-1||col==-1)return 0;
       return prefix[row][col]; 
    }
    int sumRegion(int row1, int col1, int row2, int col2) {
        return get(row2,col2)+get(row1-1,col1-1)-get(row2,col1-1)-get(row1-1,col2);
    }
};

/**
 * Your NumMatrix object will be instantiated and called as such:
 * NumMatrix* obj = new NumMatrix(matrix);
 * int param_1 = obj->sumRegion(row1,col1,row2,col2);
 */