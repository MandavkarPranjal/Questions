//FriendFunction
#include<iostream>
using namespace std;
class A{
    public:
        int a;
        friend int addfive(A b){
            return (b.a+5);
        }
        A(){
            a = 2;
        }
};
int main(){
    A obj;
    cout << addfive(obj) << endl;
}