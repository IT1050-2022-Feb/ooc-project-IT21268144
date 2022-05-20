#pragma once
// IT21268144_J.A.M.P Jayasinghe
class Complaints
{
private:
	int CustomerID;
	char complaint[30];

public:
	Complaints();
	void setComplaintDetails(int pCustomerID, const char pComplaint[]);
	void DisplayComplaintDestail();
	~Complaints();
};

