#include<iostream>
using namespace std;
int main()
{              //0, 1, 2, 3, 4, 5, 6, 7, 8,  9
    int arr[] = {1, 2,3,4,5,6,7,9,10, 12};
    int n = 10;
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }cout<<endl;
    int start = 0, end = n-1, mid, index = 1;
    while(start<=end)
    {
        mid = start + (end - start)/2;
        if(arr[mid] < arr[0])
        {
            end = mid - 1;
        }
        else 
        {
            start = mid + 1;
        }
    }

    cout<<"MINIMUL element in array is: "<<arr[start]<<endl;
    cout<<start<<" times arrays has been rotated";
    return 0;

}