#include <iostream>
#include <vector>
#include <queue>

using namespace std;

struct Cell {
    long long int value;
    long long int row, col;
    bool operator<(const #include <iostream>
#include <vector>
#include <queue>

using namespace std;

struct Cell {
    long long int value;
    long long int row, col;
    bool operator<(const Cell& other) const {
        if (value != other.value) return value < other.value;
        if (row != other.row) return row > other.row;
        return col > other.col;
    }
};

bool isValid(long long int i, long long int j, long long int n, long long int m) {
    return i >= 0 && i < n && j >= 0 && j < m;
}

int main() {
    long long int t;
    cin >> t;

    while (t--) {
        long long int n, m;
        cin >> n >> m;

        vector<vector<long long int>> a(n, vector<long long int>(m));
        priority_queue<Cell> pq;

        for (long long int i = 0; i < n; ++i) {
            for (long long int j = 0; j < m; ++j) {
                cin >> a[i][j];
                pq.push({a[i][j], i, j});
            }
        }

        vector<pair<long long int, long long int>> directions = {{-1, 0}, {1, 0}, {0, -1}, {0, 1}};

        while (!pq.empty()) {
            Cell top = pq.top();
            pq.pop();
            long long int i = top.row;
            long long int j = top.col;

            bool greaterThanNeighbors = true;
            for (auto& dir : directions) {
                long long int ni = i + dir.first;
                long long int nj = j + dir.second;
                if (isValid(ni, nj, n, m) && a[i][j] <= a[ni][nj]) {
                    greaterThanNeighbors = false;
                    break;
                }
            }

            if (greaterThanNeighbors) {
                a[i][j]--;
                for (auto& dir : directions) {
                    long long int ni = i + dir.first;
                    long long int nj = j + dir.second;
                    if (isValid(ni, nj, n, m)) {
                        pq.push({a[ni][nj], ni, nj});
                    }
                }
                pq.push({a[i][j], i, j});
            }
        }

        for (long long int i = 0; i < n; ++i) {
            for (long long int j = 0; j < m; ++j) {
                cout << a[i][j] << " ";
            }
            cout << endl;
        }
    }

    return 0;
}
Cell& other) const {
        if (value != other.value) return value < other.value;
        if (row != other.row) return row > other.row;
        return col > other.col;
    }
};

bool isValid(long long int i, long long int j, long long int n, long long int m) {
    return i >= 0 && i < n && j >= 0 && j < m;
}

int main() {
    long long int t;
    cin >> t;

    while (t--) {
        long long int n, m;
        cin >> n >> m;

        vector<vector<long long int>> a(n, vector<long long int>(m));
        priority_queue<Cell> pq;

        for (long long int i = 0; i < n; ++i) {
            for (long long int j = 0; j < m; ++j) {
                cin >> a[i][j];
                pq.push({a[i][j], i, j});
            }
        }

        vector<pair<long long int, long long int>> directions = {{-1, 0}, {1, 0}, {0, -1}, {0, 1}};

        while (!pq.empty()) {
            Cell top = pq.top();
            pq.pop();
            long long int i = top.row;
            long long int j = top.col;

            bool greaterThanNeighbors = true;
            for (auto& dir : directions) {
                long long int ni = i + dir.first;
                long long int nj = j + dir.second;
                if (isValid(ni, nj, n, m) && a[i][j] <= a[ni][nj]) {
                    greaterThanNeighbors = false;
                    break;
                }
            }

            if (greaterThanNeighbors) {
                a[i][j]--;
                for (auto& dir : directions) {
                    long long int ni = i + dir.first;
                    long long int nj = j + dir.second;
                    if (isValid(ni, nj, n, m)) {
                        pq.push({a[ni][nj], ni, nj});
                    }
                }
                pq.push({a[i][j], i, j});
            }
        }

        for (long long int i = 0; i < n; ++i) {
            for (long long int j = 0; j < m; ++j) {
                cout << a[i][j] << " ";
            }
            cout << endl;
        }
    }

    return 0;
}
