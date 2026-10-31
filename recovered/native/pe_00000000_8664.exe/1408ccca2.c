/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1408ccca2 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1408ccca2(void)

{
  uint uVar1;
  
  uVar1 = FUN_1408cd148();
  if (uVar1 == 0) {
    FUN_1408db3ef();
  }
  else {
    (*_DAT_150c2a4d1)((code *)(ulonglong)uVar1);
    (*(code *)(ulonglong)uVar1)();
  }
  return;
}

