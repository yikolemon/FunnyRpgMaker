/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1018d438 */

void __thiscall FUN_1018d438(int *param_1,undefined4 param_2,int param_3,int param_4)

{
  int iVar1;
  
  iVar1 = 2;
  if (2 < param_3) {
    iVar1 = param_3;
  }
  *param_1 = iVar1 + -2;
  param_1[1] = param_4;
  param_4 = param_4 + param_3 * 0x18;
  param_1[2] = param_4;
  param_1[4] = param_4 + param_3 * 4;
  FUN_1018d486(param_2,param_3);
  FUN_1018d4f4();
  FUN_1018d564();
  return;
}

