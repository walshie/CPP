//============================================================================
// Name        : Access.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

class Access
{
	int m_nA;					// private by default
	int GetA() {return m_nA;}

private:
	int m_nB;
	int GetB() {return m_nB;}

protected:
	int m_nC;
	int GetC() {return m_nC;}

public:
	int m_nD;
	int GetD() {return m_nD;}

};


int main() {

	Access cAccess;
/*	cAccess.m_nA = 10;
	cout << cAccess.GetA() << endl;

	cAccess.m_nB = 15;
	cout << cAccess.GetB() << endl;

	cAccess.m_nC = 25;
	cout << cAccess.GetC() << endl;*/

	cAccess.m_nD = 5;
	cout << cAccess.GetD() << endl;




	return 0;
}
