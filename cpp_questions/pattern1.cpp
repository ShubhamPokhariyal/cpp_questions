#include <iostream>

using namespace std;
  
int main(){
    int r, c;
    cout << "Enter 2 no.s" << endl;
    cin >> r >> c;
    for(int i = 1; i <= r; i++){
        for(int j = 1; j <= c; j++){
            if((j == c) || (j == 1)){
                cout << "*";
            }else if((i == 1) || (i == r)){
                cout << "*";
            }else{
                cout << " ";
            }
        }cout << endl;
    }return 0;
}