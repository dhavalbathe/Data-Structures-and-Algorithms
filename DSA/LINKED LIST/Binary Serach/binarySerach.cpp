//? Time Complexicity = log(n)

#include<iostream>
using namespace std;

int binarySearch(int arr[], int n, int key)
{
    int start = 0, end = n-1, mid;

    while(start <= end)
    {
        // mid = (start+end)/2;

        mid = start + (end - start)/2;

        if(arr[mid] == key)
        return mid;

        else if(arr[mid] < key)
        {
            start = mid + 1;
        }

        else
        end = mid - 1;
    }

    return -1;
}
int main()
{
    int arr[10000];
    int n;
    cout<<"Enter the size of array: ";
    cin>>n;
    cout<<"Enter the element of array: ";
    for(int i=0;i<n;i++)
    cin>>arr[i];
    int key;
    cout<<"Enter the Key: ";
    cin>>key;

    cout<<binarySearch(arr, n, key);
}