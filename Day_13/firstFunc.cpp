#include <iostream>
using namespace std;

int table(int a)
{
    for (int i = 1; i <= 10; i++)
    {
        cout << a << " X " << i << " =  " << a * i << endl;
    }
    cout << endl;
}
int evenOdd(int x){
    if (x % 2 == 0){
        cout << "This is An Even Number";
    }else{
        cout << "This is An Odd Number";
    }
}

int main()
{
    int n = 5;
    cout << "Hello I am Dalla......!!1";
    cout << endl;
    // table(2);
    // table(3);
    // table(4);
    // table(5);
    // table(6);
    // table(7);
    // table(8);
    // table(9);
    // table(10);
    evenOdd(10);
}
