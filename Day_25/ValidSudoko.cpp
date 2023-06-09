#include<bits/stdc++.h>
using namespace std;

/*
Each row must contain the digits 1-9 without repetition.
Each column must contain the digits 1-9 without repetition.
Each of the nine 3 x 3 sub-boxes of the grid must contain the digits 1-9 without repetition.
*/
/*
Input: board = 
[["5","3",".",".","7",".",".",".","."]
,["6",".",".","1","9","5",".",".","."]
,[".","9","8",".",".",".",".","6","."]
,["8",".",".",".","6",".",".",".","3"]
,["4",".",".","8",".","3",".",".","1"]
,["7",".",".",".","2",".",".",".","6"]
,[".","6",".",".",".",".","2","8","."]
,[".",".",".","4","1","9",".",".","5"]
,[".",".",".",".","8",".",".","7","9"]]
Output: true
*/
class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
       int row[9][9]={0}; 
       int col[9][9]={0}; 
       int mat[3][3][9]={0};
       for(int i=0;i<board.size();i++){
           for(int j=0;j<board[i].size();j++){
               if(board[i][j]=='.') continue;
               int n=board[i][j]-'1';
               if(row[i][n]++ || col[n][j]++ || mat[i/3][j/3][n]++) return false;
           }

       }
       return true;
      }
    
};  