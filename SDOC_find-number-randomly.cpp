/*
Security Lab Experiment 1.2

Develop a login system, which will take two inputs username and password (4 digit
pin). As an Adversary develop a program, which will generate passwords serially, and
find the right password for the developed login system. 
*/

#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
    std::cout << "Enter a Username: ";
    string username;
    cin>>username;
    std::cout << "Enter a PIN Number: {Please enter 4 digit else we will only consider last 4 digit}";
    int pin;
    cin>>pin;
    
    int count=4;
    int arr[4];
    while(count--){ 
        arr[count]=pin%10;
        pin=pin/10;
    }
    int pass = (arr[0]*1000) + (arr[1]*100) + (arr[2]*10) + arr[3];
    cout<<"pass "<<pass<<endl;

    int number;
    do{
       number=rand()%10000;
       //cout<<"number"<<number<<endl;
       if(number==pass){
        cout<<"Found pin "<<pass;
        return 0;
       }
    }while(number!=pin);
    cout<<"Not Found Pin";
    
    return 0;
}
