    #include<iostream>

    using namespace std;

    int main(){
        int t;
        cin >> t;
        while(t--){
            int a,b,res;
            cin >>a>>b;
            res = a>b?a-b:0;
            cout << res<<endl;
        }
    }