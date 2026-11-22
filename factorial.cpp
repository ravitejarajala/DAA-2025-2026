#include <iostream>
using namespace std;

// Iterative Method
int iterativeFactorial(int n)
{
    int fact = 1;
    for (int i = 1; i <= n; i++)
    {
        fact = fact * i;
    }
    return fact;
}

// Recursive Method
int recursiveFactorial(int n)
{
    if (n == 0 || n == 1)
        return 1;

    return n * recursiveFactorial(n - 1);
}

int main()
{
    int n, choice;

    cout << "Enter a number: ";
    cin >> n;

    cout << "\nChoose Method\n";
    cout << "1. Iterative Method\n";
    cout << "2. Recursive Method\n";
    cout << "Enter your choice: ";
    cin >> choice;

    if (choice == 1)
    {
        cout << "Factorial = " << iterativeFactorial(n);
    }
    else if (choice == 2)
    {
        cout << "Factorial = " << recursiveFactorial(n);
    }
    else
    {
        cout << "Invalid Choice";
    }

    return 0;
}
