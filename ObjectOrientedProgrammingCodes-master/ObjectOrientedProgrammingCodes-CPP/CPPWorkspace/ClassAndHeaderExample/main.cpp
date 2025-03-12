#include <conio.h> 
#include <iostream>
#include <vector>
#include <string>
#include "Account.h"
using namespace std;

int main()
{
    //cout<< "Hello,World"<< std::endl;
	
	Account sunny_account;
	
	sunny_account.set_name("Sunny");
	cout<<"Account name is: "<<sunny_account.get_name();
	
	sunny_account.deposit(100);
	sunny_account.withdraw(10);
    getch();
    return 0;
}