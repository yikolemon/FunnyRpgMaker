/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140769b57 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140769b57(void)

{
  uint unaff_retaddr;
  
  *(undefined8 *)(ulonglong)unaff_retaddr =
       *(undefined8 *)((ulonglong)*(uint *)((ulonglong)_DAT_150b072ad + 0x14cc) + 0x50);
  return;
}

