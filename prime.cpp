#include <iostream>
using namespace std;

int checkPrime(int n){
    for(int i = 2; i<=n/2;i++){
        if(n%i==0)
            return 1;
            break;
    }
    return 0;
}
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin >> n;
        int a=checkPrime(n);
        if(n==0){
            cout << "is prime";
        }
        else
            cout << "not prime";
    }
    return 0;
}