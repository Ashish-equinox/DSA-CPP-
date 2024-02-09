#include <iostream>
using namespace std;

// 6 - divisible by 1,2,3 and 1+2+3=6

int main() {
    cout << "enter your number:";
    int num{};
    cin >> num;
    int sum = 0;

    for (int i = 1; i <= num/2; i++) {
        if (num % i == 0) {
            sum = sum + i;
        }
    }

    if (num == sum) {
        cout << "perfect";
    } else {
        cout << "not perfect";
    }

    return 0;
}
