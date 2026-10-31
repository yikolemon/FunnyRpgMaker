/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 140024f03 */

int FUN_140024f03(double *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = FUN_140024f45(*param_1);
  iVar2 = FUN_140024f45(param_1[1]);
  iVar3 = FUN_140024f45(param_1[2]);
  return iVar3 + (iVar2 << 8 | iVar1 << 0x10) + -0x1000000;
}

