/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1407bd01c */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1407bd01c(void)

{
  uint uVar1;
  undefined8 uVar2;
  
  uVar1 = _DAT_2308808b1039d74c;
  *(char *)(ulonglong)_DAT_2308808b1039d74c =
       *(char *)(ulonglong)_DAT_2308808b1039d74c + (char)_DAT_2308808b1039d74c;
  if (uVar1 != 0) {
    uVar2 = FUN_1407bd044();
    return uVar2;
  }
  return 0;
}

