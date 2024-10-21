//? Program to print the each digit of number is string nummber

#include<bits/stdc++.h>
using namespace std;
void sayDigit(int n, string numbers[]) 
{
    //Base Case
    if(n == 0) return;

    int digit = n%10;
    n = n/10;
    sayDigit(n, numbers);
    cout<<numbers[digit]<<" ";
}
int main()
{
string numbers[10] = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};

    int n;
    cout<<"Enter the number: "; cin>>n;
    sayDigit(n, numbers);
}