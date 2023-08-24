#include <iostream>
#include <math.h>

using namespace std;

void pyth(int a,int b,int c){
    int max,f,s;
    if(a>b){
        if(a>c){
            max = a;
            f = b;
            s = c;
        }
        else{
            max = c;
            f = a;
            s = b;
        }
    }
    else{
        if(b>c){
            max = b;
            f = a;
            s = c;
        }
        else{
            max = c;
            f = a;
            s = b;
        }
    }    
    if(pow(max,2) == (pow(f,2)+pow(s,2))){
        cout << "given numbers are pythagorean triples";
    }
    else{
        cout << "given numbers are not pythagorean triples";
    }
    return;
}

int main(){
    int a,b,c;
    cout <<"Enter three numbers"<<endl;
    cin>>a>>b>>c;
    pyth(a,b,c);
    return 0;
}