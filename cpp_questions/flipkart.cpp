#include<iostream>
#include<string>

using namespace std;

int idx[10];

string smallestnum(string n){
    for (int i = 0; i < 10; i++)
    {
        idx[i] = 0; 
    }
    string m = "";
    for (int i = 0; i < n.length(); i++)
    {
        string mn = "";
        mn += n[i];
        idx[stoi(mn)] += 1; 
    }    
    int count = 0;
    for (int i = 1; i < 10; i++)
    {
        
        if(idx[i] == 0){
            continue;
        }
        for(int j = 0;j<idx[i];j++){
            count ++;
            m += to_string(i);
            if(count ==1){
                    for(int k = 0;k<idx[0];k++){
                m+= '0';
                }
            }
        }
    }
    return m;
}

int main(){
    string n;
    cin >> n;
    string m = smallestnum(n);
    cout << m<<endl;
    return 0;
}
