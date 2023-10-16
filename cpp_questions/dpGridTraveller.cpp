#include<iostream>
#include<unordered_map>
#include<string>

using namespace std;

long long dpGrid(int n,int m, unordered_map<string,long long> &memo){
    string key = to_string(n) + ',' + to_string(m);
    if(memo.count(key)) return memo[key];
    if(n == 0 || m == 0) return 0;
    if(n ==1 && m == 1) return 1;
    memo[key] = dpGrid(n-1,m,memo) + dpGrid(n,m-1,memo);
    return memo[key];
}

int main(){
    int n,m;
    cout << "Enter dimensions"<<endl;
    cin >> n >> m;
    unordered_map<string,long long> memo;
    cout << dpGrid(n,m,memo);
}