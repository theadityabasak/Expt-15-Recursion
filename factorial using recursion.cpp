//23070123014 Akshit Mathur
// To find the factorial of a number using recursion
#include<iostream>
using namespace std;
int factorial(int n) {
    if (n <= 1)
        return 1;
    else 
        return (n * factorial(n - 1));
}
int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;
    cout << "Factorial of " << num << " is " << factorial(num) << endl;
    return 0;
}
//Output
/*Enter a number: 5
Factorial of 5 is 120
*/