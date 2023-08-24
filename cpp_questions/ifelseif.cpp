#include <iostream>

int main(){
    int a,b,c;
    std::cout << "it works";
    std::cin >> a >> b >> c;
    for(int i = 0;i <= 1; i++){
       
        if(a > b){
            if(a > c){   //dfdfdf
                std::cout << "greatest is " << a;
            }else{
                std::cout << "greatest is " << c;
            }
        }else{
            if(b > c){
                std::cout << "greatest is " << b;
            }else{
                std::cout << "greatest is " << c;
            }
        }
    }
}