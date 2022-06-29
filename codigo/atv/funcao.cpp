#include <iostream>
#include <windows.h>

using namespace std;

int maior(int a, int b);

int main()
{
  UINT CPAGE_UTF8 = 65001;
  UINT CPAGE_DEFAULT = GetConsoleOutputCP();
  SetConsoleOutputCP(CPAGE_UTF8);

  int a = 9, b = 19;
  cout << maior(a, b);

  cout << endl;
  return 0;
}

int maior(int a, int b)
{
  if (a > b)
  {
    return a;
  }
  return b;
}