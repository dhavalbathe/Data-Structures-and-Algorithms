//?Program to check if the array is sorted or not using recursion

#include<iostream>
using namespace std;
bool checkSortedArray(int arr[], int size) {
    if(size == 0 || size == 1) return true;

    if(arr[0] > arr[1]) return false;
    else {
        bool remainingPart = checkSortedArray(arr+1, size-1);
        return remainingPart;
    }
}
int main()
{
    int arr[8] = {1, 2, 4, 5, 6, 7, 8, 9};
    int size = 8;
    int ans = checkSortedArray(arr, size);
    if(ans) cout<<"Array is sorted.";
    else cout<<"Array is not sorted.";
}