    #include<iostream>

    using namespace std;

    int main(){
        int t,n;
        cin >> t;
        while(t--){
            cin >> n;
            if(n<=1000)
                cout << "100"<<endl;
            else
                cout << n/10<<endl;
        }
    }