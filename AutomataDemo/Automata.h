#pragma once

enum STATES { 
    OFF, 
    WAIT, 
    ACCEPT, 
    CHECK, 
    COOK
};

class Automata
{
private:
    int choice;
    int cash;
    char * menu[5] = { "Esprecco", "Americano", "Hot chocolate", "Green tea", "Black tea" };
    int prices[5] = { 35, 30, 32, 30, 25};
    STATES state;
    int now;
public:
    Automata();
    void Run();
    void On();
    void Off();
    void printMenu();
    void printState();
    void Coin(int);
    void Cancel();
    void Choice();
    void Check();
    void Cook();
    void Finish();
   
};

