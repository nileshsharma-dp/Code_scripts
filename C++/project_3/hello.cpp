#include <iostream>
using namespace std;

int main()
{
        cout << "Welcome sir , please enter the numbers below" << endl;
        int a, b, c;
        cout << "Enter 'a': " << endl;
        cin >> a;

        cout << "Enter 'b': " << endl;
        cin >> b;

        cout << "Enter 'c': " << endl;
        cin >> c;

        if (a > b)
        {
                if (a > c)
                {
                        cout << "a is Greater" << endl;
                }
                else
                {
                        cout << "c is Greater" << endl;
                }
        }
        else
        {
                if (b > c)
                {
                        cout << "b is Greater" << endl;
                }
                else
                {
                        cout << "c is Greater" << endl;
                }
        }
        return 0;
}