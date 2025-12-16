
class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
        int m = grid.size();
        int n = grid[0].size();

        vector<vector<int>> visited = grid;

        queue<pair<pair<int,int>,int>> q;
    int count = 0;
        for(int i=0;i<m;i++)
        {
            for(int j = 0;j<n;j++)
            {
                if(grid[i][j] == 2)
                {
                    q.push({{i,j},0});
                }
                if(grid[i][j] == 1)
                {
                    count++;
                }
            }

        }
        
        int delRow[] = {-1,0,1,0};
        int delCol[] = {0,-1,0,1};

        int time = 0;
        int rottenCount = 0;
        while(q.empty() != true)
        {
            int row = q.front().first.first;
            int col = q.front().first.second;
            int t = q.front().second;
            q.pop();

            time = max(time,t);

            for(int i = 0;i<4;i++)
            {
                int nRow = row + delRow[i];
                int nCol = col + delCol[i];
                int nTime = t + 1;

                if(nRow >= 0 && nRow < m && nCol >= 0 && nCol < n && grid[nRow][nCol] == 1 && visited[nRow][nCol] != 2)
                {
                    visited[nRow][nCol] = 2;
                    rottenCount++;
                    q.push({{nRow,nCol},nTime});
                }
            }

        }
        if(count != rottenCount)
        {
            return -1;
        }
        return time;

    }
};