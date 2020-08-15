#include<iostream>
#include<stdio.h>
using namespace std;
class account
{
private:
	int accountBalance;
public:
	account(int balance) {
		if (balance > 0)
		{
			accountBalance = balance;
		} else {
			cout << "Balance can't be negative.. setting it to zero \n";
			balance = 0;
			accountBalance = balance;

		}
	}
	void Credit(int amount)
	{
		accountBalance += amount;
	}
	void Debit (int amount)
	{
		int temp = accountBalance - amount;
		if (temp > 0)
		{
			accountBalance -= amount;

		} else {
			cout << "Debit amount exceeded account balance. \n";
		}
	}
	int getBalance ()
	{
		return accountBalance;
	}

};
int main(void)
{
	int openBalance;
	cout << "Enter the amount you want to start Pratyush account with? \n";
	cin >> openBalance;
	account pratyush(openBalance);
	int paisa;
	cout << "Enter the amount you want to add in Pratyush's account? \n";
	cin >> paisa;
	pratyush.Credit(paisa);
	cout <<pratyush.getBalance() << "\n";
	double paisa1 ;
	cout << "Enter the amount you want to remove from Pratyush's account? \n";
	cin >> paisa1;
	pratyush.Debit(paisa1);
	cout <<pratyush.getBalance() << "\n";
	cout << "Enter the amount you want to start Pulkit account with? \n";
	cin >> openBalance;
	account pulkit(openBalance);
	cout << "Enter the amount you want to add in Pulkit's account? \n";
	cin >> paisa;
	pulkit.Credit(paisa);
	cout <<pulkit.getBalance() << "\n";
	cout << "Enter the amount you want to remove from Pulkit's account? \n";
	cin >> paisa1;
	pulkit.Debit(paisa1);
	cout <<pulkit.getBalance() << "\n";
}
