#include "Q-1_Banking.cpp"

int main()
{
    cout << "--Saving Account--" << endl;
    SavingsAccount s1;
    s1.setAccountData();
    s1.inputData();
    s1.Deposit(3000);
    s1.getAccountData();

    cout << "--Checking Account--" << endl;
    CheckingAccount c1;
    c1.setAccountData();     
    c1.inputData();          
    c1.getAccountData();     
    c1.CheckOverdraft(1000); 
    c1.CheckOverdraft(1000);

    cout << "--Fixe Deposit Account--" << endl;
    FixeDeposiAccount fd1;
    fd1.setAccountData(); 
    fd1.inputData();      
    fd1.getAccountData(); 
    fd1.calculateInterest();
}
