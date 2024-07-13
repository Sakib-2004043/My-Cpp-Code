#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, m, k;
        cin >> n >> m >> k;

        vector<int> permutation;

        // Adding numbers >= k first
        for (int i = n; i >= k; i--) {
            permutation.push_back(i);
        }
        // Adding numbers > m and < k
        for (int i = m + 1; i < k; i++) {
            permutation.push_back(i);
        }
        // Adding numbers <= m last
        for (int i = 1; i <= m; i++) {
            permutation.push_back(i);
        }

        // Print the permutation
        for (int i = 0; i < n; i++) {
            cout << permutation[i] << " ";
        }
        cout << endl;
    }

    return 0;
}
