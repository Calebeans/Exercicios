#include <iostream>
#include <windows.h>
#include "funcoes.hpp"
 
using namespace std;
 
int main() {
  UINT CPAGE_UTF8 = 65001;
  UINT CPAGE_DEFAULT = GetConsoleOutputCP();
  SetConsoleOutputCP(CPAGE_UTF8);

  int n;
  n = menu();

 
  cout << endl;
  return 0;
}