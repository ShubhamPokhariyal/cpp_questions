#include<iostream>
#include<math.h>
using namespace std;

bool verifyPrime(int n) {
  bool ans=true;
  for(int i=2;i<=sqrt(n);i++){
    if(n%i==0){
      ans=false;
    }
  }
  return ans;
}
int main(){
    cout << verifyPrime(22);
    return 0;
}
