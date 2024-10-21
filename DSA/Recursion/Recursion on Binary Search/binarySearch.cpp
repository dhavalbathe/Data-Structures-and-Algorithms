#include<iostream>
using namespace std;
bool binarySearch(int *arr, int left, int right, int key) {
    if(left > right) return false;
    
    int mid = left + (right - left)/2;

    if(arr[mid] == key) return true;
    else {
        if(arr[mid] < key) return binarySearch(arr, mid+1, right, key);
        else return binarySearch(arr, left, mid-1, key);
    }
}
int main()
{
    int arr[10] = {1, 4, 5, 6, 7, 9, 11, 12, 18, 22};
    int key = 1;
    int size = 10;
    int ans = binarySearch(arr, 0, size, key);
    if(ans) cout<<"Present";
    else cout<<"Absent";
}