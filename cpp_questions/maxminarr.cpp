#include <iostream>

using namespace std;

int main(){
    int n;
    cout << "Enter the length of array"<<endl;
    cin >>n;
    int arr[n];
    for(int i = 0;i<n;i++){
        cin >> arr[i];
    }
    int max = 0;
    int min = arr[0];
    for(int i = 0;i<n;i++){
        if(max < arr[i]){
            max = arr[i];
        }
        if(min > arr[i]){
            min = arr[i];
        }
    }
    cout << max<<" "<<min;
    return 0;
}