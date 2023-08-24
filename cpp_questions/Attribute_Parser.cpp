#include<iostream>
#include<vector>
#include<string>

using namespace std;

bool checkTag(string n,int j){
    if(n[j]=='t'){
        if(n[j+1]=='a'){
            if(n[j+2]=='g'){
                return true;
            }
        }
    }
    return false;
}

int main(){
    int n,q,tagn=0;
    string input;
    cin >>n>>q;
    vector <vector <string>> a;
    for (int i = 0; i < n; i++)
    {
        int attn = 1;
        cin.ignore();
        getline(cin,input);
        for (int j = 1; j < input.size(); j++)
        {
            if(input[j]=='/'){
                break;
            }
            string tag = "";
            while(input[j]!=' '){
                tag.push_back(input[j]);
                j++;
            }
            a[tagn][0] = tag;
            while(input[j]!=''){
                
            }
        }            
    }
    
}
