//? Program to calculate power of a given number 

#include<iostream>
using namespace std;

int calculatePower(int base, int power) {
    if(power == 0) return 1;

    return base * calculatePower(base, power-1);
}
int main()
{
    int base = 3, power = 10;
    cout<<calculatePower(base, power);
}