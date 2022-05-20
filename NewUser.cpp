// IT21268144_J.A.M.P Jayasinghe

#include "NewUser.h"
#include<cstring>
using namespace std;


NewUser::NewUser()
{
	strcpy_s(name, "");
	CustomerID = 0;
	strcpy_s(NIC, "");
	strcpy_s(Email, "");
	strcpy_s(PhoneNumber, "");
	strcpy_s(AccountNumber, "");
	strcpy_s(Password, "");

}

void NewUser::setUserDetails(const char pname[], int customerid, char nic[], const char email[20], const char phonenumber[10], const char accountNumber[], const char password[10])
{
	strcpy_s(name, pname);
	CustomerID = customerid;
	strcpy_s(NIC, nic);
	strcpy_s(Email,email);
	strcpy_s(PhoneNumber, phonenumber);
	strcpy_s(AccountNumber, accountNumber);
	strcpy_s(Password, password);
	
}


void NewUser::viewUserDetails()
{
}

NewUser::~NewUser()
{
	cout << "Destructor runs" << endl;
}
