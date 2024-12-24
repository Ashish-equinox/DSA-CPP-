#include<iostream>
using namespace std;

// backtracking=> last fn's value prints first since we place the recursive call before Print statment
// Q>> print from 1 to N (but by backtracking)

/* void f(int i) {
    if (i < 1) return ;
    f(i - 1); //values decreases with each call
    cout << i << endl;
}

int main() {

    f(5);
} */

// --------------------------------------------------------------//

// Q>> print from N(5) to 1(by backtracking)
//  even after passing 1 first, starts printing from 5
/* void f1(int val){

    // recursive cond
    if(val>5) return;

    // recursion call
    f1(val+1);

    // print value
    cout<<val<<endl;
}
int main(){
    f1(1);
}
 */
// --------------------------------------------------------------//

// Q>> a) print sum of N numbers(using parameterized recursion)

/* void sumN(int N, int sum) {

    if (N < 1) {
        cout << sum;
        return;
    };

    sumN(N - 1, sum + N);
}

int main() {
    sumN(7, 0);
} */

// --------------------------------------------------------------//

// b) print sum of N numbers(using functional recursion)

/* int sumN(int N){

    if(N<1) return 0;

 // sumN fn called & N+sumN line awaits
    return N+sumN(N-1);

}
int main(){
    int N=5;

    int ans=sumN(N);
    cout<<ans;

} */


// --------------------------------------------------------------//

// c) factorial of N

/* 
int factorial(int N) {
    if (N == 1) return 1;
    return N * factorial(N - 1);
}

int main() {
    int N;
    cin >> N;  // Read input from "input1.txt"
    cout << factorial(N);  // Write output to "output1.txt"

    return 0;
}
 */

// Time complexity : O(n)
// space complexity : O(n)=> n fns take n stack space

// --------------------------------------------------------------//