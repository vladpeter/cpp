
#include <iostream>
#include <map>
#include <vector>

using namespace std;

struct position
{
//public:       //by default
    int x;
    int y;
    double d;
};

class position2
{
public:
    int x;
    int y;
    double d;
};

void test_not_uniform()
{
    int two = 2;
    int three(3); // c++98..
    int four{4}; // c++11.. - prefered
    int five = { 5 }; // c++11..
}

void test_uniform()
{
    position p1{10, 10, 20.0};
    position p2{10, 10, 20.0};

    position p3{};

    cout << p1.x << endl;
    cout << p3.x << ' ' << p3.y << endl;

    string greet{"Hello"};

    auto i{ 10 };

    int *pi1{}; //null ptr
    int *pi2{ nullptr };
    int *pi;
    auto *pi3 { &i };
    cout << *pi3 << endl;

    int numbers[]{1, 2, 3, 4, 5};
    for (auto n: numbers)
        cout << n << " ";
    cout << endl;

    int *pnumbers{new int[4]{1, 2, 3, 4} };
    int ages[100]{};

    delete[] pnumbers; // delete[] note delete!

    int mat1[2][2]{ {1, 2}, {3, 4} };
    int mat2[2][2]{ 1, 2, 3, 4 }; // not recommended but works

    map<string, int> agess {
        {"ion", 20},
        {"maria", 30}
    };

    short s = 9999999999; // s = {99999999} does not compile
    cout << s << endl;

    int j1{ static_cast<int>(10.0) };
    int j2{ int(10.0) };    // c++ style cast
    int j3{ (int)10.0 };    // c style cast

    //int j{ 10.0 };    // does not compile
    int k = 10.0;   //narrowing conversion implicit

    vector<string> names {"Ana", "Maria", "Ioana"};

    // promotion:
    int j4(10 + 10f);

}

int main()
{
    test_not_uniform();
    test_uniform();

    return 0;
}
