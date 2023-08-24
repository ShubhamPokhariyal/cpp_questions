#include<iostream>

using namespace std;

int main(){
    int t,s,n,k;
    bool cond;
    cin >> t;
    while(t--){
        cin >> s>>n>>k;
        if(k>s or n>s)
            cout << "NO"<<endl;  
        else
            cout << "YES"<<endl;
    }   
    return 0;
}