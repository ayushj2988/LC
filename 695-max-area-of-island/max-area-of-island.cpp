class Solution {
public:
    int area(vector<vector<int>>& grid,int i,int j){
        int m=grid.size();
        int n=grid[0].size();

        if(i<0 || j<0 || i>=m || j>=n || grid[i][j]==0) return 0;
        grid[i][j]=0;
        return 1 +area(grid,i+1,j)+ area(grid,i-1,j)+ area(grid,i,j+1)+ area(grid,i,j-1);
    }
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        int ans=0;
        int m=grid.size();
        int n=grid[0].size();

        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(grid[i][j]==1){
                    ans=max(ans,area(grid,i,j));
                }
            }
        }

        return ans;
    }
};