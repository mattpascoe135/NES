/*
 * cartridge.h
 *
 *  Created on: Aug 24, 2017
 *      Author: Matty
 */

#ifndef CARTRIDGE_H_
#define CARTRIDGE_H_

#include "cpu.h"
using namespace std;

//All sizes are in bytes
#define HEADER_SIZE 16
#define PRG_SIZE 0x4000
#define CHR_SIZE 0x2000
#define TITLE_SIZE 0x80

//Classes
class CARTRIDGE{
private:
	BYTE header[16];



public:
	CARTRIDGE();
	~CARTRIDGE();

	void Load(char *rom);




};



#endif /* CARTRIDGE_H_ */
