#include<iostream>
#include <string>
using namespace std;

class Account // defining class called account
{
 public:  //visibility type, public
  Account( int);
  void credit(int );
  void debit(int );
  int getAccountBalance();
 private:
  int accountBalance;
};
Account::Account( int balance)
{
 if(balance>=0)
  accountBalance=balance;
 else
 {
  accountBalance=0;
  cout<<"Initial balance was invalid."<<endl;
 }
}
void Account::credit( int balance)
{
 accountBalance = accountBalance + balance;
}
void Account::debit( int balance)
{
 if(accountBalance>=balance)
 {
  accountBalance = accountBalance - balance;
 }
 else
 {
  cout<<"Debit amount exceeded account balance."<<endl;
 }
}
int Account::getAccountBalance()
{
 return accountBalance;
}
int main()
{
 Account Account1(57);
 Account Account2(-45);
 cout << "Account1's initial balance is: "<< Account1.getAccountBalance()<< "\nAccount2's initial balance is: "<< Account2.getAccountBalance() << endl;
 Account1.credit(300);
 Account2.credit(63);
 cout << "\nAccount1's balance is: "<< Account1.getAccountBalance()<< "\nAccount2's balance is: "<< Account2.getAccountBalance() << endl;
 Account1.debit(70);
 Account2.debit(63);
 cout << "\nAccount1's balance is: "<< Account1.getAccountBalance()<< "\nAccount2's balance is: "<< Account2.getAccountBalance() << endl;
}
