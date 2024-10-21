//Program to find the ith fibonacci number

#include<iostream>
using namespace std;

int findithFibonacciNumber(int ith) {
    if(ith == 0) return 0;
    if(ith == 1) return 1;
    int ans = findithFibonacciNumber(ith-1) + findithFibonacciNumber(ith-2);
    return ans;
}
int main() {
    cout<<"Enter the ith number : ";
    int ith;
    cin>>ith;

    cout<<"ith Fibonacci Number is :"<<findithFibonacciNumber(ith);
}