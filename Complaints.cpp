#include "Complaints.h"
#include<cstring>

Complaints::Complaints()
{
	CustomerID = 0;
	strcpy_s(Complaint, "");
}

void Complaints::setComplaintDetails(int pCustomerID, const char pComplaint[])
{
	CustomerID = pCustomerID;
	strcpy_s(complaint, pComplaint);
}

void Complaints::DisplayComplaintDestail()
{
}

Complaints::~Complaints()
{
	cout << "Destructor runs" << endl;
}
