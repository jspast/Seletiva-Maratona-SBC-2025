#include <bits/stdc++.h>
using namespace std;

int dot(int x1, int y1, int x2, int y2)
{
    return x1 * x2 + y1 * y2;
}

bool is_l(int x1, int y1, int x2, int y2)
{
    if (x1 == x2 && y1 == y2 ||
        x1 == 0 && y1 == 0 ||
        x2 == 0 && y2 == 0)
        return false;

    return !dot(x1, y1, x2, y2);
}

struct point {
    int x;
    int y;
};

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    struct point points[3];

    cin >> points[0].x >> points[0].y;
    cin >> points[1].x >> points[1].y;
    cin >> points[2].x >> points[2].y;

    for (int chosen = 0; chosen < 3; ++chosen) {
        int vec1_idx = (chosen + 1) % 3;
        int vec2_idx = (chosen + 2) % 3;

        struct point vec1 = {
            points[vec1_idx].x - points[chosen].x,
            points[vec1_idx].y - points[chosen].y
        };
        struct point vec2 = {
            points[vec2_idx].x - points[chosen].x,
            points[vec2_idx].y - points[chosen].y
        };

        if (is_l(vec1.x, vec1.y, vec2.x, vec2.y)) {
            cout << "RIGHT" << endl;
            return 0;
        }
    }

    for (int chosen = 0; chosen < 3; ++chosen) {
        int vec1_idx = (chosen + 1) % 3;
        int vec2_idx = (chosen + 2) % 3;

        struct point vec1 = {
            points[vec1_idx].x - points[chosen].x,
            points[vec1_idx].y - points[chosen].y
        };
        struct point vec2 = {
            points[vec2_idx].x - points[chosen].x,
            points[vec2_idx].y - points[chosen].y
        };

        if (is_l(vec1.x + 1, vec1.y, vec2.x, vec2.y)) {
            cout << "ALMOST" << endl;
            return 0;
        }

        if (is_l(vec1.x - 1, vec1.y, vec2.x, vec2.y)) {
            cout << "ALMOST" << endl;
            return 0;
        }

        if (is_l(vec1.x, vec1.y + 1, vec2.x, vec2.y)) {
            cout << "ALMOST" << endl;
            return 0;
        }

        if (is_l(vec1.x, vec1.y - 1, vec2.x, vec2.y)) {
            cout << "ALMOST" << endl;
            return 0;
        }

        if (is_l(vec1.x, vec1.y, vec2.x + 1, vec2.y)) {
            cout << "ALMOST" << endl;
            return 0;
        }

        if (is_l(vec1.x, vec1.y, vec2.x - 1, vec2.y)) {
            cout << "ALMOST" << endl;
            return 0;
        }

        if (is_l(vec1.x, vec1.y, vec2.x, vec2.y + 1)) {
            cout << "ALMOST" << endl;
            return 0;
        }

        if (is_l(vec1.x, vec1.y, vec2.x, vec2.y - 1)) {
            cout << "ALMOST" << endl;
            return 0;
        }

        if (is_l(vec1.x + 1, vec1.y, vec2.x + 1, vec2.y)) {
            cout << "ALMOST" << endl;
            return 0;
        }

        if (is_l(vec1.x - 1, vec1.y, vec2.x - 1, vec2.y)) {
            cout << "ALMOST" << endl;
            return 0;
        }

        if (is_l(vec1.x, vec1.y + 1, vec2.x, vec2.y + 1)) {
            cout << "ALMOST" << endl;
            return 0;
        }

        if (is_l(vec1.x, vec1.y - 1, vec2.x, vec2.y - 1)) {
            cout << "ALMOST" << endl;
            return 0;
        }
    }

    cout << "NEITHER" << endl;

    return 0;
}