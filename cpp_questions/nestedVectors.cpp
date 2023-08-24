#include<iostream>
#include<vector>

using namespace std;

int main(){
    int n,q;
    cin >> n>>q;
    vector<vector<int>> a(n);
    for (int i = 0; i < n; i++){
        int k;
        cin >> k;
        for (int j = 0; j < k; j++){
            int data;
            cin >> data;
            a[i].push_back(data);
        }
    }
    for (int i = 0; i < q; i++)
    { 
        int l,m;
        cin >> l>> m;
        int j = a[l][m];
        cout << j<<endl;
    }
    
    return 0;
}