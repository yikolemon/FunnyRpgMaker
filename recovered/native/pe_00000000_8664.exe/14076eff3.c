/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14076eff3 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14076eff3(void)

{
  uint unaff_retaddr;
  
  *(undefined4 *)
   ((ulonglong)
    (uint)(*(int *)((ulonglong)_DAT_150b0c749 + 0x2050) * 8 +
          *(int *)((ulonglong)*(uint *)((ulonglong)_DAT_150b0c749 + 0x2048) + 0x3b8)) + 0x3ec +
   (ulonglong)unaff_retaddr * 4) = 0x7f7fffff;
  return;
}

