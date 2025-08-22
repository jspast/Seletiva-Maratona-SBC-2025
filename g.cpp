#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int t;

    for(cin>>t; t>0; t--) {
        string s;
        cin >> s;
        int pos_u = s.find_last_of('u');
        string s2 = s.replace(pos_u, 2, "i");
        cout<<s2<<endl;
    }

    return 0;
}
