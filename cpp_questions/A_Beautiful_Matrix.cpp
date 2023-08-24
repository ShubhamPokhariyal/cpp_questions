#include<iostream>

using namespace std;

int main(){
    int n,xd,yd;
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            cin >> n;
            if(n==1){
                xd = max(2,i)-min(2,i);
                yd = max(2,j)-min(2,j);
                cout << xd + yd<<endl;
                break;
            }
        }
        
    }
    

}