#pragma once

class Account
{
private:
    int _balance;
    static int _sInterestRate; //Diese komponente ist durch "static" dem Datentyp (der Klasse) zugeordnet. Alle greifen auf das selbe zu!
public:
    Account(int balance);
    int getBalance() const;
    void setBalance(int balance);

    static void setInterestRate(int rate); //Diese Methode ist durch "static" dem Datentyp (der Klasse) zugeordnet.
    static int getInterestRate();
};