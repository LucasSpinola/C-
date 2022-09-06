#include <iostream>
using namespace std;

class operation
{
public:
    int sum(int n1, int n2)
    {
        return n1+n2;
    }
    double sum(double n1, double n2)
    {
        return n1 + n2;
    }
    int sum(int n1, int n2, int n3)
    {
        return n1 + n2 + n3;
    }
};

int main(int argc, char *argv[])
{
    operation op;
    cout << op.sum(10, 30) << endl;
    cout << op.sum(10.302, 3.7) << endl;
    cout << op.sum(3, 2, 1) << endl;
    return 0;
}
