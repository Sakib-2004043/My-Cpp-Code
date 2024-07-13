#include <iostream>
#include <vector>
using namespace std;

// Function to perform DFS and count steps
void dfs(int node, const vector<vector<int>>& adj, vector<bool>& visited, int& step_count) {
    visited[node] = true;
    step_count++;

    for (int neighbor : adj[node]) {
        if (!visited[neighbor]) {
            dfs(neighbor, adj, visited, step_count);
        }
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n,e;
    cout << "Enter number of vertices: ";
    cin >> n;
    cin>>e;
    cin>>e;

    vector<vector<int>> adj(n);
    cout << "Enter edges (n-1 lines):\n";
    for (int i = 0; i < n - 1; ++i) {
        int x, y;
        cin >> x >> y;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }

    vector<bool> visited(n, false);
    int step_count = 0;

    // Starting DFS from vertex 0 (or any vertex)
    dfs(e, adj, visited, step_count);

    cout << "Total number of steps in DFS traversal: " << step_count << "\n";

    return 0;
}
