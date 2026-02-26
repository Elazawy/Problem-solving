// URL -> https://leetcode.com/problems/valid-sudoku/description/
// Date: 26 2 2026

class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        unordered_set<int> row, col, square1, square2, square3;
        // Checking rows and columns
        for(int i = 0; i < 9; i++) {
            for(int j = 0; j < 9; j++) {
                if(row.count(board[i][j]) && board[i][j] != '.') return false;                     if(col.count(board[j][i]) && board[j][i] != '.') return false;
                row.insert(board[i][j]);
                col.insert(board[j][i]);
            }
            row.clear();
            col.clear();
        }
        // Checking every square
        // number of current square row
        for(int i = 0; i < 9; i+=3) { 
            // number of current row in current squares row
            for(int j = i; j < i+3; j++) { 
                // specific index of each cell
                for(int k = 0; k < 3; k++) { 
                    if(square1.count(board[j][k]) && board[j][k] != '.') 
                        return false;
                    if(square2.count(board[j][k+3]) && board[j][k+3] != '.') 
                        return false;
                    if(square3.count(board[j][k+6]) && board[j][k+6] != '.') 
                        return false;
                    square1.insert(board[j][k]);
                    square2.insert(board[j][k+3]);
                    square3.insert(board[j][k+6]);
                    
                }
            }
            square1.clear();
            square2.clear();
            square3.clear();
        }
        return true;
    }
};
