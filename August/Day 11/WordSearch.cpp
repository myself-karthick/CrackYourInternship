// Search the string in the matrix in horizontal, vertical and diagonal way
#include<bits/stdc++.h>
using namespace std;

bool search(vector<vector<char>>& board, int R, int C, string& word, int i, int j, int index, vector<vector<bool>>& visited)
{
    if(index==word.length()-1)   return true;
    visited[i][j]=true;

    if(i>0 && !visited[i-1][j] && board[i-1][j]==word[index+1] && search(board, R, C, word, i-1, j, index+1, visited))
        return true;
    if(j>0 && !visited[i][j-1] && board[i][j-1]==word[index+1] && search(board, R, C, word, i, j-1, index+1, visited))
        return true;

    if(i>0 && j>0 && !visited[i-1][j-1] && board[i-1][j-1]==word[index+1] && search(board, R, C, word, i-1, j-1, index+1, visited))
        return true;
    if(i>0 && j<C-1 && !visited[i-1][j+1] && board[i-1][j+1]==word[index+1] && search(board, R, C, word, i-1, j+1, index+1, visited))
        return true;

    if(i<R-1 && j>0 && !visited[i+1][j-1] && board[i+1][j-1]==word[index+1] && search(board, R, C, word, i+1, j-1, index+1, visited))
        return true;
    if(i<R-1 && j<C-1 && !visited[i+1][j+1] && board[i+1][j+1]==word[index+1] && search(board, R, C, word, i+1, j+1, index+1, visited))
        return true;

    if(i<R-1 && !visited[i+1][j] && board[i+1][j]==word[index+1] && search(board, R, C, word, i+1, j, index+1, visited))
        return true;
    if(j<C-1 && !visited[i][j+1] && board[i][j+1]==word[index+1] && search(board, R, C, word, i, j+1, index+1, visited))
        return true;

    visited[i][j]=false;
    return false;
}