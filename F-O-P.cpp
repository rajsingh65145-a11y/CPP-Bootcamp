#include <iostream>
using namespace std;

class Calculator {
public:
    // Version 1: 2 integers
    int add(int a, int b) {
        cout << "int add(int, int) called\n";
        return a + b;
    }

    // Version 2: 3 integers (different parameter COUNT)
    int add(int a, int b, int c) {
        cout << "int add(int, int, int) called\n";
        return a + b + c;
    }

    // Version 3: 2 doubles (different parameter TYPE)
    double add(double a, double b) {
        cout << "double add(double, double) called\n";
        return a + b;
    }

    // Version 4: string concatenation (different type entirely)
    string add(string a, string b) {
        cout << "string add(string, string) called\n";
        return a + b;
    }
};

int main() {
    Calculator calc;

    cout << calc.add(5, 10) << endl;          // -> Version 1
    cout << calc.add(5, 10, 15) << endl;       // -> Version 2
    cout << calc.add(5.5, 2.3) << endl;        // -> Version 3
    cout << calc.add("Hello ", "World") << endl; // -> Version 4

    return 0;
}