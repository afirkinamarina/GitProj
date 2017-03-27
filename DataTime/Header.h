#pragma once
#include <iostream>
#include <ctime>

using std::cout;
using std::cin;
using std::endl;

class DataTime
{
private:
    int day,
        month,
        year;

    struct tm * timeinfo;   // тип данных для хранения количества секунд
    time_t rawtime;         // структура даты и времени

    char * weekday[7] = { "Воскресенье", "Понедельник",
        "Вторник", "Среда",
        "Четверг", "Пятница", "Суббота" };

    char * monthname[12] = { "Январь", "Февраль",
        "Март", "Апрель","Май",
        "Июнь", "Июль", "Август",
        "Сентябрь","Октябрь","Ноябрь",
        "Декабрь" };

public:
    DataTime() {
        time(&rawtime);                     //дата в секундах         
        timeinfo = localtime(&rawtime);     //преобразование текущей даты
        year = timeinfo->tm_year + 1900;
        month = timeinfo->tm_mon + 1;
        day = timeinfo->tm_mday;
    }

    DataTime(int date_day, int date_month, int date_year) {
        day = date_day;
        month = date_month;
        year = date_year;

    }

    DataTime(const DataTime &copy)
    {
        day = copy.day;
        month = copy.month;
        year = copy.year;
        timeinfo = copy.timeinfo;
        rawtime = copy.rawtime;
        weekday[7] = copy.weekday[7];
        monthname[12] = copy.monthname[12];
    }

    void opredDay() {
        // получить текущую информацию о дате и изменить её относительно введенной
        time(&rawtime);                              // текущая дата в секундах
        timeinfo = localtime(&rawtime);              // преобразовние текущей даты 
        timeinfo->tm_year = year - 1900;             // корректируем год
        timeinfo->tm_mon = month - 1;                // корректируем значение месяца
        timeinfo->tm_mday = day;                     // введённый день
        mktime(timeinfo);
    }

    void printMonth() {
        opredDay();
        cout << "Месяц: " << monthname[timeinfo->tm_mon] << endl;
    }

    void printWeekDay() {
        opredDay();
        cout << "День недели: " << weekday[timeinfo->tm_wday] << endl;
    }

    void printToday() {
        opredDay();
        cout << day << " "
            << monthname[timeinfo->tm_mon] << " "
            << year << " ("
            << weekday[timeinfo->tm_wday] << ")" << endl;
    }

    void printTomorrow() {
        char buffer[80];
        tm tomorr = {};
        tomorr.tm_year = year - 1900;
        tomorr.tm_mon = month - 1;
        tomorr.tm_mday = day;
        // modify
        tomorr.tm_mday += 1;
        mktime(&tomorr);
        strftime(buffer, 80, "%d %B %Y %A ", &tomorr);
        // show result
        cout << "Завтра: " << buffer << endl;
    }

    void printYesterday() {
        char buffer[80];
        tm yester = {};
        yester.tm_year = year - 1900;
        yester.tm_mon = month - 1;
        yester.tm_mday = day;
        // modify
        yester.tm_mday -= 1;
        mktime(&yester);
        strftime(buffer, 80, "%d %B %Y %A ", &yester);
        // show result
        cout << "Вчера: " << buffer << endl;
    }

    void printFuture(int x) {
        int n = x;
        char buffer[80];
        tm futur = {};
        futur.tm_year = year - 1900;
        futur.tm_mon = month - 1;
        futur.tm_mday = day;
        // modify
        futur.tm_mday += n;
        mktime(&futur);
        strftime(buffer, 80, "%d %B %Y %A ", &futur);
        // show result
        cout << "Через " << n << " дней будет: " << buffer << endl;
    }

    void printPast(int x) {
        int m = x;
        char buffer[80];
        tm past = {};
        past.tm_year = year - 1900;
        past.tm_mon = month - 1;
        past.tm_mday = day;
        // modify
        past.tm_mday -= m;
        mktime(&past);
        strftime(buffer, 80, "%d %B %Y %A ", &past);
        // show result
        cout << m << " дней назад было: " << buffer << endl;
    }

    void calcDifference(DataTime d1, DataTime d2) {
        const int oneday = 0x15180;
        int day1, mon1, year1;
        int day2, mon2, year2;

        day1 = d1.day;
        mon1 = d1.month;
        year1 = d1.year;
        day2 = d2.day;
        mon2 = d2.month;
        year2 = d2.year;

        tm FirstDate = { 0, 0, 0, day1, mon1 - 1, year1 - 0x76C, 0, 0, 0 };
        tm SecondDate = { 0, 0, 0, day2, mon2 - 1, year2 - 0x76C, 0, 0, 0 };

        time_t t1 = mktime(&FirstDate);
        time_t t2 = mktime(&SecondDate);

        time_t diff = ((t1 > t2) ? t1 - t2 : t2 - t1) / oneday;

        cout << "\nДней между датами: " << diff << endl;
    }
};
