///////////////////////////////////////////////////////////
//  Invoice.h
//  Implementation of the Class Invoice
//  Created on:      02-Dec-2025 12:14:03
//  Original author: HP
///////////////////////////////////////////////////////////

#if !defined(EA_9011EFC0_9D0A_43ec_B337_3D2A0CD3C828__INCLUDED_)
#define EA_9011EFC0_9D0A_43ec_B337_3D2A0CD3C828__INCLUDED_

#include "Booking.h"

class Invoice
{

public:
	Invoice();
	virtual ~Invoice();
	Booking *m_Booking;

	void generateInvoice();

private:
	Booking booking;
	int invoiceId;
	string issueDate;
	double totalPrice;

};
#endif // !defined(EA_9011EFC0_9D0A_43ec_B337_3D2A0CD3C828__INCLUDED_)
