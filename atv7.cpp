#include <iostream>
using namespace std;

class people
{
protected:
    int year;
public:
    people(int i)
    {
        year = y;
    }
    voud printyear()
    {
        cout << "year: " << year << endl;
    }
};

int main(int argc, char *argv[])
{
    people p(21);
    p.printyear();
    return 0;

}
