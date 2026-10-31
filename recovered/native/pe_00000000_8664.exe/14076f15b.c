/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14076f15b */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14076f15b(void)

{
  ulonglong uVar1;
  bool bVar2;
  
  uVar1 = (ulonglong)*(uint *)((ulonglong)_DAT_150b0c8ad + 0x14cc);
  if (*(int *)((ulonglong)_DAT_150b0c8ad + 0x2308) == 0) {
    bVar2 = *(int *)(uVar1 + 0x1e8) == 0;
  }
  else {
    bVar2 = false;
  }
  *(bool *)(uVar1 + 0x1a4) = bVar2;
  return;
}

