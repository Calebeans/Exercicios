#include <iostream>
 
using namespace std;
 
int main() {
    int N,s=0;
    cin>>N;
    char m[N][N];

    if(N>=3 && N <= 10){
    for(int i =0; i < N; i++){
        for(int j = 0; j < N; j ++){
            cin>>m[i][j];
            if(i == j){
                s = s + m[i][j]; 
            }
        }
    }

    for(int i =0; i < N; i++){
        for(int j = 0; j < N; j ++){
            
        }
    }
    }else{

    }
    cout<<s;

  return 0;
}