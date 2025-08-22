#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int t, size, counter;
    string s;

    for(cin>>t; t>0; t--){
        cin >> s;

        counter = 0;
        size = s.length();

        if(s[0] != ')' && s[size-1] != '('){
            for(int i=0; i<size; i++){
                if(s[i] == '?')
                    counter++;
            }

            if(counter % 2 == 0)
                cout << "YES\n";
            else
                cout << "NO\n";
        }
        else
            cout << "NO\n";
    }

    return 0;
}