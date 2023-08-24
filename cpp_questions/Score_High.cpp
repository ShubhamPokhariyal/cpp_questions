#include<iostream>

using namespace std;

int main(){
    int t,n,max=0,temp;
    cin >> t;
    while(t--){
        max = 0;
        cin >> n;
        for(int i=0;i<4;i++){
            cin >> temp;
            if(temp>max)
                max=temp;
        }
        cout << max<<endl;
    }
}