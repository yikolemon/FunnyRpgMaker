/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1408ccc06 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1408ccc06(void)

{
  uint uVar1;
  
  uVar1 = FUN_1408cd0f2();
  if (uVar1 == 0) {
    FUN_1408ccca2();
    (*_DAT_150c2ac9a)();
  }
  else {
    (*_DAT_150c2a44a)((code *)(ulonglong)uVar1);
    (*(code *)(ulonglong)uVar1)();
  }
  return;
}

