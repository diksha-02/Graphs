class Solution {
public:
    bool dfs(vector<vector<int>>&graph,vector<int>&vis,int i){
        if( vis[i]==1) return true;
        if(vis[i]==2) return false;
        vis[i]=1;
        for(auto j:graph[i]){
            if(dfs(graph,vis,j))
                return true;
        }
        vis[i]=2;
        return false;
    }
    bool canFinish(int numCourses, vector<vector<int>>& pre) {
        vector<vector<int>>graph(numCourses);
        vector<int>vis(numCourses,0);
        for(auto i:pre){
            graph[i[1]].push_back(i[0]);
        }
        for(int i=0;i<numCourses;i++){
            if(dfs(graph,vis,i)){
                return false;
            }
        }
        return true;
    }
};
