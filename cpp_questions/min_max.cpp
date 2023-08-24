#include <iostream>

using namespace std;

int max(int a,int b,int c){
    if(a>b){
        if(a>c){
            return a;
        }
        else{
            return c;
        }
    }
    else{
        if(b>c){
            return b;
        }
        else{
            return c;
        }
    }
}

int min(int a,int b,int c){
    if(a<b){
        if(a<c){
            return a;
        }
        else{
            return c;
        }
    }
    else{
        if(b<c){
            return b;
        }
        else{
            return c;
        }
    }
}

int main(){
    int a,b,c;
    cout << "Enter three numbers"<<endl;
    cin >>a>>b>>c;
    int mn = min(a,b,c);
    int mx = max(a,b,c);
    cout << "max is " << mx<<"\nmin is "<<mn<<endl;
}
