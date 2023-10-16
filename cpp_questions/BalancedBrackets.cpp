#include<iostream>
#include<stack>

using namespace std;

bool checkBrackets(string s){
    stack<char> stack;
    for(int i=0; i<s.length();i++){
        if(s[i] == '(' || s[i] == '{' || s[i] == '['){
            stack.push(s[i]);
        }else{
            if(stack.empty() || s[i] != stack.top()){
                return false;
            }else{
                stack.pop();
            }
        }
    }return stack.empty();
}

int main(){
    string s;
    cout << "Enter a string of paranthesis"<<endl;    
    cin >> s;
    cout << s<<endl;
    cout << checkBrackets(s);
}