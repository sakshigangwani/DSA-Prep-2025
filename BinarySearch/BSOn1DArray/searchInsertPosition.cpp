#include <iostream>
using namespace std;

int insertPosition(int nums[], int size, int n)
{
    int start = 0;
    int end = size - 1;
    int mid = start + (end - start)/2;
    int ans = -1;
    while(start <= end)
    {
        if(nums[mid] == n){
            return mid;
        }else if(nums[mid] > n){
            ans = mid;
            end = mid - 1;
        }else{
            ans = mid + 1;
            start = mid + 1;
        }
        mid = start + (end - start)/2;
    }
    return ans;
}

int main()
{
    int arr[5] = {3, 5, 8, 15, 19};
    int n = 21;
    int result = insertPosition(arr, 5, n);
    cout << result;
    return 0;
}

//TC: (O(log n))
//SC: (O(1))