#include<iostream>

using namespace std;

int main(){
    int a,b,c;
    cin >> a>>b>>c;
    int*** arr = new int**[a];
    for (int i = 0; i < a; i++)
    {
        arr[i] = new int*[b];
    }
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < c; j++)
        {
            arr[i][j] = new int[c];
        }
    }
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < b; j++)
        {
            for (int k = 0; k < c; k++)
            {
                cin >> arr[i][j][k];
            }
        }
    }
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < b; j++)
        {
            for (int k = 0; k < c; k++)
            {
                cout << arr[i][j][k]<<" ";
            }
            cout << "\t";
        }
        cout << endl;
    }
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < b; j++)
        {
            delete[] arr[i][j];
        }
        delete[] arr[i];
    }
    delete[] arr;
    return 0;
}