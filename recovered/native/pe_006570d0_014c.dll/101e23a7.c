/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101e23a7 */

void __fastcall FUN_101e23a7(int param_1,int *param_2)

{
  *param_2 = (int)*(short *)(param_1 + 0xfc);
  param_2[1] = (int)*(short *)(param_1 + 0xfe);
  return;
}

