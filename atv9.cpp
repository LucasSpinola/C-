#include <iostream>
using namespace std;

class animal
{
protected:
    int year;

public:
    animal(int i)
    {
        cout << "building animal... " << endl;
        idade = i;
    }
    int getyear()
    {
        return year;
    }
};
class wolf: public animal
{
protected:
    float weight

public:
    wolf(int year, float weight p): animal(year)
    {
        cout << "building wolf..." << endl
        weigh = w;
    }
    float getweight()
    {
        return weight
    }
};
int main(int argc, char *argv[])
{
    wolf c(30, 20);
    cout <<" year: " << c.getyear() << endl
    cout <<"weight : " << c.getweight() << endl
    return 0;

}
