class Solution {
public:
     int dx[4] = {-1, 0, 1, 0};
     int dy[4] = {0, -1, 0, 1};
    bool check(int x,int y, int m,int n){
        return x>=0&&x<m&&y>=0&&y<n;
    }
    map<pair<int,int>,bool>vis;
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
         vis[{sr,sc}]=1;
        int prVal=image[sr][sc];
        image[sr][sc]=color;
           for(int i=0;i<4;i++){
            int nx,ny;
            nx=dx[i]+sr;
            ny=dy[i]+sc;
            if(check(nx,ny,image.size(),image[sr].size())&&!vis[{nx,ny}]&&image[nx][ny]==prVal){
                floodFill(image,nx,ny,color);
            }
        }
        return image;
    }
};