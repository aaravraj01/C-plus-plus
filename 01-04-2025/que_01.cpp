#include<iostream>
using namespace std;
int main()
{
    int i;
    for(i=1; i<=15; i++)
    {
        if( i % 2 != 0 )
        {
            if(i==7)
            {
                continue;
            }
            cout<<i<<endl;
        }
    }
    return 0;
}