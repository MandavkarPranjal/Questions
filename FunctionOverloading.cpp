// Write a program in C++ to calculate volume of rectangle,cube and cylinder using function overloading
#include<iostream>
using namespace std;
float vol(float,int);
int vol(int);
int vol(int,int,int);
int main()
{
    int l{},w{},h1{},h2{},a{};
    float r{};
    cout << "Enter length, width, height of a cuboid: ";
    cin >> l >> w >> h1;
    cout << "Enter side of cube: " ;
    cin >> a;
    cout << "Enter radius and height of a cylinder: " ;
    cin >> r >> h2;
    cout << "-------------------------------------------------------------------------------------------" << endl;
    cout << "Volume of cuboid is: " << vol(l,w,h1) << endl;
    cout << "Volume of cube is " << vol(a) << endl;
    cout << "Volume of cylinder is " << vol(r,h2) << endl;
    return 0;
}float vol(float r,int h){
    return(3.14*r*r*h);
}
int vol(int a){
    return(a*a*a);
}int vol(int l,int w,int h){
    return(l*w*h);
}