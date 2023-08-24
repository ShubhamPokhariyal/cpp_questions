#include <iostream>

using namespace std;

int main(){
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int i = 0;
    while(i<n){
        int con = i+1;
        int row = n-i;
        while(row>0){
            for(int j = i;j<con;j++){
                cout << arr[j]<<" ";
            }
            con++;
            cout <<endl;
            row--;
        }
        i++;      
    }
    return 0;
}