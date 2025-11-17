#include<iostream>
#include<vector>
using namespace std;

bool isSafe(vector<string> &board,int row,int col,int n)
{
    //left attack
    for(int i = col;i>=0;i--)
    {
        if(board[row][i] == 'Q')
        {
            return false;
        }
    }

    //left bottom attack
    int i = row;
    int j = col;

    while(i<n && j>=0)
    {
        if(board[i][j]=='Q')
        {
            return false;
        }

        i++;
        j--;
    }

    //left bottom attack
    i = row;
    j = col;

    while(i>=0 && j>=0)
    {
        if(board[i][j]=='Q')
        {
            return false;
        }

        i--;
        j--;
    }

    return true;
}

void solve(vector<string> &board,vector<vector<string>> &ans,int n,int col)
{
    if(col==n)
    {
        ans.push_back(board);
        return;
    }

    for(int row = 0;row<n;row++)
    {
       if(isSafe(board,row,col,n) == true) 
       {
            board[row][col] = 'Q';
            solve(board,ans,n,col+1);
            board[row][col] = '.';
       }
    }
}

vector<vector<string>> solveQueen(int n)
{
    string temp = "....";

    vector<string> board;
    for(int i = 0;i<n;i++)
    {
        board.push_back(temp);
    }

    vector<vector<string>> ans;

    
    solve(board,ans,n,0);

    return ans;

}
int main()
{
    int n = 4;
    
    vector<vector<string>> ans = solveQueen(n);

    for(int i = 0;i<ans.size();i++)
    {
        for(int j = 0;j<ans[i].size();j++)
        {
           for(int k = 0;k<n;k++)
           {
            cout<<ans[i][j][k];
           }
           cout<<endl;
        }

        cout<<endl;
        cout<<endl;
    }
}


/*

[[".Q..","...Q","Q...","..Q."],["..Q.","Q...","...Q",".Q.."]]

*/