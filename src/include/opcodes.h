/*
 * opcodes.h
 *
 *  Created on: Aug 20, 2017
 *      Author: Matty
 */

#ifndef OPCODES_H_
#define OPCODES_H_

void BRK_00();
void ORA_01();
void SLO_03();
void NOP_04();
void ORA_05();
void ASL_06();
void SLO_07();
void PHP_08();
void ORA_09();
void ASL_0a();
void ANC_0b();
void NOP_0c();
void ORA_0d();
void ASL_0e();
void SLO_0f();

void BPL_10();
void ORA_11();
void SLO_13();
void NOP_14();
void ORA_15();
void ASL_16();
void SLO_17();
void CLC_18();
void ORA_19();
void NOP_1a();
void SLO_1b();
void NOP_1c();
void ORA_1d();
void ASL_1e();
void SLO_1f();

void JSR_20();
void AND_21();
void RLA_23();
void BIT_24();
void AND_25();
void ROL_26();
void RLA_27();
void PLP_28();
void AND_29();
void ROL_2a();
void ANC_2b();
void BIT_2c();
void AND_2d();
void ROL_2e();
void RLA_2f();

void BMI_30();
void AND_31();
void RLA_33();
void NOP_34();
void AND_35();
void ROL_36();
void RLA_37();
void SEC_38();
void AND_39();
void NOP_3a();
void RLA_3b();
void NOP_3c();
void AND_3d();
void ROL_3e();
void RLA_3f();

void RTI_40();
void EOR_41();
void SRE_43();
void NOP_44();
void EOR_45();
void LSR_46();
void SRE_47();
void PHA_48();
void EOR_49();
void LSR_4a();
void ASR_4b();
void JMP_4c();
void EOR_4d();
void LSR_4e();
void SRE_4f();

void BVC_50();
void EOR_51();
void RRA_53();
void NOP_54();
void EOR_55();
void LSR_56();
void SRE_57();
void CLI_58();
void EOR_59();
void NOP_5a();
void SRE_5b();
void NOP_5c();
void EOR_5d();
void LSR_5e();
void SRE_5f();

void RTS_60();
void ADC_61();
void RRA_63();
void NOP_64();
void ADC_65();
void ROR_66();
void RRA_67();
void PLA_68();
void ADC_69();
void ROR_6a();
void ARR_6b();
void JMP_6c();
void ADC_6d();
void ROR_6e();
void RRA_6f();

void BVS_70();
void ADC_71();
void RRA_73();
void NOP_74();
void ADC_75();
void ROR_76();
void RRA_77();
void SEI_78();
void ADC_79();
void NOP_7a();
void RRA_7b();
void NOP_7c();
void ADC_7d();
void ROR_7e();
void RRA_7f();

void NOP_80();
void STA_81();
void NOP_82();
void SAX_83();
void STY_84();
void STA_85();
void STX_86();
void SAX_87();
void DEY_88();
void NOP_89();
void TXA_8a();
void ANE_8b();
void STY_8c();
void STA_8d();
void STX_8e();
void SAX_8f();

void BCC_90();
void STA_91();
void SHA_93();
void STY_94();
void STA_95();
void STX_96();
void SAX_97();
void TYA_98();
void STA_99();
void TXS_9a();
void SHS_9b();
void SHY_9c();
void STA_9d();
void SHX_9e();
void SHA_9f();

void LDY_a0();
void LDA_a1();
void LDX_a2();
void LAX_a3();
void LDY_a4();
void LDA_a5();
void LDX_a6();
void LAX_a7();
void TAY_a8();
void LDA_a9();
void TAX_aa();
void LXA_ab();
void LDY_ac();
void LDA_ad();
void LDX_ae();
void LAX_af();

void BCS_b0();
void LDA_b1();
void LAX_b3();
void LDY_b4();
void LDA_b5();
void LDX_b6();
void LAX_b7();
void CLV_b8();
void LDA_b9();
void TSX_ba();
void LAS_bb();
void LDY_bc();
void LDA_bd();
void LDX_be();
void LAX_bf();

void CPY_c0();
void CMP_c1();
void NOP_c2();
void DCP_c3();
void CPY_c4();
void CMP_c5();
void DEC_c6();
void DCP_c7();
void INY_c8();
void CMP_c9();
void DEX_ca();
void SBX_cb();
void CPY_cc();
void CMP_cd();
void DEC_ce();
void DCP_cf();

void BNE_d0();
void CMP_d1();
void DCP_d3();
void NOP_d4();
void CMP_d5();
void DEC_d6();
void DCP_d7();
void CLD_d8();
void CMP_d9();
void NOP_da();
void DCP_db();
void NOP_dc();
void CMP_dd();
void DEC_de();
void DCP_df();

void CPX_e0();
void SBC_e1();
void NOP_e2();
void ISB_e3();
void CPX_e4();
void SBC_e5();
void INC_e6();
void ISB_e7();
void INX_e8();
void SBC_e9();
void NOP_ea();
void SBC_eb();
void NOP_ec();
void SBC_ed();
void INC_ee();
void ISB_ef();

void BEQ_f0();
void SBC_f1();
void ISB_f3();
void NOP_f4();
void SBC_f5();
void INC_f6();
void ISB_f7();
void SED_f8();
void SBC_f9();
void NOP_fa();
void ISB_fb();
void NOP_fc();
void SBC_fd();
void INC_fe();
void ISB_ff();

#endif /* OPCODES_H_ */
