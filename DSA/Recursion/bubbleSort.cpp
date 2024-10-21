//Bubble sort algorithm using recursion

#include<iostream>
using namespace std;
void bubbleSort(int *arr, int n) {
    if(n == 0 || n == 1) return;

    for(int i=0;i<n;i++) {
        if(arr[i]>arr[i+1]) {
            swap(arr[i], arr[i+1]);
        }
    }
    bubbleSort(arr, n-1);
}
int main()
{
    int arr[5] = {4, 2, 1, 5, 7};
    cout<<"Array before Sort: ";
    for(int i=0;i<5;i++) cout<<arr[i]<<" ";
    bubbleSort(arr, 5);
    cout<<"Array after Sort: ";
    for(int i=0;i<5;i++) cout<<arr[i]<<" ";
}