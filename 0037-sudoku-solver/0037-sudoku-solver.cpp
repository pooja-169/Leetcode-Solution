class Solution {
public:
  bool CanPut(vector<vector<char>>&board, int r, int c, char val){
    //row check
    for(int i=0;i<9;i++){
        if(board[r][i]==val) return false;
    }
    //column check
    for(int i=0;i<9;i++){
        if(board[i][c]==val) return false;
    }
    //grid check
    r=(r/3)*3; c=(c/3)*3;
    for(int i=r;i<r+3;i++){
        for(int j=c;j<c+3;j++){
            if(board[i][j]==val) return false;
        }
    }
    return true;
  }

  bool f(vector<vector<char>>& board){
    for(int i=0;i<9;i++){
        for(int j=0;j<9;j++){
            if(board[i][j]=='.'){
                //try putting values one by one.
                for(char ch='1'; ch<='9';ch++){
                    if(CanPut(board,i,j,ch)){
                        board[i][j]=ch;
                        if(f(board)) return true;
                        board[i][j]='.';
                    }
                }
                return false;
            }
        }
    }
    return true;
  }
    void solveSudoku(vector<vector<char>>& board) {
        f(board);
    }
};