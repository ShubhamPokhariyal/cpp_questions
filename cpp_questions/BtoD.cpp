#include<iostream>
#include<math.h>

using namespace std;

int BtoD(int n){
    int c = 0;
    int d = 0;
    while(n>0){
        int lst = n%10;
        d += lst * pow(2,c);
        c++;
        n = n/10;
    }
    return d;
}

int main(){
    int n;
    cout <<"Enter a binary number"<<endl;
    cin>>n;
    cout<<"decimal representation of the given binary number is "<<BtoD(n)<<endl;
    return 0;
}