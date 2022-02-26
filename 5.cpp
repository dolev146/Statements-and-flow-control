#include <iostream>
using namespace std;

int main()
{
    for (int n = 10 ; n > 0 ; n--)
    {
        cout << n << ", ";
    }
    cout << "liftoff!\n";

    int i;
    int n;
    for (n = 0 , i = 100 ; n!=i ; ++n , --i){
        cout << "n: " << n;
        cout << "i: " << i;        
    }
}