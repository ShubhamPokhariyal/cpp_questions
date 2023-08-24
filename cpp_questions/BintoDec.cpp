#include<iostream>
#include<math.h>

using namespace std;

int main(){
    int n,i=0,digit;
    int ans=0;
    cin >> n;
    while(n!=0){
        digit = n%10;
        if(digit==1){
            ans += pow(2,i);
        }
        i++;
        n=n/10;
    }
    cout << ans;
}