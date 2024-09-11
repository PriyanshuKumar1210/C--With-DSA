#include <iostream>
#include <vector>
using namespace std;
#define N 8 // Size of the chessboard
#define K 4 // Number of knights
// Possible moves a knight can make
// int dx[8] = {2, 1, -1, -2, -2, -1, 1, 2};
int dx[8] = {-1, -2, -2, -1, 1, 2, 2, 1};
// int dy[8] = {1, 2, 2, 1, -1, -2, -2, -1};
int dy[8] = {-2, -1, 1, 2, 2, 1, -1, -2};

// Function to print the chessboard with knights

void printBoard(vector<vector<char>>& board) {
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            cout << board[i][j] << " ";
        }
        cout << endl;
    }
    cout << "-------------------------------------" << endl;
}
// Function to check if a knight's position is safe
bool isSafe(int x, int y, vector<vector<char>>& board) {
    if (board[x][y] == 'K') return false; // Already occupied by another knight

    for (int i = 0; i < 8; i++) {
        int nx = x + dx[i];
        int ny = y + dy[i];

        if (nx >= 0 && nx < N && ny >= 0 && ny < N && board[nx][ny] == 'K') {
            return false; // Another knight can attack this position
        }
    }
    return true;
}

// Recursive function to place knights on the board
bool placeKnights(vector<vector<char>>& board, int placedKnights, int row, int col) {
    if (placedKnights == K) {
        printBoard(board);
        return true;
    }
    for (int i = row; i < N; i++) {
        for (int j = (i == row ? col : 0); j < N; j++) {
            if (isSafe(i, j, board)) {
                board[i][j] = 'K'; // Place knight
                if (placeKnights(board, placedKnights + 1, i, j + 1)) {
                    return true; // Solution found
                }
                board[i][j] = '.'; // Backtrack
            }
        }
    }
    return false;
}
int main() {
    vector<vector<char>> board(N, vector<char>(N, '.'));
    if (!placeKnights(board, 0, 0, 0)) {
        cout << "No solution found!" << endl;
    }
    return 0;
}