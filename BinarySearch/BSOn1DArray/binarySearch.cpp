#include <iostream>
using namespace std;

int binarySearch(int arr[], int size, int n)
{
    int start = 0;
    int end = size - 1;
    int mid = start + (end - start)/2;
    
    while(start <= end)
    {
        if(arr[mid] == n){
            return mid;
        }else if(arr[mid] < n){
            start = mid + 1;
        }else{
            end = mid - 1;
        }
        mid = start + (end - start)/2;
    }
    return -1;
}

int main()
{
    int arr[5] = {3, 5, 8, 15, 19};
    int n = 19;
    int result = binarySearch(arr, 5, n);
    cout << result;
    return 0;
}

//TC: (O(log n))
//SC: (O(1))