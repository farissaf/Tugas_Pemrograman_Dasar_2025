///////////////////////////////////////////////////////////
//  Booking.h
//  Implementation of the Class Booking
//  Created on:      02-Dec-2025 12:14:01
//  Original author: HP
///////////////////////////////////////////////////////////

#if !defined(EA_D859DE25_A113_4457_9E76_83D76BA08414__INCLUDED_)
#define EA_D859DE25_A113_4457_9E76_83D76BA08414__INCLUDED_

#include "Motor.h"
#include "MotorRenter.h"

class Booking
{

public:
	Booking();
	virtual ~Booking();
	Motor *m_Motor;
	MotorRenter *m_MotorRenter;

	void cancelBooking();
	void displayBooking();

private:
	int bookingId;
	string endDate;
	Motor motor;
	MotorRenter renter;
	string startDate;

};
#endif // !defined(EA_D859DE25_A113_4457_9E76_83D76BA08414__INCLUDED_)
