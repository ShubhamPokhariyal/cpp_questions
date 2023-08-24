#include<iostream>

using namespace std;

int main(){
    int t,sum,temp,q=0;
    cin >> t;
    while(t--){
        sum=0;
        for(int i=0;i<3;i++){
            cin >> temp;
            sum += temp;
        }
        if(sum>=2)
            q++;
    }
    cout << q;

}