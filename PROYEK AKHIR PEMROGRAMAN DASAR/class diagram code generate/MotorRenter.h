///////////////////////////////////////////////////////////
//  MotorRenter.h
//  Implementation of the Class MotorRenter
//  Created on:      02-Dec-2025 12:13:58
//  Original author: HP
///////////////////////////////////////////////////////////

#if !defined(EA_D72D18A7_0B25_458c_B46C_29F33FC8281A__INCLUDED_)
#define EA_D72D18A7_0B25_458c_B46C_29F33FC8281A__INCLUDED_

class MotorRenter
{

public:
	MotorRenter();
	virtual ~MotorRenter();

	void displayInfo();
	bool login(string password, string email);

private:
	string email;
	int idRenter;
	string nameRenter;
	string password;

};
#endif // !defined(EA_D72D18A7_0B25_458c_B46C_29F33FC8281A__INCLUDED_)
