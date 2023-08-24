#include<iostream>
#include<string>

using namespace std;

int main(){
    string n;
    getline(cin,n);
    string m;
    m += n[0];
    for (int i = 1; i < n.length(); i++)
    {
        if(n[i]==n[i-1])
            continue;
        else
        {
            m += n[i]; 
        }
    }
    cout << m<<endl;
    return 0;
}