#include<iostream>
#include<unordered_map>

using namespace std;

long long dpFibo(int n, unordered_map<int,long long> &memo){
    if(memo.count(n)) return memo[n];
    if(n<=2) return 1;
    memo[n] = dpFibo(n-1,memo) + dpFibo(n-2,memo);
    return memo[n];

}


int main(){
    int n;
    cout << "Enter the term"<<endl;
    cin >> n;
    unordered_map<int,long long> memo;
    cout << dpFibo(n,memo);
}