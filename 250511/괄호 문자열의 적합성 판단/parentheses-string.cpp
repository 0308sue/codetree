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
            if(s.empty() == 1) return false;
            s.pop();
        }
    }
    if(s.empty() == 0) cout << "No";
    else cout << "Yes";

    return 0;
}

// function solution(str)
//   set s = empty stack
//   for i = 0 ... i < str.size  // 주어진 문자열을 순회합니다.
//     if str[i] == '('          // 열린 괄호에 대해서는
//       s.push('(')             // stack에 열린 괄호를 넣어줍니다.
//     else
//       if s.empty() == true    // 닫힌괄호가 나온 상황에서, stack이 비어있다면,
//         return false          // 올바른 괄호 문자열이 아닙니다.
//       s.pop()                 // 가장 위에 있는 값을 비워줍니다.

//   if s.empty() == false       // 전부 순회했는데도 불구하고 stack이 비어있지 않다면
//     return false              // 올바른 괄호 문자열이 아닙니다.
//   return true                 // 전부 통과했다면 올바른 괄호 문자열 입니다.
