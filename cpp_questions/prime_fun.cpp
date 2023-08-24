#include <iostream>
#include <math.h>

using namespace std;

void prime(int a, int b){
    int c = a<b? b:a;
    for(int i = (a+b)-c;i<=c;i++){
        int flag = 0;
        for(int j = 2; j<=sqrt(i);j++){
            if(i%j==0){
                flag = 1;
                break;
            }
        }if(flag == 0){
            cout << i << endl;
        }
    }
    return;
}

int main(){
    int a,b;
    cout << "Enter a number"<< endl;
    cin >> a >> b;
    prime(a,b);
    return 0;
}