/*
write a program in C++ to accept age from user. if it less than 18 than throw an exception 
and display "Not applicable for driving licence"
*/
#include<iostream>
using namespace std;
int main(){
    int age{};
    cout << "Enter your age: ";
    cin >> age;
    try
    {
        if(age>=18)
            cout << endl;
        else
            throw (age);
    }
    catch(int age){
        cout << "Not applicable for driving license" << endl;
    }
    return 0;
}