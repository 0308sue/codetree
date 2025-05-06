#include <iostream>
#include <algorithm>

using namespace std;

int n;
int A[100];
int B[100];
int chek = 0;

int main() {
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> A[i];
    }

    for (int i = 0; i < n; i++) {
        cin >> B[i];
    }

    // Please write your code here.
    sort(A, A+n);
    sort(B, B+n);

    for (int i = 0; i < n; i++){
        if (A[i] != B[i]){
            chek = 1;
        }
        if (chek != 1 && A[i] != B[i]){
            chek =0;
        }
    }

    if(chek == 0){
        cout << "Yes";
    }else{
        cout << "No";
    }

    return 0;
}
