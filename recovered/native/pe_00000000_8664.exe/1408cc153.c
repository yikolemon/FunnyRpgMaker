/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1408cc153 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1408cc153(void)

{
  uint uVar1;
  bool bVar2;
  ulonglong uVar3;
  
  uVar3 = (ulonglong)&stack0xfffffffffffffff8 & 0xffffffff;
  if ((*(int *)(uVar3 + 8) == 65000) || (*(int *)(uVar3 + 8) == 0xfde9)) {
    bVar2 = true;
  }
  else {
    bVar2 = false;
  }
  FUN_1408cc1bd();
  uVar1 = *(uint *)(uVar3 + 0x24);
  *(undefined4 *)(uVar3 - 4) = 0;
  if ((bVar2) && (uVar1 != 0)) {
    *(undefined4 *)(ulonglong)uVar1 = 0;
  }
  (*_DAT_150c2a2c8)();
  return;
}

