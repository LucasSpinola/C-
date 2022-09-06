#include <iostream>
using namespace std;

class Bank
{
private:
    int account;
    float age;

public:
    Bank(int m, float a)
    {
        account = m;
        age = a;
    }

    int getaccount()
    {
        return account;
    }

};

int main(int argc, char *argv[])
{
    Bank b(200,8);
    cout << "Account: " << b.getaccount() << endl;
    return 0;
}
