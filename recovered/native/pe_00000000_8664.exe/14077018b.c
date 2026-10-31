/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14077018b */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_14077018b(void)

{
  int iVar1;
  
  iVar1 = 0;
  if (*(char *)((ulonglong)_DAT_150b0d8dd + 0x2250) == '\x01') {
    iVar1 = 0;
    if (*(int *)((ulonglong)_DAT_150b0d8dd + 0x2270) != -1) {
      iVar1 = _DAT_150b0d8dd + 0x2260;
    }
  }
  return iVar1;
}

