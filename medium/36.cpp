#include <bits/stdc++.h>

using namespace std;

class Solution {
    vector<vector<char>> board;
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        setBoard(board);
        return _isValidSudokuCol() && _isValidSudokuRow() && _isValidSudokuBlock();
    }

    void setBoard(vector<vector<char>>& board) {
        this->board = board;
    }
    vector<vector<char>> getBoard() {
        return board;
    }

private:
    bool _isValidSudokuCol() {
        vector<int> colRecord(9, 0);

        for(int i=0; i<9; i++) {
            for(int j=0; j<9; j++) {
                if(board[i][j] != '.'){
                    int idx = 1 << (board[i][j]- '0');
                    if(colRecord[j] & idx) return false;

                    colRecord[j] |= idx;
                }
            }
        }
        return true;
    }

    bool _isValidSudokuRow() {
        vector<int> rowRecord(9, 0);

        for(int i=0; i<9; i++) {
            for(int j=0; j<9; j++) {
                if(board[i][j] != '.'){
                    int idx = 1 << (board[i][j]- '0');
                    if(rowRecord[i] & idx) return false;
                    
                    rowRecord[i] |= idx;
                }
            }
        }
        return true;    
    }

    bool _isValidSudokuBlock() {
        vector<int> blockRecord(9, 0);

        for(int i=0; i<9; i++) {
            for(int j=0; j<9; j++) {
                if(board[i][j] != '.'){
                    int idx = 1 << (board[i][j]- '0');
                    if(blockRecord[i/3*3 + j/3] & idx) return false;
                    
                    blockRecord[i/3*3 + j/3] |= idx;
                }
            }
        }
        return true;
    }
};

int main(){
    Solution solution;

    vector<vector<char>> board = {{'5','3','.','.','7','.','.','.','.'}
                                    ,{'6','.','.','1','9','5','.','.','.'}
                                    ,{'.','9','8','.','.','.','.','6','.'}
                                    ,{'8','.','.','.','6','.','.','.','3'}
                                    ,{'4','.','.','8','.','3','.','.','1'}
                                    ,{'7','.','.','.','2','.','.','.','6'}
                                    ,{'.','6','.','.','.','.','2','8','.'}
                                    ,{'.','.','.','4','1','9','.','.','5'}
                                    ,{'.','.','.','.','8','.','.','7','9'}};

    cout << solution.isValidSudoku(board) << endl;
    return 0;
}