/*
 * cartridge.cpp
 *
 *  Created on: Aug 24, 2017
 *      Author: Matty
 */

#include "cartridge.h"

#define PRG_ROM_BANKS 		header[4]
#define CHR_ROM_BANKS 		header[5]
#define ROM_CONTROL_BYTE_1 	header[6]
#define ROM_CONTROL_BYTE_2 	header[7]


void CARTRIDGE::Load(char *romName) {
	int i, size, mapperNo;
	FILE *romFile;

	//Read data from ROM
	romFile = fopen(romName, "rb");
	fseek(romFile, 0, SEEK_END);
	size = ftell(romFile);
	fseek(romFile, 0, SEEK_END);

	BYTE *rom = new BYTE[size];
	fread(rom, size, 1, romFile);
	fclose(romFile);


	mapperNo = (rom[7] & 0xF0) | (rom[6] >> 4);
	switch(mapperNo) {
	case 0:
	}
}


