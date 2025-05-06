#include <iostream>
#include <algorithm>
using namespace std;

int n;
int arr[100];

int main() {
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Please write your code here.

    //sort(arr, arr+n);
    for (int i = 0; i < n; i+=2) {
        if((i+1)%2 != 0){
            int newarr[i+2];
            copy(arr, arr + i + 1, newarr);
            sort(newarr, newarr+i+1);
            cout << newarr[i/2] << " ";
        }
    }
    return 0;
}
