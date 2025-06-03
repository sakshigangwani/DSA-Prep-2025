#include <iostream>
using namespace std;

int peakElement(int nums[], int size)
{
    int start = 0;
    int end = size - 1;
    int mid = start + (end - start)/2;

    while(start < end)
    {
        if(nums[mid] < nums[mid + 1])
        {
            start = mid + 1;
        }else{
            end = mid;
        }
        mid = start + (end - start)/2;
    }
    return start;
}

int main()
{
    int arr[4] = {1, 2, 3, 1};
    int result = peakElement(arr, 4);
    cout << result;
    return 0;
}

//TC: (O(log n))
//SC: (O(1))