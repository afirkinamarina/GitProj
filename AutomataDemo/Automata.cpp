#include "Automata.h"
#include <iostream>
#include <conio.h>
using namespace std;

Automata::Automata()
{
    state = OFF;
    now = state;
    cash = 0;
}

void Automata::Run()
{
    int money;
    char q; 
    for (;;) {
        switch (now)
        {
        case(OFF):
            printState();
            cout << "To turn on? (y/n)" << endl;
            if ((cin >> q) && (q == 'y'))
            {
                On();
            }
            break;

        case(WAIT):
            printState();
            cout << "Want to choose a drink?(y/n)" << endl;
            if ((cin >> q) && (q == 'y'))
            {
                printMenu();
                cout << "Deposit money: " << endl;
                cin >> money;
                Coin(money);

                if (cash != 0)
                    now = ACCEPT;
            }
            else 
            {
                Off();
            }
            break;
        case (ACCEPT):
            printState();
            Choice();
            cout << "Continue?(y/n)" << endl;
            if ((cin >> q) && (q == 'y'))
                now = CHECK;
            else
                Cancel();
            break;
        case (CHECK):
            printState();
            Check();
            break;
        case (COOK):
            printState();
            Cook();
            Finish();
            break;
        default:
            cout << "Vikl" << endl;
        }
    }

}

void Automata::On() 
{
    cout << "Turning on..." << endl;
    now = WAIT;
}

void Automata::Off()
{
    cout << "Turning off..." << endl;
    now = OFF;
}

void Automata::printMenu() 
{
    for (int i = 0; i < 5; i++)
    {
        cout <<i<<"-"<< prices[i] << " " << menu[i] << endl;
    }
}

void Automata::printState()
{
    switch (now)
    {
    case(OFF):
        cout << "\nOFF" << endl;
        break;
    case (WAIT):
        cout << "\nWAIT" << endl;
        break;
    case (ACCEPT):
        cout << "\nACCEPT" << endl;
        break;
    case (CHECK):
        cout << "\nCHECK" << endl;
        break;
    case (COOK):
        cout << "\nCOOK" << endl;
        break;
    }
}

void Automata::Coin( int n) 
{
    cash = n;

}
void Automata::Choice() 
{
    int m;
    cout << "Select number: " << endl;
    cin >> m;
    choice = m;
    cout << "Your choice: " << menu[choice] <<
          ", price:" << prices[choice] << endl;
}
void Automata::Check()
{
    if (cash >= prices[choice])
    {
        cout << "Please, wait" << endl;
        cash = cash - prices[choice];
        now = COOK;
    }
    else
    {
        cout << "Not enough money :(" << endl;
        Cancel();
    }
 }

void Automata::Cancel() 
{
    cout << "Your chang: " << cash <<endl;
    now = WAIT;

}

void Automata::Cook() 
{
    cout <<"Your "<< menu[choice] << "!" << endl;
}

void Automata::Finish()
{
    cout << "Thank you!" << endl;
    cout << "Your chang: " << cash << endl;
    now = WAIT;
}

