//Program to find at which position the is present if not then required position of the element 

#include<iostream>
using namespace std;
int main()
{
    int arr[] = {1,2,5,7,8,10};
    for(int i=0;i<6;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    int start = 0, end = 5, mid;
    int position, target;
    cout<<"Enter the target element: ";
    cin>>target;

    while(start<=end)
    {
        mid = start + (end - start)/2;
        if(arr[mid] == target)
        {
            position = mid;
        }
        else if(arr[mid] < target)
        {
            start = mid + 1;
        }
        else
        {
            position = mid;
            end = mid - 1;
        }

    }

    cout<<position;

    return 0;
}