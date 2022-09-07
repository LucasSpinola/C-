#include <iostream>
using namespace std;

int main()
{
    int number1, number2, result;
    char op;

    cout << "type the first number: " << endl;
    cin >> number1;

    cout <<"enter an operation [+, -, /, *]" << endl
    cin << op;

    cout << "type the second number: " << endl;
    cin >> number2;

    if(op == '+')
        result = number1 + number2;
    else if(op == '-')
        result = number1 - number2;
    else if(op == '/')
        result = number1 / number2;
    else if(op == '*')
        result = number1 * number2;

    cout << number1 << op << number2 << " = " << result << endl

    return 0;
}
