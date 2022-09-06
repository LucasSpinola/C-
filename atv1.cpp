#include <iostream>
using namespace std;

class Object
{
public:
    int weight;
    float height;
};
int main (int argc, char *argv[])
{
    Object ball;

    ball.weight = 10;

    ball.height = 20;

    cout << "weight: " << ball.weight << endl;
    cout << "height: " << ball.height << endl;

    return 0;
}
