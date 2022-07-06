//Write a program using constructor to display sum of digit of number
#include<iostream>
using namespace std;
class Add{
    int num{},sum{0},r{};
    public:
        Add() {
            cout << "Enter the number: ";
            cin >> num;
            while(num>0){
                r=num%10;
                sum=sum+r;
                num=num/10;
            }
            cout<<"The sum is: "<<sum<<endl;
        }
};
int main(){
    Add p;
    return 0;
}