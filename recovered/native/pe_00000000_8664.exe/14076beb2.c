/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14076beb2 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14076beb2(void)

{
  uint unaff_retaddr;
  
  *(undefined8 *)(ulonglong)unaff_retaddr = *(undefined8 *)((ulonglong)_DAT_150b09608 + 0xe4);
  return;
}

