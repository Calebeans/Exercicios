#include <iostream>
#include <windows.h>
#include <cstring>

using namespace std;

void gotoxy(int x, int y);

int main()
{
  UINT CPAGE_UTF8 = 65001;
  UINT CPAGE_DEFAULT = GetConsoleOutputCP();
  SetConsoleOutputCP(CPAGE_UTF8);

  char user[50];
  char pass[50];
  char passConf[6];
  int compri = 0;

  do
  {
    system("cls");
    gotoxy(47, 12);
    cout << "Sistema de Login";
    gotoxy(47, 14);
    cout << "Digite seu nome: ";
    cin.getline(user, 50);
    gotoxy(47, 16);
    cout << "Digite sua senha: ";
    cin.getline(pass, 50);
    compri = strlen(pass);
  } while (compri < 6);

  gotoxy(47, 18);
  cout << "Confirme sua senha: ";
  cin.getline(passConf, 50);

  if (strcmp(pass, passConf) == 0)
  {
    gotoxy(47, 20);
    cout << "Senha Correta!";
  }
  else
  {
    gotoxy(47, 20);
    cout << "Senha Incorreta";
  }

  cout << endl;
  return 0;
}

void gotoxy(int x, int y)
{
  COORD c;
  c.X = x - 1;
  c.Y = y - 1;
  SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), c);
}

bool veriSenha(char pass[8]){
    for(int i = 0; i < 8; i++){
        if(!isdigit(pass[i])){
            return false;
        }
        return true;
    }
}
