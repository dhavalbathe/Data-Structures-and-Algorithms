//? Program to find the sum of array elements

#include<bits/stdc++.h>
using namespace std;
int findSumOfArrayElements(int *arr, int size)
{
    if(size == 0) return 0;
    if(size == 1) return arr[0];

    int sum = arr[0] + findSumOfArrayElements(arr+1, size-1);
    return sum;
}
int main()
{
    int arr[5] = {4, 5,2, 5,6 };
    int size = 5;
    cout<<"Sum of array elements is: "<<findSumOfArrayElements(arr, size);
}