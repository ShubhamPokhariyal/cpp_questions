#include<iostream>

using namespace std;

int main(){
    int t,n;
    cin >> t;
    while(t--){
        cin >> n;
        int coeff,degree;
        for(int i=0;i<n;i++){
            cin >> coeff;
            if(coeff!=0){
                degree = i;
            }
        }
        cout<<degree<<endl;
    }
}