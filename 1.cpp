#include <iostream>
using namespace std;

int main()
{
    int x = 5;
    cout << "x: " << x << endl;
    {
        int x = 9;
        cout << "inside block x: " << x << endl;
    }
    cout << "outside block x: " << x << endl;

    if (x == 5)
    {
        cout << "x equals to 5";
    }
}
