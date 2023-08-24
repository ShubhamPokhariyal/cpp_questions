#include<iostream>
#include<bits/stdc++.h>
#include<string>
#include<bitset>

using namespace std;

unsigned int revBit(unsigned int n){
    int curr_element;
    unsigned int reverse = 0;
    int len = sizeof(n)*8;
    for (int i = 0; i <len; i++)
    {
        curr_element = (n&(1<<i));
        if(curr_element){
            reverse |= (1<<((len-1)-i));
        }
    }
    return reverse;
}

int main(){
    unsigned int n;
    cin >>n;
    n = revBit(n);
    cout << n<<endl;
    return 0;
}