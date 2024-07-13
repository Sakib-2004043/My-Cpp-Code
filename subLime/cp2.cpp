#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m, k;
        cin >> n >> m >> k;
        string river;
        cin >> river;

        int remaining_swim = k;
        int remaining_jump = m;

        for (int i = 0; i < n; ++i) {
            if (river[i] == 'C') {
                cout << "NO" << endl;
                goto end_of_test_case;
            } else if (river[i] == 'W') {
                remaining_swim--;
                if (remaining_swim < 0) {
                    cout << "NO" << endl;
                    goto end_of_test_case;
                }
            } else if (river[i] == 'L') {
                remaining_jump--;
                if (remaining_jump < 0) {
                    cout << "NO" << endl;
                    goto end_of_test_case;
                }
            }
        }
        if (remaining_jump >= 0 && remaining_swim >= 0)
            cout << "YES" << endl;

    end_of_test_case:
        continue; // Move to the next test case
    }
    return 0;
}
