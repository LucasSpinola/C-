#include <iostream>
using namespace std;

class Bank
{
private:
   int account;
public:
    void setaccount(int new_account)
    {
        account = new_account;
    }
    int getaccount()
    {
        return account;
    }
};

int main(int argc, char *argv[])
{
    Bank bank;
    bank.setaccount(200);
    cout << "your account: " << bank.getaccount();
    return 0;
}
