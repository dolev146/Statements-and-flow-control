// range- based for loop
#include <iostream>
#include <string>
using namespace std;
int main()
{
    string str {"Hello!"};
    for (char c : str)
    {
        cout << "[" << c << "]";

    }
    cout << "\n";
// the same
//     for (auto c : str)
//          cout << "[" << c << "]";

}