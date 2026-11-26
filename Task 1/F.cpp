#include <bits/stdc++.h>
using namespace std;

int main() {
    int X, N;
    cin >> X >> N;

    int w[105];

    for (int i = 1; i <= N; i++) {
        cin >> w[i];
    }

    int Q;
    cin >> Q;

    bool attached[105] = {};

    int currentWeight = X;

    for (int i = 0; i < Q; i++) {
        int p;
        cin >> p;

        if (attached[p] == false) {
            currentWeight += w[p];
            attached[p] = true;
        }
        else {
            currentWeight -= w[p];
            attached[p] = false;
        }

        cout << currentWeight << '\n';
    }

    return 0;
}
