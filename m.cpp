#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int t, n, x, y, div, interval;

    for(cin>>t; t>0; t--){
        cin >> n >> x >> y;

        cout << x << " " << y << " ";

        div = n - 1;
        interval = y - x;

        while (interval % div != 0)
            div--;

        for (int i = 1; i < div; i++)
            cout << x + i * (interval / div) << " ";

        int after = 0;

        for (int i = 1; i < n - div; i++) {
            if (x - i * (interval / div) >= 1)
                cout << x - i * (interval / div) << " ";
            else
                after++;
        }

        for (int i = 1; i <= after; i++)
                cout << y + i * (interval / div) << " ";

        cout << "\n";
    }

    return 0;
}