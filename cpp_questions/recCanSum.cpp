#include<iostream>
#include<vector>

using namespace std;

bool canSum(int target, vector<int> arr){
    if(target==0) return true;
    if(target<0) return false;

    for(auto i: arr){
        if(canSum(target-i,arr))
            return true;
    }
    return false;

}

int main(){
    int target,n,temp;
    cout << "Enter the target number"<<endl;
    cin >> target;
    cout << "Enter array length"<<endl;;
    cin >> n;
    vector <int> arr;
    for(int i=0;i<n;i++){
        cin >> temp;
        arr.push_back(temp);
    }
    cout << canSum(target,arr);
}