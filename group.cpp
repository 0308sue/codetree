#include <iostream>
#include <algorithm>

using namespace std;

int N;
int nums[2000];
int chek = 0;

int main() {
    cin >> N;

    for (int i = 0; i < 2 * N; i++) {
        cin >> nums[i];
    }

    sort(nums, nums+N*2);
    for (int i = 0; i < N; i++) {
        int a = nums[i] + nums[N*2-1-i];
        if(chek < a){
            chek = a;
        }
    }
    cout << chek;

    return 0;
}

