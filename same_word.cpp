#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

string word1;
string word2;

int chek = 0;

int main() {
    cin >> word1;
    cin >> word2;

    sort(word1.begin(), word1.end());
    sort(word2.begin(), word2.end());

    if(word1.compare(word2) == 0){
        cout << "Yes";
    }else{
        cout << "No";
    }

    return 0;
}

