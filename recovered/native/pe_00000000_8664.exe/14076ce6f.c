/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14076ce6f */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14076ce6f(void)

{
  uint unaff_retaddr;
  
  *(undefined8 *)(ulonglong)unaff_retaddr =
       *(undefined8 *)((ulonglong)*(uint *)((ulonglong)_DAT_150b0a5c5 + 0x14cc) + 0x144);
  return;
}

