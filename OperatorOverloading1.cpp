//write a program to overload the '-' operator
#include<iostream>
using namespace std;
class file{
    int num;
    public:
        void input(){
            cout<<"Enter the number: ";
            cin>>num;
        }
        file operator-(file f){
            file f1;
            f1.num=num-f.num;
            return f1;
        }
        void print(){
            cout<<num<<endl;
        }
};
int main()
{
    file f1,f2,res;
    f1.input();
    f2.input();
    res=f1-f2;
    cout<<"The difference is: ";
    res.print();
    return 0;
}