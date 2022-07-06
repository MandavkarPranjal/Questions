/*
Implement the concept of constructor for following pattern
1
2 2
3 3 3
4 4 4 4
*/
#include<iostream>
using namespace std;
class pattern{
    public:
        pattern(){
        for(int i=1;i<5;i++){
            for(int j=1;j<=i;j++)
                cout << i << " ";
            cout << endl;
            }
        }
};
int main(){
    pattern p;
    return 0;
}