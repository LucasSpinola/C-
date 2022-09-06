#include <iostream>
using namespace std;
class student
{
    friend void friends (student*);
protected:
    int year;

public:
    student(int i)
    {
        year = i;
    }
};
void friends(student* e)
{
    cout << "year: " << e->year << endl
}
int main(int argc, char *argv[])
{
    student e(15);

    friend(&e)
    return 0;

}
