/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101e2393 */

void __fastcall FUN_101e2393(int param_1,int *param_2)

{
  *param_2 = (int)*(short *)(param_1 + 0xf8);
  param_2[1] = (int)*(short *)(param_1 + 0xfa);
  return;
}

