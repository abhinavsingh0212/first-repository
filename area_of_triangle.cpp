#include<iostream>
using namespace std ;
int main()
{
    int base,height,area;
    cout<<"enter the base of the triangle:";
    cin>>base;
    cout<<"enter the height of the triangle:";
    cin>>height;
    area = (base * height) / 2;
    cout<< area;
    return 0;
}