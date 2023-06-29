#include <iostream>
#include <climits>  //when we set INT_MIN  and INT_MAX value set then we set  the climit
using namespace std;
int maxvalue(int arr[], int n)
{
    int max = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    return max;
}

int minvalue(int arr[], int n)
{
    int min = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        if(arr[i] < min)
        {
            min = arr[i];
        }
    }
    return min;
}

int main()
{
    int size;
    cin >> size;
    int arr[100];
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    cout << minvalue(arr, size) << endl;
    cout << maxvalue(arr, size) << endl;

    return 0;
}