//?Program to check the target element is present in array using linear search
#include<iostream>
using namespace std;
bool linearSearch(int *arr, int size, int t) 
{
    if(size == 0) return false;

    if(arr[0] == t) 
    {
        return true;
    }
    else {
        bool remainingPart = searchElement(arr+1, size-1, t);
        return remainingPart;
    }
}
int main()
{
    int arr[5] = {2, 4, 6, 3, 7};
    int size = 5;
    int target = 0;
    int ans = linearSearch(arr, size, target);
    if(ans) cout<<"Element is present!";
    else cout<<"Element is not present!";
}