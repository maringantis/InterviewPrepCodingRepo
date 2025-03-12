#ifndef _ACCOUNT_H_
#define _ACCOUNT_H_
#include <string>
class Account
{
//attributes
	private:
	std::string name ;
	double balance ;
	
	public:
	//methods

//	void set_balance(double bal) ;
//	double get_balance();
//	
	//Prototyping methods inside classes
	void set_name(std::string);
	//Prototyping methods inside classes
	std::string get_name();
	
	//Prototyping methods inside classes
	bool deposit(double bal);

	//Prototyping methods inside classes
	bool withdraw(double bal);

};

#endif // _ACCOUNT_H_
