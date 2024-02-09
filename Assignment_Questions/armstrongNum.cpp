#include <iostream>
#include <cmath>  

using namespace std;

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    int x = num; // Save the original number

    int count = 0;
    while (num != 0) {
        int z = num % 10;
        count += 1;
        num = num / 10;
    }

    int sum = 0;
    num = x; // Reset num to the original number
    
    while (num != 0) {
        int a = num % 10;
        sum += pow(a, count);
        num = num / 10;
    }

    if (x == sum) {
        cout << "The given number is an Armstrong number." << endl;
    } else {
        cout << "The given number is not an Armstrong number." << endl;
    }

    return 0;
}
