#include<iostream>
#include<vector>
using namespace std;

bool isSafe(int row, int col, vector<vector<char>>& board, char value){
    for (int i = 0; i < board.size(); i++)
    {
        // row check
        if(board[row][i] == value)
            return false;
        if(board[i][col] == value)
            return false;
        if(board[3*(row/3) + i/3][3*(col/3) + i%3] == value)
            return false;
    }
    return true;
}

bool solve(vector<vector<char>>& board){
    int n = board[0].size();
    cout << n << endl;
    cout << "Sudo" << endl;
    for (int row = 0; row < n; row++)
    {
        cout << "Sudo" << endl;
        for (int col = 0; col < n; col++)
        {
            cout << "Sudo" << endl;
            cout << board[row][col] << endl;
            if(board[row][col] == '.'){
                cout << "Sudo" << endl;
                for (int i = 1; i <= n; i++)
                {
                    char value = i;
                    cout << " value -> " << value << endl;
                    if(isSafe(row,col,board,value)){
                        board[row][col] = value;
                        bool possibleSolution = solve(board);
                        if(possibleSolution)
                            return true;
                        else
                            board[row][col] = '.';
                    }
                } 
            }
            return false;
        }
        
    }
    return true;
}

 void solveSudoku(vector<vector<char>>& board) {
    solve(board); 
}

int main(){
    std::vector<std::vector<char>> board = {
        {'5', '3', '.', '.', '7', '.', '.', '.', '.'},
        {'6', '.', '.', '1', '9', '5', '.', '.', '.'},
        {'.', '9', '8', '.', '.', '.', '.', '6', '.'},
        {'8', '.', '.', '.', '6', '.', '.', '.', '3'},
        {'4', '.', '.', '8', '.', '3', '.', '.', '1'},
        {'7', '.', '.', '.', '2', '.', '.', '.', '6'},
        {'.', '6', '.', '.', '.', '.', '2', '8', '.'},
        {'.', '.', '.', '4', '1', '9', '.', '.', '5'},
        {'.', '.', '.', '.', '8', '.', '.', '7', '9'}
    };
    solveSudoku(board);
}