#include <iostream>
using namespace std;

int lowerBound(int arr[], int size, int n)
{
    int start = 0;
    int end = size - 1;
    int mid = start + (end - start)/2;
    int ans = -1;
    
    while(start <= end)
    {
        if(arr[mid] >= n){
            ans = mid;
            end = mid - 1;
        }else{
            start = mid + 1;
        }
        mid = start + (end - start)/2;
    }
    return ans;
}

int main()
{
    int arr[6] = {3, 5, 8, 15, 19, 19};
    int n = 19;
    int result = lowerBound(arr, 6, n);
    cout << result;
    return 0;
}

//TC: (O(log n))
//SC: (O(1))