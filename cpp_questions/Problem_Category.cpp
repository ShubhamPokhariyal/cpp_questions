#include<iostream>

using namespace std;

int main(){
    int t;
    cin >> t;
    while (t--){
        int n;
        cin >> n;
        if(n<100)
            cout << "Easy"<<endl;
        else if(n<200)
            cout << "Medium"<<endl;
        else
            cout <<"Hard"<<endl;
    }
}