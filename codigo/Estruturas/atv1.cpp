#include <iostream>
#include <windows.h>
 
using namespace std;

typedef struct Pessoa
{
    char nome[30];
    int idade;
    char endereco[30];
};

 
int main() {
  UINT CPAGE_UTF8 = 65001;
  UINT CPAGE_DEFAULT = GetConsoleOutputCP();
  SetConsoleOutputCP(CPAGE_UTF8);
  Pessoa pessoa;

  cin.getline(pessoa.nome,30);
  cin>>pessoa.idade;
  cin.ignore();
  cin.getline(pessoa.endereco,30);
  

  cout<<"Nome: "<<pessoa.nome<<endl;
  cout<<"Idade: "<<pessoa.idade<<endl;
  cout<<"End: "<<pessoa.endereco;
 
 
  cout << endl;
  return 0;
}