#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    setlocale(LC_ALL, "rus");
    cout << "Как вас зовут?" << endl;
    string x;
    cin >> x;
    int str;
    cout << "Сколько будет 2 в четвертой степени? ";
    cin >> str;
    switch (str)
    {
        case 16:
            cout << "Все правильно!" << endl;
            break;
        default:
            cerr << "fu" << endl;
    }
}