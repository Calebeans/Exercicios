#include <iostream>
#include <windows.h>

using namespace std;

bool verCep(char cep[8]){
    for(int i = 0; i < 8; i++){
        if(!isdigit(cep[i])){
            return false;
        }
        return true;
    }
}

int main()
{
    UINT CPAGE_UTF8 = 65001;
    UINT CPAGE_DEFAULT = GetConsoleOutputCP();
    SetConsoleOutputCP(CPAGE_UTF8);

    char cep[50];
    int compri = 0;
    cin.getline(cep, 50);
    compri = strlen(cep);
        if (compri == 8)
        {
            if(verCep){
            cout << "CEP valido";
            }
        }
        else
        {
            cout << "CEP invalido";
        }

    cout << endl;
    return 0;
}