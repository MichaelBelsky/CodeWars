#include <iostream>
#include <string>
using namespace std;

/*	Write a function to convert a name into initials.This kata strictly takes two words with one space in between them.
    The output should be two capital letters with a dot separating them.
    It should look like this:
    Sam Harris = > S.H
    patrick feeney = > P.F	*/


string abbrevName(string name);

int main()
{
    setlocale(LC_ALL, "Russian");
    cout << abbrevName("patrick feenan") << endl;
}

string abbrevName(string name)
{
    string res;
    int space = name.find_first_of(' ');
    res = string() + (char)toupper(name[0]) + '.' + (char)toupper(name[space+1]);
    return res;
}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
