#include<iostream>

using namespace std;

int main(){
    int t;
    cin >>t;
    while(t--){
        int n,opr=0;
        cin >> n;
        char num[n];
        for (int i = 0; i < n; i++)
        {
            cin>>num[i];
        }
        for(int i=0;i<n/2;i++){
            cout << num[i]<<" "<<num[n-i-1]<<endl;
            if(num[i]!=num[n-i-1])
                opr++;
        }
        cout << opr<<endl;
    }
}