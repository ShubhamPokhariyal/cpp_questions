#include <iostream>
#include <string>

using namespace std;

string lower(string n){
    for (int i = 0; i < n.length(); i++)
    {
        if(n[i]==' ')
            continue;
        if((int)n[i]<91)
            n[i] = char(n[i]+32);
    }
    return n;    
}

string upper(string n){
    for (int i = 0; i < n.length(); i++)
    {
        if((int)n[i]>96)
            n[i] = char(n[i]-32);
    }
    return n;
}

int main(){
    string n,m;
    getline(cin,n);
    int lou;
    cin >> lou;
    if(lou == 0){
        m = lower(n);
    }
    else{
        m = upper(n);
    }
    cout << m<<endl;
    return 0;
}