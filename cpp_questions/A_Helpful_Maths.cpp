#include<iostream>

using namespace std;

int main(){
    int num;
    string s;
    cin >> s;
    if(s.size()==1){
        cout << s;
        return 0;
    }
    int op[4] = {1,0,0,0};
    for (int i = 0; i < s.size(); i+=2)
    {
        if(s[i]=='1')   
            op[1]+=1;
        else if(s[i]=='2')
            op[2]+=1;
        else if(s[i]=='3')
            op[3]+=1;
    }
    for (int i = 1; i < 4; i++)
    {
        num = op[i];
        for (int j = 0; j < num; j  ++)
        {
            if(op[0]==s.size())  
                cout << i;
            else{
                cout << i<<"+";
                op[0]+=2;
            }
        }
    }
    return 0;
}