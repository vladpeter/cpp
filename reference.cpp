
#include <iostream>

using namespace std;

void swapp(int &a, int &b)
{
    int tmp = a;
    a = b;
    b = tmp;
}

void swapp2(int *a, int *b)
{
    int tmp = *a;
    *a = *b;
    *b = tmp;
}

int main()
{
    int a{100}, b{200}; // a = 100 | {} uniform initializer

    cout << &a << ":" << a << endl;
    swapp(a, b);
    cout << &a << ":" << a << endl;

    swapp2(&a, &b);
    cout<< &a << ":" << a << endl;git@github.com:vladpeter/cpp.git

    return 0;
}
