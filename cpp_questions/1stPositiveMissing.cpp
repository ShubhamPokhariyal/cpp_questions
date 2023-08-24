#include <iostream>
#include <climits>

using namespace std;

int main(){
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int idx[100000];
    for (int i = 0; i < 100000; i++)
    {
        idx[i] = -1;
    }
    int i = 0;
    while(i<n){
        int curr = arr[i];
        idx[curr] = 1;
        i++;
    }
    for (int i = 1; i < 100000; i++){
        if(idx[i]==-1){
            cout << i<<endl;
            break;
        }
    }
    return 0;
}