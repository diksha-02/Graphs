class Solution {
public:
    vector<int> graph[200001];
    
    void dfs(int start, vector<bool>&vis){
        vis[start] = true;
        
        for(auto i : graph[start]){
            if(!vis[i] && i != start)
                dfs(i, vis);
        }
    }
    
    bool validPath(int n, vector<vector<int>>& edges, int start, int end) {
        
        for(int i=0; i<edges.size(); i++){
            graph[edges[i][0]].push_back(edges[i][1]);
            graph[edges[i][1]].push_back(edges[i][0]);
        }
        vector<bool>vis(n, false);
        dfs(start, vis);
        
        return (vis[end] == true);
    }
};
