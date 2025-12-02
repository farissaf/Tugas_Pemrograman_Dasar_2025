///////////////////////////////////////////////////////////
//  Payment.h
//  Implementation of the Class Payment
//  Created on:      02-Dec-2025 12:14:02
//  Original author: HP
///////////////////////////////////////////////////////////

#if !defined(EA_B1965507_BF1A_4261_84FC_5960A99DCDE6__INCLUDED_)
#define EA_B1965507_BF1A_4261_84FC_5960A99DCDE6__INCLUDED_

#include "Booking.h"

class Payment
{

public:
	Payment();
	virtual ~Payment();
	Booking *m_Booking;

	void displayPayment();
	void processPayment();

private:
	Booking booking;
	string method;
	string paymentDate;
	int paymentId;
	double price;

};
#endif // !defined(EA_B1965507_BF1A_4261_84FC_5960A99DCDE6__INCLUDED_)
