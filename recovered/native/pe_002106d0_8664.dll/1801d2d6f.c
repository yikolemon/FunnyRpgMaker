/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1801d2d6f */

int FUN_1801d2d6f(undefined8 *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = FUN_1801d2db1(*param_1);
  iVar2 = FUN_1801d2db1(param_1[1]);
  iVar3 = FUN_1801d2db1(param_1[2]);
  return iVar3 + (iVar2 << 8 | iVar1 << 0x10) + -0x1000000;
}

