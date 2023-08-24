#include <iostream>
#include <climits>

using namespace std;

int main(){
    int n;
    cin >> n;
    int arr[n];
    int idx[100000];
    for(int i = 0; i<100000;i++){
        idx[i] = -1;
    }    
    int mdx = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        int curr = arr[i];
        if(idx[curr]!=-1){
            mdx = min(mdx,idx[curr]);
        }
        else{
            idx[curr] = i;
        }
    }
    if(mdx == INT_MAX){
        cout << "Not found"<<endl;
    }
    else{
        cout << mdx +1<<endl;
    }
    return 0;
}