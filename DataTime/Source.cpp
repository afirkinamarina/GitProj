#include "Header.h"
#include <conio.h>
#include <iostream>
#include <ctime>




int main() {
    setlocale(LC_ALL, "Russian");

    cout << "�������:" << endl;
    DataTime data1;
    data1.printToday();
    data1.printMonth();
    data1.printWeekDay();
    data1.printTomorrow();
    data1.printYesterday();
    data1.printFuture(10);
    data1.printPast(10);

    cout << "\n\n�������� ����:" << endl;
    DataTime data2(30, 03, 2017);
    data2.printToday();
    data2.printMonth();
    data2.printWeekDay();
    data2.printTomorrow();
    data2.printYesterday();
    data2.printFuture(10);
    data2.printPast(10);
    data2.calcDifference(data1, data2);
    _getch();
    return 0;
}