/*
 * cpu.cpp
 *
 *  Created on: Aug 20, 2017
 *      Author: Matty
 */




#include "cpu.h"


using namespace std;



CPU::CPU() {

}




void CPU::Start(char *rom) {
	//Load the game
	FILE *data;
	data = fopen(rom, "rb");



}



void CPU::Execute(WORD opcode) {
	switch(opcode) {
	case 0x00: BRK_00(); break;
	case 0x01: ORA_01(); break;
	//case 0x02: break;				//unused
	case 0x03: SLO_03(); break;
	case 0x04: NOP_04(); break;
	case 0x05: ORA_05(); break;
	case 0x06: ASL_06(); break;
	case 0x07: SLO_07(); break;
	case 0x08: PHP_08(); break;
	case 0x09: ORA_09(); break;
	case 0x0A: ASL_0a(); break;
	case 0x0B: ANC_0b(); break;
	case 0x0C: NOP_0c(); break;
	case 0x0D: ORA_0d(); break;
	case 0x0E: ASL_0e(); break;
	case 0x0F: SLO_0f(); break;

	case 0x10: BPL_10(); break;
	case 0x11: ORA_11(); break;
	//case 0x12: break;				//unused
	case 0x13: SLO_13(); break;
	case 0x14: NOP_14(); break;
	case 0x15: ORA_15(); break;
	case 0x16: ASL_16(); break;
	case 0x17: SLO_17(); break;
	case 0x18: CLC_18(); break;
	case 0x19: ORA_19(); break;
	case 0x1A: NOP_1a(); break;
	case 0x1B: SLO_1b(); break;
	case 0x1C: NOP_1c(); break;
	case 0x1D: ORA_1d(); break;
	case 0x1E: ASL_1e(); break;
	case 0x1F: SLO_1f(); break;

	case 0x20: JSR_20(); break;
	case 0x21: AND_21(); break;
	case 0x22: break;				//unused
	case 0x23: RLA_23(); break;
	case 0x24: BIT_24(); break;
	case 0x25: AND_25(); break;
	case 0x26: ROL_26(); break;
	case 0x27: RLA_27(); break;
	case 0x28: PLP_28(); break;
	case 0x29: AND_29(); break;
	case 0x2A: ROL_2a(); break;
	case 0x2B: ANC_2b(); break;
	case 0x2C: BIT_2c(); break;
	case 0x2D: AND_2d(); break;
	case 0x2E: ROL_2e(); break;
	case 0x2F: RLA_2f(); break;

	case 0x30: BMI_30(); break;
	case 0x31: AND_31(); break;
	case 0x32: break;				//unused
	case 0x33: RLA_33(); break;
	case 0x34: NOP_34(); break;
	case 0x35: AND_35(); break;
	case 0x36: ROL_36(); break;
	case 0x37: RLA_37(); break;
	case 0x38: SEC_38(); break;
	case 0x39: AND_39(); break;
	case 0x3A: NOP_3a(); break;
	case 0x3B: RLA_3b(); break;
	case 0x3C: NOP_3c(); break;
	case 0x3D: AND_3d(); break;
	case 0x3E: ROL_3e(); break;
	case 0x3F: RLA_3f(); break;

	case 0x40: RTI_40(); break;
	case 0x41: EOR_41(); break;
	case 0x42: break;				//unused
	case 0x43: SRE_43(); break;
	case 0x44: NOP_44(); break;
	case 0x45: EOR_45(); break;
	case 0x46: LSR_46(); break;
	case 0x47: SRE_47(); break;
	case 0x48: PHA_48(); break;
	case 0x49: EOR_49(); break;
	case 0x4A: LSR_4a(); break;
	case 0x4B: ASR_4b(); break;
	case 0x4C: JMP_4c(); break;
	case 0x4D: EOR_4d(); break;
	case 0x4E: LSR_4e(); break;
	case 0x4F: SRE_4f(); break;

	case 0x50: BVC_50(); break;
	case 0x51: EOR_51(); break;
	case 0x52: break;				//unused
	case 0x53: RRA_53(); break;
	case 0x54: NOP_54(); break;
	case 0x55: EOR_55(); break;
	case 0x56: LSR_56(); break;
	case 0x57: SRE_57(); break;
	case 0x58: CLI_58(); break;
	case 0x59: EOR_59(); break;
	case 0x5A: NOP_5a(); break;
	case 0x5B: SRE_5b(); break;
	case 0x5C: NOP_5c(); break;
	case 0x5D: EOR_5d(); break;
	case 0x5E: LSR_5e(); break;
	case 0x5F: SRE_5f(); break;

	case 0x60: RTS_60(); break;
	case 0x61: ADC_61(); break;
	case 0x62: break;				//unused
	case 0x63: RRA_63(); break;
	case 0x64: NOP_64(); break;
	case 0x65: ADC_65(); break;
	case 0x66: ROR_66(); break;
	case 0x67: RRA_67(); break;
	case 0x68: PLA_68(); break;
	case 0x69: ADC_69(); break;
	case 0x6A: ROR_6a(); break;
	case 0x6B: ARR_6b(); break;
	case 0x6C: JMP_6c(); break;
	case 0x6D: ADC_6d(); break;
	case 0x6E: ROR_6e(); break;
	case 0x6F: RRA_6f(); break;

	case 0x70: BVS_70(); break;
	case 0x71: ADC_71(); break;
	case 0x72: break;				//unused
	case 0x73: RRA_73(); break;
	case 0x74: NOP_74(); break;
	case 0x75: ADC_75(); break;
	case 0x76: ROR_76(); break;
	case 0x77: RRA_77(); break;
	case 0x78: SEI_78(); break;
	case 0x79: ADC_79(); break;
	case 0x7A: NOP_7a(); break;
	case 0x7B: RRA_7b(); break;
	case 0x7C: NOP_7c(); break;
	case 0x7D: ADC_7d(); break;
	case 0x7E: ROR_7e(); break;
	case 0x7F: RRA_7f(); break;

	case 0x80: NOP_80(); break;
	case 0x81: STA_81(); break;
	case 0x82: NOP_82(); break;
	case 0x83: SAX_83(); break;
	case 0x84: STY_84(); break;
	case 0x85: STA_85(); break;
	case 0x86: STX_86(); break;
	case 0x87: SAX_87(); break;
	case 0x88: DEY_88(); break;
	case 0x89: NOP_89(); break;
	case 0x8A: TXA_8a(); break;
	case 0x8B: ANE_8b(); break;
	case 0x8C: STY_8c(); break;
	case 0x8D: STA_8d(); break;
	case 0x8E: STX_8e(); break;
	case 0x8F: SAX_8f(); break;

	case 0x90: BCC_90(); break;
	case 0x91: STA_91(); break;
	case 0x92: break;				//unused
	case 0x93: SHA_93(); break;
	case 0x94: STY_94(); break;
	case 0x95: STA_95(); break;
	case 0x96: STX_96(); break;
	case 0x97: SAX_97(); break;
	case 0x98: TYA_98(); break;
	case 0x99: STA_99(); break;
	case 0x9A: TXS_9a(); break;
	case 0x9B: SHS_9b(); break;
	case 0x9C: SHY_9c(); break;
	case 0x9D: STA_9d(); break;
	case 0x9E: SHX_9e(); break;
	case 0x9F: SHA_9f(); break;

	case 0xA0: LDY_a0(); break;
	case 0xA1: LDA_a1(); break;
	case 0xA2: LDX_a2(); break;
	case 0xA3: LAX_a3(); break;
	case 0xA4: LDY_a4(); break;
	case 0xA5: LDA_a5(); break;
	case 0xA6: LDX_a6(); break;
	case 0xA7: LAX_a7(); break;
	case 0xA8: TAY_a8(); break;
	case 0xA9: LDA_a9(); break;
	case 0xAA: TAX_aa(); break;
	case 0xAB: LXA_ab(); break;
	case 0xAC: LDY_ac(); break;
	case 0xAD: LDA_ad(); break;
	case 0xAE: LDX_ae(); break;
	case 0xAF: LAX_af(); break;

	case 0xB0: BCS_b0(); break;
	case 0xB1: LDA_b1(); break;
	case 0xB2: break;				//unused
	case 0xB3: LAX_b3(); break;
	case 0xB4: LDY_b4(); break;
	case 0xB5: LDA_b5(); break;
	case 0xB6: LDX_b6(); break;
	case 0xB7: LAX_b7(); break;
	case 0xB8: CLV_b8(); break;
	case 0xB9: LDA_b9(); break;
	case 0xBA: TSX_ba(); break;
	case 0xBB: LAS_bb(); break;
	case 0xBC: LDY_bc(); break;
	case 0xBD: LDA_bd(); break;
	case 0xBE: LDX_be(); break;
	case 0xBF: LAX_bf(); break;

	case 0xC0: CPY_c0(); break;
	case 0xC1: CMP_c1(); break;
	case 0xC2: NOP_c2(); break;				//unused
	case 0xC3: DCP_c3(); break;
	case 0xC4: CPY_c4(); break;
	case 0xC5: CMP_c5(); break;
	case 0xC6: DEC_c6(); break;
	case 0xC7: DCP_c7(); break;
	case 0xC8: INY_c8(); break;
	case 0xC9: CMP_c9(); break;
	case 0xCA: DEX_ca(); break;
	case 0xCB: SBX_cb(); break;
	case 0xCC: CPY_cc(); break;
	case 0xCD: CMP_cd(); break;
	case 0xCE: DEC_ce(); break;
	case 0xCF: DCP_cf(); break;

	case 0xD0: BNE_d0(); break;
	case 0xD1: CMP_d1(); break;
	case 0xD2: break;				//unused
	case 0xD3: DCP_d3(); break;
	case 0xD4: NOP_d4(); break;
	case 0xD5: CMP_d5(); break;
	case 0xD6: DEC_d6(); break;
	case 0xD7: DCP_d7(); break;
	case 0xD8: CLD_d8(); break;
	case 0xD9: CMP_d9(); break;
	case 0xDA: NOP_da(); break;
	case 0xDB: DCP_db(); break;
	case 0xDC: NOP_dc(); break;
	case 0xDD: CMP_dd(); break;
	case 0xDE: DEC_de(); break;
	case 0xDF: DCP_df(); break;

	case 0xE0: CPX_e0(); break;
	case 0xE1: SBC_e1(); break;
	case 0xE2: NOP_e2(); break;				//unused
	case 0xE3: ISB_e3(); break;
	case 0xE4: CPX_e4(); break;
	case 0xE5: SBC_e5(); break;
	case 0xE6: INC_e6(); break;
	case 0xE7: ISB_e7(); break;
	case 0xE8: INX_e8(); break;
	case 0xE9: SBC_e9(); break;
	case 0xEA: NOP_ea(); break;
	case 0xEB: SBC_eb(); break;
	case 0xEC: NOP_ec(); break;
	case 0xED: SBC_ed(); break;
	case 0xEE: INC_ee(); break;
	case 0xEF: ISB_ef(); break;

	case 0xF0: BEQ_f0(); break;
	case 0xF1: SBC_f1(); break;
	case 0xF2: break;				//unused
	case 0xF3: ISB_f3(); break;
	case 0xF4: NOP_f4(); break;
	case 0xF5: SBC_f5(); break;
	case 0xF6: INC_f6(); break;
	case 0xF7: ISB_f7(); break;
	case 0xF8: SED_f8(); break;
	case 0xF9: SBC_f9(); break;
	case 0xFA: NOP_fa(); break;
	case 0xFB: ISB_fb(); break;
	case 0xFC: NOP_fc(); break;
	case 0xFD: SBC_fd(); break;
	case 0xFE: INC_fe(); break;
	case 0xFF: ISB_ff(); break;

	default:
		cout << "Invalid OP code: " << opcode << endl;
	}
}
