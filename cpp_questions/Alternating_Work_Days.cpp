#include<iostream>

using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        long long a,b,p,q,tb;
        tb = 0;
        cin >> a>>b>>p>>q;
        long long as=0,bs=0,ts;
        while(as<=p&&bs<=q){
            as+=a;
            bs+=b;
            if((as==p&&(bs==q||(bs-b)==q)||(bs==q&&(as==p||(as-a)==p)))){
                cout << "yes"<<endl;
                tb =1;
                continue;
            }
        }
        if(tb==0){
            cout <<"no"<<endl;
        }
    }
}