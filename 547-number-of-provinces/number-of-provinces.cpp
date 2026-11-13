class Solution {
public:
    void dfs(vector<vector<int>>& graph,int src,vector<bool>& vis){
        vis[src]=true;
        for(int i=0;i<graph[src].size();i++){
            if(graph[src][i]==1 && !vis[i]){
                dfs(graph,i,vis);
            }
        }
    }
    int findCircleNum(vector<vector<int>>& graph) {
        int n=graph.size();
        vector<bool> visted(n,false);
        int ans=0;
        for(int i=0;i<graph[0].size();i++){
            if(!visted[i]){
                ans+=1;
                dfs(graph,i,visted);
            }

        }
        return ans;
    }
};