vector<int> adj[110]; //adjacency list
vector<pii> edge; //edge list
bool mat[110][110]; //adjacency matrix
int main()
{
    int n, m, a, b; //n nodes, m edges
    cin >> n >> m;
    for(int i = 0; i < m; i ++)
    {
        cin >> a >> b; a--; b--; //directed edge from a to b
        adj[a].push_back(b); //push back b into the list of nodes adjacent to a
        edge.push_back({a, b}); //push the edge into the edge list
        mat[a][b] = true; //set mat[a][b] true because there is an edge from a to b
    }
    for(int i = 0; i < n; i ++)
    {
        cout << "nodes adjacent to " << i+1 << ": ";
        for(auto it : adj[i])
            cout << it+1 << " "; //loop thru nodes adjacent to current one and print them all out
        if(adj[i].empty()) cout << "none"; //if there are no adjacent nodes, print "none"
        cout << "\n";
    } cout << "\nlist of edges:\n";
    for(int i = 0; i < m; i ++)
        cout << edge[i].f+1 << " " << edge[i].s+1 << "\n"; //prints out all the edges
    cout << "\nadjacency matrix:\n";
    for(int i = 0; i < n; i ++)
    {
        for(int j = 0; j < n; j ++)
            cout << ((mat[i][j])?1:0) << " "; //prints out 1 if there is edge from i to j, otherwise 0
        cout << "\n";
    }
}