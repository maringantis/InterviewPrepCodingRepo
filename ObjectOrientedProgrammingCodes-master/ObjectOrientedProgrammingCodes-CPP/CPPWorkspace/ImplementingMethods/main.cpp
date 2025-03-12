#include <conio.h> 
#include <iostream>
#include <vector>
#include <string>
using namespace std;


class Account
{

	//attributes
	private:
	string name {"Account"};
	double balance {0.0};
	
	public:
	//methods
	
	//Implementing methods inside classes
	void set_balance(double bal) 
	{
		balance = bal;
	}
	//Implementing methods inside classes
	double get_balance(){return balance;}
	
	//Prototyping methods inside classes
	void set_name(string);
	//Prototyping methods inside classes
	string get_name();
	
	
	//Prototyping methods inside classes
	bool deposit(double bal);
//	{
////		balance += bal;
////		cout<<name<<" you have deposited $"<<bal<<" to your account"<<endl;
////		cout<<name<<" your current balance is "<<balance<<"\n"<<endl;
////		
////		return true;
//	}

	//Prototyping methods inside classes
	bool withdraw(double bal);
//	{
//		balance -= bal;
//		cout<<name<<" you have withdrew $"<<bal<<" from your account"<<endl;
//		cout<<name<<" your current balance is "<<balance<<"\n"<<endl;
//		return true;
//	}

};// Account class end

void Account::set_name(string current_name)
{
	name = current_name;
	
	cout<<"Hello "<<name<<"!"<<endl;
}

void display (Account account); //Account display


int main()
{
    cout<< "Creating the Classes and objects"<< std::endl;
	
	//Account class objects and calls
	Account sunny_account;
	Account hero_account;
	//Definfing sunny_account object 
	
//	sunny_account.name = "Sunny";
//	sunny_account.balance = 40.0;
//	sunny_account.deposit(100.0);
//	sunny_account.withdraw(15.0);
	sunny_account.set_name("Sunny");
	//display(sunny_account);

    return 0;
}  



//void display (Account account)
//{
//	cout<<"\nAccount details:\nName: "<<account.name<<"\tAccount balance: "
//	<<account.balance<<"\n"<<endl;
//}