#include <iostream>

using namespace std;

int a, b, c;

int minval(int a, int b, int c){
    int m;
    m = a < b ? a : b;
    m = c < m ? c : m;
    return m;
}

int main() {
    cin >> a >> b >> c;
    cout << minval(a,b,c);

    // Please write your code here.

    return 0;
}