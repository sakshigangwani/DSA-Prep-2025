#include <iostream>
#include <climits>
using namespace std;

bool checkSorted(int nums[], int n)
{
    int count = 0;
    for(int i=0; i<n; i++)
    {
        if(nums[i] > nums[(i+1) % n]){
            count++;
        }
        if(count > 1){
            return false;
        }
    }
    return true;
}

int main()
{
    int nums[5] = {3, 4, 5, 1, 2};
    int result = checkSorted(nums, 5);
    cout << result;
    return 0;
}