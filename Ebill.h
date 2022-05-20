#pragma once
// IT21268144_J.A.M.P Jayasinghe
class Ebill
{
private:
	int CustomerID;
	char BIllNumber[10];
	char AccountNumber[10];
	float usage;
	char lastBillDate[10];
	float Discount;
	float DeficitMoney;
	char lastPaymentDate[10];

public:
	Ebill();
	void EbillDetails(int pCustomerID,const char billnumber[],const char acconuNumber[] ,float pusage, const char lastbillDate[], float discount, float deficitmoney, const char LastpaymentDate[]);
	void ViewDetails();
	void CalculateDiscount();
	void CalculateUsage();
	~Ebill();
};

