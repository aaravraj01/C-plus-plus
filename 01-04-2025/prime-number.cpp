#include <iostream>
using namespace std;
int main()
{
    int i, j, num, prime = 0;
    cout << "Enter range in number: ";
    cin >> num;
    for (i = 1; i < num; i++)
    {
        for (j = 2; j < i; j++)
        {
            if (i % j == 0)
            {
                break;
            }
        }
        if (j == i)
        {
            cout << i << " , ";
        }
    }
    return 0;
}