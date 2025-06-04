#include <iostream>
using namespace std;

int getPivot(int arr[], int size)
{
    int start = 0;
    int end = size - 1;
    int mid = start + (end - start)/2;
    int ans = arr[0];
    
    while(start <= end)
    {
        if(arr[mid] >= arr[0]){
            ans = mid;
            start = mid + 1;
        }else{
            end = mid - 1;
        }
        mid = start + (end - start)/2;
    }
    return ans;
}

int main()
{
    int arr[7] = {4,5,6,7,0,1,2};
    int result = getPivot(arr, 7);
    cout << result;
    return 0;
}

//TC: (O(log n))
//SC: (O(1))