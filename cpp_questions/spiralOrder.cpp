#include<iostream>

using namespace std;

int main(){
    int m,n;
    cin >> m>>n;
    int arr[m][n];
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> arr[i][j];
        }
    }
    bool flag = true;
    int i = 0,j = 0;
    int rs = 0;
    int cs = 0;
    int re = m-1;
    int ce = n-1;
    char dir = 'r'; 
    while(flag){
        cout << arr[i][j]<<' ';
        if(dir =='r'){
            if(j == ce){
                rs++;
                i++;
                dir = 'd';

            }
            else{
                j++;
            }
        }
        else if(dir == 'd'){
            if(i == re){
                ce--;
                j--;
                dir = 'l';
            }
            else{
                i++;
            }
        }
        else if(dir == 'l'){
            if(j==cs){
                re--;
                i--;
                dir = 'u';
            }
            else{
                j--;
            }
        }
        else if(dir =='u'){
            if(i == rs){
                cs++;
                j++;
                dir = 'r';
            }
            else{
                i--;
            }
        }
        if(ce <cs || rs > re){
            flag = false;
        }
    }
    return 0;
}