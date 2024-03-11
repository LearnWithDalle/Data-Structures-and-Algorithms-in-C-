#include <iostream>
using namespace std;
// void is used when You have nothing to return
void greet(string name)
{
    string ok;
    cout << "Hello " << name << endl
         << "How are You ?";
    cin >> ok;
    if (ok == "good")
    {
        cout << "it' Nice to Here" << endl;
    }else{
        cout << "It's Ok Broo No need to worry" << endl;

    }
}

int main()
{
    // int i = 10;
    // for (int i = 1 ; i < 50; i += 15)
    // {
    //     cout << i << endl;
    // }
    //     cout << endl;
    //     cout << i << endl;
    greet("dalle");
        // cout << ok << endl;
}
