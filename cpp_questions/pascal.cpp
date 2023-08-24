#include <iostream>

using namespace std;

int fact(int n){
    int f =1;
    for(int i=2;i<=n;i++){
        f*=i;
    }
    return f;
}


int main(){
    int n;
    cout << "Enter a number"<<endl;
    cin >> n;
    for(int i = 0;i<n;i++){
        for(int j = 0;j<=i;j++){
            int comb = fact(i)/(fact(i-j)*fact(j));
            cout <<comb<<" ";
        }cout << endl;
    }
    return 0;
}