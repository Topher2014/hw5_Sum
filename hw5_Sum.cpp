#include <iostream>

using namespace std;

int main()
{
        int num=1, val, count=0;

        cout << "Enter a positive integer value: \n";
        cin >> val;

        while (num <= val)
        {   
        count += num;
        num++;
        }   

        cout << "The sum is " << count;

return 0;
}
