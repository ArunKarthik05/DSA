class Solution 
{
    public:
    void dfs(int index, vector<int> &vis, vector<int>adj[])
    {
        vis[index]=1;
        for(auto next:adj[index])
            if(!vis[next])
                dfs(next,vis,adj);
        return;
    }
    //Function to find a Mother Vertex in the Graph.
	int findMotherVertex(int V, vector<int>adj[])
	{
	    // Code here
	    int mother_v=0;
	    vector<int> vis(V,0);
	    for(int i=0;i<V;i++){
            //IF it is not visited
	        if(!vis[i]){
            //assuming it can be our mother-vertex
	        mother_v=i;
	        dfs(i,vis,adj);
	        }
	   }
	    //reset all visited to 0 after using a VERTEX
	    vis = vector<int>(V,0);
	    //Chcek again if it is possible to visit all vertices
	    dfs(mother_v,vis,adj);
	    for(int x:vis)
	    //If a vertex is false(not visited)
	        if(!x)  return -1;
	   return mother_v;
	}

};
