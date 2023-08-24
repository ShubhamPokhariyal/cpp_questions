#include<iostream>

using namespace std;

int main(){
    int m,n,i,k,t;
    cin >> t;
    while(t--){
        fflush(stdin);
        cin >>m>>n;
        for(i=m;i<=n;i++){
            bool prime=true;
            for(k=2;k<=i/2;k++){
                if(i%k==0){
                    prime =false;
                    break;
                }
            }
            if(prime){
                cout << i<<endl;
            }    
        }cout <<endl;
    
    }

}