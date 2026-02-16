#include <bits/stdc++.h>
using namespace std;

// WRITE THE CODE OF PRINT BOARD

void PrintBoard(vector<vector<char>> Board)
{
    int n = Board.size();

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << Board[i][j] << " ";
        }
        cout << endl;
    }
    cout << "----------------" << endl;
}

bool isSafe(vector<vector<char>> Board, int row, int col)
{
    int n = Board.size();
    // Horizontal check

    for (int j = 0; j < n; j++)
    {
        if (Board[row][j] == 'Q')
        {
            return false;
        }
    }

    // vertical check

    for (int i = 0; i < n; i++)
    {
        if (Board[i][col] == 'Q')
        {
            return false;
        }
    }

    // diagonal left

    for (int i = row, j = col; i >= 0 && j >= 0; i--, j--)
    {
        if (Board[i][j] == 'Q')
        {
            return false;
        }
    }

    // diagonal right
    for (int i = row, j = col; i >= 0 && j < n; i--, j++)
    {
        if (Board[i][j] == 'Q')
        {
            return false;
        }
    }

    return true;
}

int NQueen(vector<vector<char>> Board, int row)
{
    int n = Board.size();

    int count = 0;
    if (row == n)
    {
        PrintBoard(Board);
        return 1;
    }

    for (int j = 0; j < n; j++)
    {
        if (isSafe(Board, row, j))
        {
            Board[row][j] = 'Q';
            count += NQueen(Board, row + 1);
            Board[row][j] = '.';
        }
    }

    return count;
}

int main()
{
    vector<vector<char>> Board;
    int n = 4;
    if(n<=3){
        cout<<"To get a valid result u have to give n more than 3!!"<<endl;
        return 0;
    }
    for (int i = 0; i < n; i++)
    {
        vector<char> newRow;
        for (int j = 0; j < n; j++)
        {
            newRow.push_back('.');
        }
        Board.push_back(newRow);
    }
    int count = NQueen(Board, 0);
    cout << count << endl;
    return 0;
}