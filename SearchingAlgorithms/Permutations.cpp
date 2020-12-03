#include <iostream>
#include <vector>
#include <atomic>

using namespace std;

atomic <int> cnt;

bool contains(vector <int> v, int n) {
    for (auto it : v) {
        if (it == n) {
            return true;
        }
    }
    return false;
}

inline void backtracking(vector <int> configuration, int n, int pos, int k) {

    if (pos == k) {
            for (auto it : configuration)
                cout << it << " ";
            cout << "\n";
            cnt++;
    }

    for (int i = 1; i <= n; ++i) {
        if (contains(configuration, i)) continue;
        configuration.push_back(i);
        backtracking(configuration, n, pos + 1, k);
        configuration.pop_back();
    }
}