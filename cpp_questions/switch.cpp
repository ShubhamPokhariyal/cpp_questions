#include <iostream>

int main(){
    char a;
    std::cout << "Enter a letter" << std::endl;
    std::cin >> a;
    switch(a){
    case 'a':
        std::cout << "it is an vowel" << std::endl;
        break;
    case 'e':
        std::cout << "it is an vowel" << std::endl;
        break;
    case 'i':
        std::cout << "it is an vowel" << std::endl;
        break;
    case 'o':
        std::cout << "it is an vowel" << std::endl;
        break;
    case 'u':
        std::cout << "it is an vowel" << std::endl;
        break;
    default:
    std::cout << "it is a consonant" << std::endl;
    }
    return 0;

        

}