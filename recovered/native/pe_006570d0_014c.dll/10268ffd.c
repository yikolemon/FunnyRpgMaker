/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10268ffd */

undefined * FUN_10268ffd(void)

{
  int iVar1;
  undefined *puVar2;
  
  iVar1 = FUN_1027441e();
  puVar2 = &DAT_1039b370;
  if (iVar1 != 0) {
    puVar2 = (undefined *)(iVar1 + 0x10);
  }
  return puVar2;
}

