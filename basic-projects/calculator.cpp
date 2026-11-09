#include <iostream>
#include <cmath>  
using namespace std;
int main () {
    int a, b;
    char op;
    cout << "Enter a two numbers: ";
    cin >> a >> b;
    cout << "choose operator you want to perform: +, -, *, %, /, ^: ";
    cin >> op;
    if(op == '+') {
        cout << a + b;
    } else if (op == '-') {
        cout << a - b;
    } else if (op == '*') {
        cout << a * b;
    } else if (op == '/'){
        if (b == 0) {
            cout << "divisible by zero is not allowed" << endl;
        }
        double result = (a / b);
        cout << result;
    } else if (op == '%') {
      cout << a % b;
    } else if (op == '^') {
       cout << pow(a, b);
    }
    else {
        cout << "invalid input" << endl;
    }
}