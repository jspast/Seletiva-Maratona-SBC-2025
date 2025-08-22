#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int in;

    cin >> in;

    int mask = 1;

    int total = 0;

    for (int i = 0; i < 32; ++i) {
        if (in & mask)
            total += 1;

        mask = mask << 1;
    }

    cout << total << endl;

    return 0;
}