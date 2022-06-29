 #include <iostream>
  
 using namespace std;
  
 int main() {
     int N, S, X, cont = 0, soma=0;
     cin>> N;
     int v[N];
     cin>> S;
     for(int i = 0; i < N; i++){
         cin>>X;
         v[i] = X;
     }
     for(int i = 0; i < N; i++){
         soma = soma + v[i];
        if(soma == S || v[i] == S)
        {
            cont++;
            soma = 0;
        }
     } 
     cout<<cont;
   return 0;
 }