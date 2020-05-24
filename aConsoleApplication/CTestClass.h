#pragma once
#include <cstdint>
#include <cstdio>

typedef enum {
	StateOFF,
	StateInit,
	StateReady,
	StateError
}FinitStateMachine_t;

typedef union {
	typedef struct{
		uint8_t	ExampleStructVar1;
		uint8_t	ExampleStructVar2;
	}ExampleStruct_t;
	uint8_t ExampleUnionVar[2];
}ExampleStructAndUnion_t;

class CTestClass
{
public:
	//Only functions, never variables!
	CTestClass(); // Parameters follow naming rule: camelName
	~CTestClass();

	int		DoSomething(void);		// Naming rule: CamelName
	bool	DoSomethingMore(void);

	//Getter - Accessor
	//const int	PrivateVariable() const;//which one?
	const int	PrivateVariable();
	//Setter - Mutator
	void		PrivateVariable(int value);

protected:
	int		m_Variable;
	bool	m_AnotherVariable;
	char*	m_Name;

	ExampleStructAndUnion_t	m_ExampleStructUnion;

private:
	int		m_PrivateVariable;
};

