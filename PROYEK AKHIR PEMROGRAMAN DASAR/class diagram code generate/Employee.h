///////////////////////////////////////////////////////////
//  Employee.h
//  Implementation of the Class Employee
//  Created on:      02-Dec-2025 12:14:04
//  Original author: HP
///////////////////////////////////////////////////////////

#if !defined(EA_F315E1A7_8CA8_404d_9036_D6F3962F2776__INCLUDED_)
#define EA_F315E1A7_8CA8_404d_9036_D6F3962F2776__INCLUDED_

class Employee
{

public:
	Employee();
	virtual ~Employee();

	void generateInvoice();
	void login();
	void manageMotorData(List<Motor> motors);

private:
	int id;
	bool loggedIn;
	string name;
	string role;

};
#endif // !defined(EA_F315E1A7_8CA8_404d_9036_D6F3962F2776__INCLUDED_)
