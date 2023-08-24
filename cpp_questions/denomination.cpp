#include<iostream>

using namespace std;



int main(){
    int n;
    cin >> n;
    switch(n>=500){
    case 1:
        int n500 = n/500;
        n -= n500*500;
        cout << "500 notes: "<<n500<<", ";
    }
    switch (n>=100){
    case 1:
        int n100 = n/100;
        n -= n100*100;
        cout << "100 notes: "<<n100<<", ";
    }
    switch (n>=50){
    case 1:
        int n50 = n/50;
        n -= n50*50;
        cout << "50 notes: "<<n50<<", ";
    }switch (n>=10){
    case 1:
        int n10 = n/10;
        n -= n10*10;
        cout << "10 notes: "<<n10<<", ";
    }
    switch (n>=5){
    case 1:
        int n5 = n/5;
        n -= n5*5;
        cout << "5 coins/notes: "<<n5<<", ";
    }
    switch (n>=2){
    case 1:
        int n2 = n/2;
        n -= n2*2;
        cout << "2 coins: "<<n2<<", ";
    }
    switch (n>=1){
    case 1:
        int n1 = n/1;
        n -= n1*1;
        cout << "1 coins: "<<n1<<", ";
    }

}