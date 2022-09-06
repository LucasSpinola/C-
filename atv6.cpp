#include <iostream>
using namespace std;

class car
{
public:
    int year;
};

int main(int argc, char *argv[])
{
    car rx8;
    car*prx8 = &rx8;

    prx8->year = 2010;
    cout << "year:" << prx8->year << endl
    (*prx8).year = 2010;
    cout << "year: " << (*prx8).year << endl

    return 0;
}
