/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14076be03 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_14076be03(void)

{
  undefined8 uVar1;
  uint unaff_retaddr;
  
  if (*(char *)((ulonglong)_DAT_150b09559 + 0xb36 + (ulonglong)unaff_retaddr) == '\x01') {
    uVar1 = FUN_14076bb6d();
    return uVar1;
  }
  return 0;
}

