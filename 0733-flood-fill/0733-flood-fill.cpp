class Solution {
public:
     int dx[4] = {-1, 0, 1, 0};
     int dy[4] = {0, -1, 0, 1};
    bool check(int x,int y, int m,int n){
        return x>=0&&x<m&&y>=0&&y<n;
    }
    void dfs(vector<vector<int>>& image, int sr, int sc, int color,vector<vector<bool>>&vis){
        vis[sr][sc]=1;
        int prVal=image[sr][sc];
        image[sr][sc]=color;
           for(int i=0;i<4;i++){
            int nx,ny;
            nx=dx[i]+sr;
            ny=dy[i]+sc;
            if(check(nx,ny,image.size(),image[sr].size())&&!vis[nx][ny]&&image[nx][ny]==prVal){
                dfs(image,nx,ny,color,vis);
            }
        }
    }
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        vector<vector<bool>>vis(image.size());
        for(int i=0;i<image.size();i++){
            vis[i]=vector<bool>(image[i].size());
        }
        dfs(image,sr,sc,color,vis);
        return image;
    }
};