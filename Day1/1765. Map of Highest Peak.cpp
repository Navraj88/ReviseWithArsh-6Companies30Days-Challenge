/* 1765. Map of Highest Peak
Solved
Medium
Topics
Companies
Hint
You are given an integer matrix isWater of size m x n that represents a map of land and water cells.

If isWater[i][j] == 0, cell (i, j) is a land cell.
If isWater[i][j] == 1, cell (i, j) is a water cell.
You must assign each cell a height in a way that follows these rules:

The height of each cell must be non-negative.
If the cell is a water cell, its height must be 0.
Any two adjacent cells must have an absolute height difference of at most 1. A cell is adjacent to another cell if the former is directly north, east, south, or west of the latter (i.e., their sides are touching).
Find an assignment of heights such that the maximum height in the matrix is maximized.

Return an integer matrix height of size m x n where height[i][j] is cell (i, j)'s height. If there are multiple solutions, return any of them.
*/



class Solution {
public:
    vector<vector<int>> highestPeak(vector<vector<int>>& isWater) {
        int n=isWater.size(),m=isWater[0].size();
        vector<vector<int>>ans(n,vector<int>(m,-1));
        queue<pair<int,int>>q;
        int row[]={0,-1,1,0};
        int col[]={1,0,0,-1};
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(isWater[i][j]==1){
                    ans[i][j]=0;
                    q.push({i,j});
                }
            }
        }
        while(!q.empty()){
            int r=q.front().first;
            int c=q.front().second;
            q.pop();
            int v=ans[r][c];
            for(int i=0;i<4;i++){
                int trow=r+row[i];
                int tcol=c+col[i];
                if(trow>=0 && trow<n && tcol>=0 && tcol<m){
                    if(ans[trow][tcol]==-1){
                        ans[trow][tcol]=v+1;
                        q.push({trow,tcol});
                    }
                }
            }
        }
        return ans;
    }
};
