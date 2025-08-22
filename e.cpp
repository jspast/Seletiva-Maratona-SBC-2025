#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    long long t, n, k;

    for(cin>>t; t>0; t--){
        cin >> n;
        cin >> k;

        k = k * (n/k + ((n % k) != 0));

        cout << k/n + ((k % n) != 0) << endl;
    }

    return 0;
}