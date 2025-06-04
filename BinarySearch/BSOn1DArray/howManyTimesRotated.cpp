#include <iostream>
using namespace std;

int getPivot(int arr[], int size)
{
    int start = 0;
    int end = size - 1;
    int mid = start + (end - start)/2;
    int ans = 0;
    
    while(start <= end)
    {
        if(arr[mid] >= arr[0]){
            start = mid + 1;
        }else{
            ans = mid;
            end = mid - 1;
        }
        mid = start + (end - start)/2;
    }
    return ans;
}

int main()
{
    int arr[5] = {1,2,3,4,5};
    int result = getPivot(arr, 5);
    cout << result;
    return 0;
}

//TC: (O(log n))
//SC: (O(1))