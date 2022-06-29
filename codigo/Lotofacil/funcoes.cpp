#include <iostream>

using namespace std;

int menu()
{
    int n;
    do
    {
        system("cls");
        cout << " ______________" << endl;
        cout << "|     MENU      |" << endl;
        cout << "|  1 PREENCHER  |" << endl;
        cout << "|  2 AUTOMATICO |" << endl;
        cout << "|  3 RESULTADO  |" << endl;
        cout << "|__4___SAIR_____|" << endl;
        cout << "Opcao: ";
        cin >> n;
    } while (n < 1 || n > 4);
}

void cartela(int x[])
{
    int aux = 1;
    for (int i = 0; i < 25; i++)
    {
        x[i] = aux;
        aux++;
    }
}

void imprimirCartela

int sorteio(int cartela[])
{
}