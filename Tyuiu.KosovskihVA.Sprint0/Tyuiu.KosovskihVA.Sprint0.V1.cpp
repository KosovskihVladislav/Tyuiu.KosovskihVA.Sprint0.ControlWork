// Tyuiu.KosovskihVA.Sprint0.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "../Tyuiu.KosovskihVA.Sprint0.Lib/Tyuiu.KosovskihVA.Sprint0.Lib.cpp"
#include <string>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    cout << "Kosovskih\a\t" << "Vladislav\t" << "Alekseevich\n";
    ISprint0Task8V2* cs1 = new Service1();
    cout << "Control working V1\n";
    int n, a, b, c;
    cout << "Введите трехзначное число: ";
    cin >> n;
    a = n / 100;
    b = n % 100 / 10;
    c = n % 10;
    int mult = cs1->Rezultat(a, b, c);
    cout << "Произведение цифр трехзначного числа равно " + to_string(mult);
    cout << endl;
    cout << endl;


    ISprint0Task8V2* cs2 = new Service2();
    cout << "Control working V1.Z2\n";
    int x, y, z;
    cout << "Введите число x: ";
    cin >> x;
    cout << endl;
    cout << "Введите число y: ";
    cin >> y;
    cout << endl;
    cout << "Введите число z: ";
    cin >> z;
    cout << endl;
    mult = cs2->Rezultat(x, y, z);
    cout << "Арифметическое выражение равно " + to_string(mult);
    cout << endl;
    cout << endl;
}

