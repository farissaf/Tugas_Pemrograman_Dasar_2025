///////////////////////////////////////////////////////////
//  Motor.h
//  Implementation of the Class Motor
//  Created on:      02-Dec-2025 12:14:00
//  Original author: HP
///////////////////////////////////////////////////////////

#if !defined(EA_9B7108F9_D99B_4cdb_ABA8_AA4B6EAA6247__INCLUDED_)
#define EA_9B7108F9_D99B_4cdb_ABA8_AA4B6EAA6247__INCLUDED_

class Motor
{

public:
	Motor();
	virtual ~Motor();

	void displayMotor();
	void setMotorStatus(string status);
	void updateMotorInfo(string newType, string newBrand);

private:
	/**
	 * Possible values: "available", "booked"
	 */
	string bookingStatus;
	string motorBrand;
	string motorType;
	string plateNumber;
	double rentalPrice;

};
#endif // !defined(EA_9B7108F9_D99B_4cdb_ABA8_AA4B6EAA6247__INCLUDED_)
