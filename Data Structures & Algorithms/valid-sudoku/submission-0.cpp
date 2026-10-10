class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        bool row[9][9]={}, col[9][9]={}, box[9][9]={};
        for(int i=0;i<9;++i){
            for(int j=0;j<9;++j){
                if(board[i][j]!='.'){
                    int d=board[i][j]-'1';
                    int b=i/3*3+j/3;
                    if(row[i][d]||col[j][d]||box[b][d]) return false;
                    row[i][d]=col[j][d]=box[b][d]=true;
                }
            }
        }
        return true;
    }
};
