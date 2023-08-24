#include<iostream>
#include<string>

using namespace std;

string rev(string m){
    string n;
    for (int i = m.length()-1; i >= 0; i--)
    {
        n += m[i];
    }
    return n;
    
}

string DtoB(int n){
    string m;
    while(n>1){
        m += to_string(n%2); 
        n = n/2;
    }
    m += to_string(n);
    m = rev(m);
    return m;
}

int main(){
    int n;
    cin >> n;
    cout << DtoB(n)<<endl;
    return 0;
}