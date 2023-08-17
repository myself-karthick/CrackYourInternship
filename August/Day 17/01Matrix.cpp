// Link : https://leetcode.com/problems/01-matrix/
class Solution {
public:
    vector<vector<int>> updateMatrix(vector<vector<int>>& mat) {
        
        int row=mat.size(), col=mat[0].size();
        vector<vector<int>> res(row,vector<int>(col,100000));
        queue<pair<int,int>> q;
        for(int i=0; i<row; i++)
        {
            for(int j=0; j<col; j++)
            {
                if(mat[i][j]==0){
                    res[i][j]=0;
                    q.push({i,j});
                }
            }
        }
        int dir[4][2]={{-1,0}, {1,0}, {0,-1}, {0,1}};
        while(!q.empty())
        {
            pair<int,int> f=q.front();
            q.pop();
            int currR=f.first, currC=f.second;
            for(int i=0; i<4; i++)
            {
                int adjRow=currR+dir[i][0];
                int adjCol=currC+dir[i][1];
                if(adjRow>=0 && adjRow<row && adjCol>=0 && adjCol<col){
                    if(res[adjRow][adjCol]>res[currR][currC]+1)
                    {
                        res[adjRow][adjCol]=res[currR][currC]+1;
                        q.push({adjRow,adjCol});
                    }
                }
            }
        }
        return res;
    }
};