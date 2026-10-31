/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1018058c */

undefined8 * __fastcall FUN_1018058c(undefined8 *param_1,undefined8 *param_2)

{
  undefined4 in_XMM0_Da;
  undefined4 in_XMM1_Da;
  undefined4 in_XMM2_Da;
  
  FUN_1018e2b2();
  *param_1 = *param_2;
  *(undefined4 *)(param_1 + 0xd) = in_XMM1_Da;
  *(undefined4 *)(param_1 + 0xc) = in_XMM2_Da;
  *(undefined4 *)(param_1 + 7) = 0x41a00000;
  *(undefined4 *)(param_1 + 9) = in_XMM0_Da;
  return param_1;
}

