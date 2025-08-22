#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int n, alfabeto[26]={0};
    bool panto = true;
    string palavra; 

    cin >> n;
    cin >> palavra;

    if(n < 26)
        panto = false;
    else{
        for(int i=0; i<n; i++){
            int index = int(palavra[i]);

            if(index <= 90){
                alfabeto[index-65]++;
            }
            else{
                alfabeto[index-97]++;
            }
        }

        for(int i=0; i<26; i++){
            if(alfabeto[i] == 0){
                panto = false;
                break;
            }
        }
    }

    if(panto)
        cout << "YES\n";
    else
        cout << "NO\n";

    return 0;
}