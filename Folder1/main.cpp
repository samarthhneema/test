#include <iostream>

using namespace std;

// Added some code here

int main()
{
    int sum,n,i;
    cout << "Enter a number " << endl;
    cin >> n ;

    for(i = 1; i<n ; i++)
    {
        sum = sum + i;
    }
    cout <<"sum is "<< sum;
    return 0;
}
