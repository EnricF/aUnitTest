#include "CTestClass.h"

const unsigned int DbMaxIndex = 9999; // for C++, in C a #define is OK

CTestClass::CTestClass()
{
	m_Variable			= 2;
	m_AnotherVariable	= true;

	m_PrivateVariable	= m_Variable * 2;

	m_Name = new (char[m_Variable]);

	m_ExampleStructUnion.ExampleUnionVar[0] = 2;
	m_ExampleStructUnion.ExampleUnionVar[0] = 4;
}

CTestClass::~CTestClass()
{
	delete m_Name;
}

int CTestClass::DoSomething()
{
	m_Variable			*= 3;
	m_PrivateVariable	= m_Variable * 2;

	return m_PrivateVariable;
}

bool CTestClass::DoSomethingMore()
{
	return !m_AnotherVariable;
}