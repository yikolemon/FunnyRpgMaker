/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1801774e1 */

uint FUN_1801774e1(undefined8 param_1)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = FUN_180177505();
  uVar2 = FUN_180177505(param_1);
  return uVar2 | iVar1 << 0x10;
}

