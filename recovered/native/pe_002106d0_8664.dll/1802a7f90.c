/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1802a7f90 */

undefined8 FUN_1802a7f90(undefined8 *param_1,undefined8 param_2)

{
  undefined8 unaff_RBX;
  undefined8 unaff_RBP;
  undefined8 unaff_RSI;
  undefined8 unaff_RDI;
  undefined8 unaff_R12;
  undefined8 unaff_R13;
  undefined8 unaff_R14;
  undefined8 unaff_R15;
  undefined2 in_FPUControlWord;
  undefined8 unaff_XMM6_Qa;
  undefined8 unaff_XMM6_Qb;
  undefined8 unaff_XMM7_Qa;
  undefined8 unaff_XMM7_Qb;
  undefined8 unaff_XMM8_Qa;
  undefined8 unaff_XMM8_Qb;
  undefined8 unaff_XMM9_Qa;
  undefined8 unaff_XMM9_Qb;
  undefined8 unaff_XMM10_Qa;
  undefined8 unaff_XMM10_Qb;
  undefined8 unaff_XMM11_Qa;
  undefined8 unaff_XMM11_Qb;
  undefined8 unaff_XMM12_Qa;
  undefined8 unaff_XMM12_Qb;
  undefined8 unaff_XMM13_Qa;
  undefined8 unaff_XMM13_Qb;
  undefined8 unaff_XMM14_Qa;
  undefined8 unaff_XMM14_Qb;
  undefined8 unaff_XMM15_Qa;
  undefined8 unaff_XMM15_Qb;
  undefined8 unaff_retaddr;
  undefined1 local_res8 [32];
  
  *param_1 = param_2;
  param_1[1] = unaff_RBX;
  param_1[3] = unaff_RBP;
  param_1[4] = unaff_RSI;
  param_1[5] = unaff_RDI;
  param_1[6] = unaff_R12;
  param_1[7] = unaff_R13;
  param_1[8] = unaff_R14;
  param_1[9] = unaff_R15;
  param_1[2] = local_res8;
  param_1[10] = unaff_retaddr;
  *(undefined4 *)(param_1 + 0xb) = MXCSR;
  *(undefined2 *)((longlong)param_1 + 0x5c) = in_FPUControlWord;
  param_1[0xc] = unaff_XMM6_Qa;
  param_1[0xd] = unaff_XMM6_Qb;
  param_1[0xe] = unaff_XMM7_Qa;
  param_1[0xf] = unaff_XMM7_Qb;
  param_1[0x10] = unaff_XMM8_Qa;
  param_1[0x11] = unaff_XMM8_Qb;
  param_1[0x12] = unaff_XMM9_Qa;
  param_1[0x13] = unaff_XMM9_Qb;
  param_1[0x14] = unaff_XMM10_Qa;
  param_1[0x15] = unaff_XMM10_Qb;
  param_1[0x16] = unaff_XMM11_Qa;
  param_1[0x17] = unaff_XMM11_Qb;
  param_1[0x18] = unaff_XMM12_Qa;
  param_1[0x19] = unaff_XMM12_Qb;
  param_1[0x1a] = unaff_XMM13_Qa;
  param_1[0x1b] = unaff_XMM13_Qb;
  param_1[0x1c] = unaff_XMM14_Qa;
  param_1[0x1d] = unaff_XMM14_Qb;
  param_1[0x1e] = unaff_XMM15_Qa;
  param_1[0x1f] = unaff_XMM15_Qb;
  return 0;
}

