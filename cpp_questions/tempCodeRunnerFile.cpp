#include<iostream>
#include<math.h>
using namespace std;


int main(){
    int n;
    cin>>n;
    cout << "you entered "<<n<<endl;
    int ans = 0;
    int i =0;

    while(n!=0){
       cout << "n is "<<n<<endl;
        int bit = n & 1;
        cout << "bit is "<<bit<<endl;
        ans = (bit * pow(10 ,i) + ans);
        cout << "ans is "<<ans<<endl;
        n = n>> 1;
        i++; 
    }
    cout << ans <<endl;
}