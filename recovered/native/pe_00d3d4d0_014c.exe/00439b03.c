/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 00439b03 */

void __fastcall FUN_00439b03(int param_1,int *param_2)

{
  *param_2 = (int)*(short *)(param_1 + 0xf8);
  param_2[1] = (int)*(short *)(param_1 + 0xfa);
  return;
}

