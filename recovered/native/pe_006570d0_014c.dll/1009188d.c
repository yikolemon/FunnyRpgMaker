/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1009188d */

void FUN_1009188d(int *param_1,int *param_2,short param_3)

{
  int iVar1;
  
  iVar1 = *param_2 - *param_1 >> 1;
  if (param_3 <= iVar1) {
    iVar1 = (int)param_3;
  }
  *param_1 = *param_1 + iVar1 * 2;
  return;
}

