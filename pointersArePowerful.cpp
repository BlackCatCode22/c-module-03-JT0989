// jT 9/11/24
// pointersArePowerful.cpp

#include <iostream>
using namespace std;

int main()
{
    int a = 0;

    cout << "Enter a value here: " << endl;
    cin >> a;

    int *p;
    p = &a;

    // Address in pointer p is &a
    // Value of a pointer p is &a
    cout << "Address in pointer p: " << p << endl;
    cout << "Value of a using pointer p; " << p << endl;

    // New integer assigned to pointer
    *p = 20;
    cout << "New value of a: " << a << endl;


    int arr[5] = {1,2,3,4,5};
    int *f = arr;
    for (int i = 0; i < 5; i++)
    {
        cout << "address of arr[" << i << "]: " << (f + i) << endl;
        cout << "Value of arr[" << i << "]: " << (f + i) << endl;
    }



    return 0;
}

