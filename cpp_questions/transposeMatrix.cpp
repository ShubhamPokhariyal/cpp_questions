#include <iostream>

using namespace std;

int main(){
    int m,n;
    cin >> m>>n;
    int arr[m][n];
    int tarr[n][m];
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin>>arr[i][j];
        }
    }
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            tarr[j][i] = arr[i][j];
        }
    }
    cout<<"transposed matrix is: "<<endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout<<tarr[i][j]<<" ";
        }
        cout <<endl;
    }
    return 0;
}