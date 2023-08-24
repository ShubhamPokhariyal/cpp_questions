#include <iostream>

using namespace std;
int max(int n,int m){
    if(m>=n){
        return m;
    }
    else{
        return n;
    }
}
int addBin(int mx,int mn,int carry){
    int ans = 0;
    if(mx == 0){
        return carry;
    } 
    else{
        if((mx%2==0) && (mn%2==0)){
            if(carry == 0){
                ans = 0+10*(addBin(mx/10,mn/10,carry));
            }
            else{
                ans = 1 + 10*(addBin(mx/10,mn/10,0));
            }
        }
        else if((mx%2==1) && (mn%2==1)){
            if(carry == 0){
                ans = 0 + 10*(addBin(mx/10,mn/10,1));
            }
            else{
                ans = 1 + 10*(addBin(mx/10,mn/10,1));
            }
        }
        else{
            if(carry == 0){
                ans = 1 + 10*(addBin(mx/10,mn/10,carry));
            }
            else{
                ans = 0 + 10*(addBin(mx/10,mn/10,1));
            }
        }
        return ans;
    }
    
}

int main(){
    int a,b;
    cout << "Enter 2 binary numbers"<<endl;
    cin >> a>>b;
    cout <<"The sum is "<<addBin(max(a,b),(a+b-max(a,b)),0);
}