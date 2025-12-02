///////////////////////////////////////////////////////////
//  Manager.h
//  Implementation of the Class Manager
//  Created on:      02-Dec-2025 12:14:05
//  Original author: HP
///////////////////////////////////////////////////////////

#if !defined(EA_D1AF2607_9532_422d_97FC_89B466FC8E28__INCLUDED_)
#define EA_D1AF2607_9532_422d_97FC_89B466FC8E28__INCLUDED_

class Manager
{

public:
	Manager();
	virtual ~Manager();

	void viewTransactionReport(List<Invoice> invoices, List<Payment> payments, List<Booking> bookings);

private:
	int id;
	string name;

};
#endif // !defined(EA_D1AF2607_9532_422d_97FC_89B466FC8E28__INCLUDED_)
