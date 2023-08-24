#include<iostream>
#include<vector>

using namespace std;

void makeOne(int** arr,int n){
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << arr[i][j]<<endl;
        }
        cout << endl;
    }
    
}

int main(){
    int n;
    cin >>n;
    int id[n][n];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if(i==j){
                id[i][j] = 1;
            }
            else{
                id[i][j] = 0;
            }
        }
    }
    int arr[n][n];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> arr[i][j];
        }
    }
    for (int i = 0; i < n; i++)
    {
        //makeOne(**arr,i);
    }
    cout << **arr<<endl;
    return 0;
}