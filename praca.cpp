#include <iostream>
using namespace std;

int main(){
    const int n = 5;
    int arr[n] = {1,2,3,4,5};
    int *ptr = arr;
    
    for(int i = 0; i < n; ++i)
    cout << *ptr << endl;

    return 0;
}