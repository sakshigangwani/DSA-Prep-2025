#include <iostream>
using namespace std;

int firstOcc(int nums[], int target, int n)
{
    int start = 0;
    int end = n - 1;
    int mid = start + (end - start) / 2;
    int first = -1;

    while (start <= end)
    {
        if (nums[mid] == target)
        {
            first = mid;
            end = mid - 1;
        }
        else if (nums[mid] < target)
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
        mid = start + (end - start) / 2;
    }
    return first;
}
int secOcc(int nums[], int target, int n)
{
    int start = 0;
    int end = n - 1;
    int mid = start + (end - start) / 2;
    int second = -1;

    while (start <= end)
    {
        if (nums[mid] == target)
        {
            second = mid;
            start = mid + 1;
        }
        else if (nums[mid] < target)
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
        mid = start + (end - start) / 2;
    }
    return second;
}

int main()
{
    int arr[5] = {3, 5, 8, 8, 19};
    int n = 8;
    int first = firstOcc(arr, n, 5);
    int second = secOcc(arr, n, 5);
    cout << first << " " << second;
    return 0;
}

// TC: (O(log n))
// SC: (O(1))