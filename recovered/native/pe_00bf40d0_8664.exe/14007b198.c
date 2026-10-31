/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 14007b198 */

int FUN_14007b198(int *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *param_1;
  iVar2 = param_1[1];
  FUN_14007b23e(param_2,iVar1 >> 6,iVar2 >> 6);
  param_2[0x10] = iVar1 * 4;
  param_2[0x11] = iVar2 * 4;
  return param_2[4];
}

