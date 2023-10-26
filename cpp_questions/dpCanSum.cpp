#include<iostream>
#include<vector>
#include<unordered_map>

using namespace std;

bool canSum(int target,vector<int> arr,unordered_map<int,bool> &memo){
    if(memo.count(target)) return memo[target];
    if(target == 0) return true;
    if(target < 0) return false;

    for(auto i: arr){
        memo[target] = canSum(target-i,arr,memo);
        if(memo[target] == true){
            return memo[target];

        }
    }memo[target] = false;
    return memo[target];
}

int main(){
    int target,n,temp;
    cout << "Enter the target"<<endl;
    cin >> target;
    cout << "Enter no. of elements"<<endl;
    cin >> n;
    vector<int> arr;
    for(int i=0;i<n;i++){
        cin >> temp;
        arr.push_back(temp);
    }
    unordered_map<int,bool> memo;
    cout << canSum(target,arr,memo);
}