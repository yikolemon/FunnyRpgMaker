/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1407709fb */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_1407709fb(void)

{
  ulonglong uVar1;
  uint unaff_retaddr;
  
  if (*(int *)((ulonglong)unaff_retaddr + 0x2e4) != -1) {
    return (ulonglong)
           (uint)(*(int *)((ulonglong)unaff_retaddr + 0x2e4) +
                 *(int *)((ulonglong)_DAT_150b0e15c + 0x26f0));
  }
  uVar1 = FUN_1407709bb();
  return uVar1;
}

