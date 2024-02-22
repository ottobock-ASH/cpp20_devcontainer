#include <iostream>
using namespace std;

#include "account.hpp"

int main(int argc, char const *argv[])
{
    Account k4711(1000);
    Account k0815(50);

    cout << "4711: " << k4711.getBalance() << endl;
    cout << "0815: " << k0815.getBalance() << endl;

    cout << "Interrest Rate: " << Account::getInterestRate() << " setting new value: " << endl;

    Account::setInterestRate(5); //Klassenmethode kann so aufgerufen werden
    k0815.setInterestRate(5);   //Klassenmethode kann auch so aufgerufen werden - uncool & besser nicht machen!

     cout << "Interrest Rate: " << Account::getInterestRate() << endl;

    return 0;
}