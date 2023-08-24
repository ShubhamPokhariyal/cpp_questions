#include<iostream>
#include<math.h>
using namespace std;

int main(){
    int t;
    cin >>t;
    while(t--){
        int n,x;
        float num=0;
        cin >>n>>x;
        if(n<=6){
            cout << x<<endl;
        }else{
            num=(float)n/6;
            num = ceil(num);
            num*=x;
            cout << (int)num<<endl;
        
        }
    }
}