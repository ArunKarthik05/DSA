#include <iostream>
using namespace std;

char board[3][3] = { {' ', ' ', ' '}, {' ', ' ', ' '}, {' ', ' ', ' '} };
char currentPlayer = 'X';

bool isBoardFull() {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (board[i][j] == ' ')
                return false;
        }
    }
    return true;
}

void drawBoard() {
    cout << "-------------" << endl;
    for (int i = 0; i < 3; i++) {
        cout << "| ";
        for (int j = 0; j < 3; j++) {
            cout << board[i][j] << " | ";
        }
        cout << endl << "-------------" << endl;
    }
}

bool isMoveValid(int row, int col) {
    if (row < 0 || row >= 3 || col < 0 || col >= 3)
        return false;
    if (board[row][col] != ' ')
        return false;
    return true;
}

bool checkWin() {
    // Check rows
    for (int i = 0; i < 3; i++) {
        if (board[i][0] == board[i][1] && board[i][1] == board[i][2] && board[i][0] != ' ')
            return true;
    }

    // Check columns
    for (int i = 0; i < 3; i++) {
        if (board[0][i] == board[1][i] && board[1][i] == board[2][i] && board[0][i] != ' ')
            return true;
    }

    // Check diagonals
    if (board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[0][0] != ' ')
        return true;
    if (board[2][0] == board[1][1] && board[1][1] == board[0][2] && board[2][0] != ' ')
        return true;

    return false;
}

void updateBoard(int row, int col) {
    board[row][col] = currentPlayer;
    currentPlayer = (currentPlayer == 'X') ? 'O' : 'X';
}

int main() {
    int row, col;

    cout << "Tic Tac Toe Game" << endl;
    cout << "----------------" << endl;

    while (!isBoardFull() && !checkWin()) {
        drawBoard();

        cout << "Player " << currentPlayer << ", enter your move (row column): ";
        cin >> row >> col;

        if (isMoveValid(row, col)) {
            updateBoard(row, col);
        }
        else {
            cout << "Invalid move. Try again." << endl;
        }
    }

    drawBoard();

    if (checkWin()) {
        currentPlayer = (currentPlayer == 'X') ? 'O' : 'X';
        cout << "Player " << currentPlayer << " wins!" << endl;
    }
    else {
        cout << "It's a tie!" << endl;
    }

    return 0;
}
