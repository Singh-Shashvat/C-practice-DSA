#include <iostream>
using namespace std;

class amazonProduct
{
public:
    int id;
    int count;
    string description;
    char symbol;
};

int main()
{
    amazonProduct obj;

    obj.id = 10;
    obj.count = 20;
    obj.symbol = '+';
    obj.description = "New Launches | Prime day \n| 12-14 July";

    cout << obj.id << " " << obj.count << endl
         << obj.symbol << " " << obj.description << endl;
    return 0;
}