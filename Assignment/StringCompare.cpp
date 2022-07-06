// write a program in C++ to campare string using '>' and '<' operator
#include<iostream>
#include<string>
using namespace std;
int main(){
    string str1,str2;
    cout<<"Enter the string: ";
    cin >> str1 >> str2;
    if(str1.length()>str2.length()){
        cout<<str1<<" is greater than "<<str2;
    }
    else if(str1.length()<str2.length()){
        cout<<str2<<" is greater than "<<str1;
    }
    else{
        cout<<str1<<" and "<<str2<<" are equal";
    }
    return 0;
}