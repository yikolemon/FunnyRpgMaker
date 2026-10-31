/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10269012 */

undefined * FUN_10269012(void)

{
  int iVar1;
  undefined *puVar2;
  
  iVar1 = FUN_1027441e();
  puVar2 = &DAT_1039b374;
  if (iVar1 != 0) {
    puVar2 = (undefined *)(iVar1 + 0x14);
  }
  return puVar2;
}

