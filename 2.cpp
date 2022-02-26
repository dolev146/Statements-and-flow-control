// the only diffrance is the int in line 10
#include <iostream>
using namespace std;

int main()
{
    int x = 5;
    cout << "x: " << x << endl;
    {
        x = 9;
        cout << "inside block x: " << x << endl;
    }
    cout << "outside block x: " << x << endl;
}
