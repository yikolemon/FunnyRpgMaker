/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180179168 */

uint FUN_180179168(undefined8 param_1)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = FUN_18017918c();
  iVar2 = FUN_18017918c(param_1);
  return iVar2 << 0x10 | uVar1;
}

