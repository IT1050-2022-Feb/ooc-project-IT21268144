#pragma once
// IT21268144_J.A.M.P Jayasinghe
class NewUser
{
private:
	char name[20];
	int CustomerID;
	char NIC[12];
	char Email[20];
	char PhoneNumber[10];
	char AccountNumber[15];
	char Password[10];

public:
	NewUser();
	void setUserDetails(const char pname[],int customerid,char nic[],const char email[20], const char phonenumber[10], const char accountNumber[],const char password[10]);
	void viewUserDetails();
	~NewUser();

};

