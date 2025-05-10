#include <iostream>
#include <string>
#include <stack>

using namespace std;

string str;

int main() {
    cin >> str;
    stack<char> s;

    for (char ch : str) {
        if (ch == '(') s.push('(');
        else{
            if(s.empty() == 1){
                 cout << "No";
                 return 0;
            }
            s.pop();
        }
    }
    if(s.empty() == 0) cout << "No";
    else cout << "Yes";

    return 0;
}

