/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140762fdc */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_140762fdc(void)

{
  undefined8 uVar1;
  uint unaff_retaddr;
  
  if (*(char *)((ulonglong)_DAT_150b00732 + 0xec + (ulonglong)unaff_retaddr) == '\x01') {
    uVar1 = FUN_14076bb6d();
    return uVar1;
  }
  return 0;
}

