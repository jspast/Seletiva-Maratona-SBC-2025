#include <iostream>
using namespace std;

bool is_just(long long num)
{
    long long temp = num;

    while (temp > 0) {
        int digit = temp % 10;
        temp /= 10;

        if (digit != 0 && num % digit != 0)
            return false;
    }

    return true;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;

    for (int i = 0; i < t; ++i) {
        long long n;
        cin >> n;

        while (!is_just(n))
            n++;

        cout << n << '\n';
    }

    return 0;
}
