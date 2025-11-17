class Solution {
  public:
  
    void solve(vector<vector<int>> &maze,int row,int col,string dir,int delRow[],int delCol[],string path,vector<string >&ans,int n)
    {
        if(row == n-1 && col == n-1)
        {
            ans.push_back(path);
            return;
        }
        
        for(int i = 0;i<4;i++)
        {
            int nRow = row + delRow[i];
            int nCol = col + delCol[i];
            
            if(nRow >= 0 && nRow<n && nCol>=0 && nCol<n && maze[nRow][nCol]!=0)
            {
                path.push_back(dir[i]);
                maze[row][col] = 0;
                
                solve(maze,nRow,nCol,dir,delRow,delCol,path,ans,n);
                
                maze[row][col] = 1;
                path.pop_back();
            }
        }
    }
    
    vector<string> ratInMaze(vector<vector<int>>& maze) {
        // code here
        string dir = "DLRU";
        
        int delRow[4] = {1,0,0,-1};
        int delCol[4] = {0,-1,1,0};
        
        string path;
        vector<string> ans;
        
        int n = maze.size();
        
        solve(maze,0,0,dir,delRow,delCol,path,ans,n);
        
        return ans;
    }
};