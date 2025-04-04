// WAP to display the following pattern:
    // 1 , 2 , 3 , 5 , 13 , 21 , 34  (Fibonacci series)

#include <iostream>
using namespace std;

int main()
{
    // Your code goes here

    int a = 0, b = 1, c = 0;

    for (int i = 1; i <= 8; ++i)
    {

        c = a + b;
        a = b;
        b = c;
        if (b == 8)
        {
            continue;
        }
        cout << c << " , ";
    }

    return 0;
}



/*
    int main()
    {
        int a = 0, b = 1, c = 0;
            while(c<34)
            {
                c = a + b;
                a = b;
                b = c;
                    if(c==8)
                    {
                        continue;
                    }   
                cout<<i<<" , ";
            }
            return 0;
    }
*/