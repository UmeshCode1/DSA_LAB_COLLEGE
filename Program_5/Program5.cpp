// Program to generate Fibonacci series using recursion.

#include <iostream>
using namespace std;
int fibonacci(int n)
{
    if(n == 0)
        return 0;
    else if(n == 1)
        return 1;
    else
        return fibonacci(n - 1) + fibonacci(n - 2);
}
int main()
{
    int n;
    cout << "Umesh Patel\nEnrollment Number: 0126AL231140\n";
    cout << "Enter the number of terms in the Fibonacci series: ";
    cin >> n;
    cout << "The Fibonacci series is: ";
    for(int i = 0; i < n; i++)
        cout << fibonacci(i) << " ";
    return 0;
}




