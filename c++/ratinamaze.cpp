class Solution {
private:


  void solve(vector<vector<int>> &maze,int n,vector<string>& ans,int x,int y.vector<vector<int>> visited,string path){
      
      if(x==n-1 && y==n-1){
          ans.push_back(path);
          return;
      }
      visited[x][y]=1;
      
      
      int newx=x+1;
      int newy=y;
      if(issafe(newx,newy,n,visited,m)){
          path.push_back('D');
          solve(maze,n,ans,newx,newy,visited,path);
          path.pop_back();
      }
      int newx=x;
      int newy=y-1;
      if(issafe(newx,newy,n,visited,m)){
          path.push_back('D');
          solve(maze,n,ans,newx,newy,visited,path);
          path.pop_back();
      }    
      
      int newx=x;
      int newy=y-1;
      if(issafe(newx,newy,n,visited,m)){
          path.push_back('D');
          solve(maze,n,ans,newx,newy,visited,path);
          path.pop_back();
      }    
  }
  
  public:
    vector<string> ratInMaze(vector<vector<int>>& maze) {
        // code herevector<string> 
        int n=maze.size()-1;
        vector<string> ans;
        
        if(maze[0][0]==0){
            return ans;
        }
        int scrx=0;
        int scry=0;
        
        vector<vector<int>> visited=m;
        
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                visited[i][j]=0;
            }
        }
        
        string path="";
        solve(maze,n,srcx,srcy,visited,path);
        sort(ans.begin(),ans.end());
        return ans;
        
    }
};