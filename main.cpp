#include<iostream>
using namespace std;

int main() {
    int first;
    int second;
    cout << "Enter first number: ";
    cin >> first;
    cout << "Enter second number: ";
    cin >> second;
    for (int i = first > second ? second : first; i >= 1; i--)
        if (first % i == 0 && second % i == 0) {
            cout << "Result: " << i;
            break;
        }

    return 0;
}
