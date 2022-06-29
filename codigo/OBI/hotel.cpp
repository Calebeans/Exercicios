#include <iostream>

using namespace std;

int main()
{
    int D, A, N, d1, re;
    cin >> D;
    cin >> A;
    cin >> N;

    switch (N)
    {
    case 1:
        re = 31 * D;
        break;
    case 2:
        re = 30 * (D + A);
        break;
    case 3:
        re = 29 * (D + (2 * A));
        break;
    case 4:
        re = 28 * (D + (3 * A));
        break;
    case 5:
        re = 27 * (D + (4 * A));
        break;
    case 6:
        re = 26 * (D + (5 * A));
        break;
    case 7:
        re = 25 * (D + (6 * A));
        break;
    case 8:
        re = 24 * (D + (7 * A));
        break;
    case 9:
        re = 23 * (D + (8 * A));
        break;
    case 10:
        re = 22 * (D + (9 * A));
        break;
    case 11:
        re = 21 * (D + (10 * A));
        break;
    case 12:
        re = 20 * (D + (11 * A));
        break;
    case 13:
        re = 19 * (D + (12 * A));
        break;
    case 14:
        re = 18 * (D + (13 * A));
        break;
    case 15:
        re = 17 * (D + (14 * A));
        break;
    case 16:
        re = 16 * (D + (14 * A));
        break;
    case 17:
        re = (D + (15 * A));
        break;
    case 18:
        re = (D + (16 * A));
        break;
    case 19:
        re = (D + (17 * A));
        break;
    case 20:
        re = (D + (18 * A));
        break;
    case 21:
        re = (D + (19 * A));
        break;
    case 22:
        re = (D + (20 * A));
        break;
    case 23:
        re = (D + (21 * A));
        break;
    case 24:
        re = (D + (22 * A));
        break;
    case 25:
        re = (D + (23 * A));
        break;
    case 26:
        re = (D + (24 * A));
        break;
    case 27:
        re = (D + (25 * A));
        break;
    case 28:
        re = (D + (26 * A));
        break;
    case 29:
        re = (D + (27 * A));
        break;
    case 30:
        re = (D + (28 * A));
        break;
    case 31:
        re = (D + (29 * A));
        break;
    default:
        break;
    }
    cout << re;

    return 0;
}