#include<bits/stdc++.h>
using namespace std;
int kthSmallest(int arr[], int n, int k) {
        //code here
        sort(arr,arr+r+1);
        return arr[k-1];
    }
    void printarray(int arr[],int n){
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        cout<<arr[i]<<endl;
    }
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    
  cout<< kthSmallest(arr,n);
    
    return 0;
}