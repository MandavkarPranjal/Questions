//Simple Interest Using Inline Function
#include<iostream>
using namespace std;
inline float simple_interest(int p, int t, float r){
    return (p*t*r)/100;
}
int main(){
    int p, t;
    float r;
    cout << "Enter the principal amount : ";
    cin >> p;
    cout << "Enter the time : ";
    cin >> t;
    cout << "Enter the rate : ";
    cin >> r;
    cout << "Simple interest is : " << simple_interest(p, t, r) << endl;
    return 0;
}