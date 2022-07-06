//Overload '==' operators 
#include<iostream>
using namespace std;
class Test{
    public:
        int a{5};
        void operator==(Test &obj){
            cout << "a = " << obj.a << endl;
        }
};
int main(){
    Test obj;
    obj == obj;
    return 0;
}