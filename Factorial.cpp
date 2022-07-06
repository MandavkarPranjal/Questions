//write a program using class to accept number from user and display its factorial
#include <iostream>
using namespace std;
class Factorial{
private:
    int num;
    int fact = 1;
public:
    void calculateFactorial();
    void show();
};
void Factorial::calculateFactorial()
{
    cout << "Enter a number : ";
    cin >> num;
    if (num == 0 || num == 1){
        fact = 1;
    }
    else{
        while (num > 1){
            fact = fact * num;
            num--;
        }
    }
}
void Factorial::show(){
    cout << "Factorial : " << fact << endl;
}
int main(){
    Factorial f;
    f.calculateFactorial();
    f.show();
    return 0;
}