#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    long long x;
    cin >> n >> x;

    unordered_map<long long, int> mp;
    mp.reserve(n);

    for (int i = 0; i < n; i++) {
        long long num;
        cin >> num;

        long long complement = x - num;

        if (mp.find(complement) != mp.end()) {
            cout << mp[complement] << " " << i + 1 << '\n';
            return 0;
        }

        mp[num] = i + 1;
    }

    cout << "IMPOSSIBLE\n";

    return 0;
}