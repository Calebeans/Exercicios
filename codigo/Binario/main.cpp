#include <iostream>
#include <windows.h>
#include <bitset>

using namespace std;

string bin(int x);

int main()
{
    UINT CPAGE_UTF8 = 65001;
    UINT CPAGE_DEFAULT = GetConsoleOutputCP();
    SetConsoleOutputCP(CPAGE_UTF8);
    int n;
    cin >> n;

    const int r = 8;

    std::string binary = std::bitset<r>(n).to_string();

    std::cout << binary << std::endl;

    cout << bin(n);
    cout << endl;
    return 0;
}

string bin(int x)
{
    string a;
    while (x != 0)
    {
        a += (x % 2 == 0 ? "0" : "1");
        x = x / 2;
    }
    return a;
}