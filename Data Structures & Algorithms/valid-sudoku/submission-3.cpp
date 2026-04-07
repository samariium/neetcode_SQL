class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        //for row 
        for(int row = 0;row < 9;row++){
            unordered_set<char>seen;
            for(int i = 0;i < 9;i++){
                if(board[row][i] == '.') continue;//if it is empty then skip it
                if(seen.count(board[row][i]))return false;//if it is present in our set then return false
                seen.insert(board[row][i]);// if it is not present then push it in the set 
            }
        }

        //for column
        for(int col = 0;col < 9;col++){
            unordered_set<char>seen;
            for(int i = 0;i < 9;i++){
                if(board[i][col] == '.')continue;//if it is empty then skip it
                if(seen.count(board[i][col]))return false;//if it is present in our set then return false
                seen.insert(board[i][col]);// if it is not present then push it in the set 
            }
        }
        //for the 9X9 square
        for(int square = 0;square < 9;square++){
            unordered_set<char>seen;
            for(int i = 0;i<3;i++){
                for(int j = 0;j<3;j++){
                    int row = (square / 3) * 3 + i;
                    int col = (square % 3) * 3 + j;
                    if(board[row][col] == '.')continue;
                    if(seen.count(board[row][col]))return false;
                    seen.insert(board[row][col]);
                }
            }
        }
        return true;
    }
};
