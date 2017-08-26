#ifndef CPU_H_
#define CPU_H_


//Defines
#define HEADER 16	//Size of the header in bytes

//Includes
#include <iostream>
#include <vector>
#include "opcodes.h"
using namespace std;


typedef unsigned short int WORD;
typedef unsigned char BYTE;

typedef struct {
	bool C;
	bool Z;
	bool I;
	bool D;
	bool B;
	bool s;
	bool V;
	bool N;
} flags_t;


//Classes
class CPU{
private:
	int cycles;
	BYTE stackPointer;

	BYTE registerA;
	BYTE registerX;
	BYTE registerY;

	vector<WORD>stack;

	flags_t flags;

public:
	CPU();
	~CPU();

	void Start();
	void Execute(WORD opcode);




};

#endif /* CPU_H_ */
