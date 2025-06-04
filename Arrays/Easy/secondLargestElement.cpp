#include <iostream>
#include <climits>
using namespace std;

int largestElement(int arr[], int size)
{
    int max = INT_MIN;
    for(int i=0; i<size; i++)
    {
        if(arr[i] > max)
        {
            max = arr[i];
        }
    }
    
    int secMax = INT_MIN;
    for(int i=0; i<size; i++)
    {
        if(arr[i] == max){
            continue;
        }else if(arr[i] > secMax){
            secMax = arr[i];
        }
    }
    return secMax;
}

int main()
{
    int arr[6] = {10, 2, 23, 43, 22, 8};
    int result = largestElement(arr, 6);
    cout << result;
    return 0;
}