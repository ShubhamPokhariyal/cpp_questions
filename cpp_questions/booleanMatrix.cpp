#include<iostream>
#include <vector>

using namespace std;

int modifMatrix(vector<vector<int>> &arr,int r,int c){

}

int main(){
    int r,c;
    cin >> r>>c;
    vector<vector <int>> arr;
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++){
            cin >> arr[i][j];
        }
    }
    modifMatrix(**(arr),r,c);
    return 0;
}