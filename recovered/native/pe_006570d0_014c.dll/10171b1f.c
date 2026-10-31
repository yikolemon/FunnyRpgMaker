/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10171b1f */

uint FUN_10171b1f(void)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = FUN_10171b39();
  uVar2 = FUN_10171b39();
  return uVar2 | iVar1 << 0x10;
}

