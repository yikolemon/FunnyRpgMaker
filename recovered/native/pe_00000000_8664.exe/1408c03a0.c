/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1408c03a0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_1408c03a0(void)

{
  uint uVar1;
  int iVar2;
  bool bVar3;
  
  uVar1 = FUN_1408c0400();
  if (uVar1 == 0) {
    bVar3 = false;
  }
  else {
    (*_DAT_150c1dbcc)((code *)(ulonglong)uVar1);
    iVar2 = (*(code *)(ulonglong)uVar1)();
    bVar3 = iVar2 != 0;
  }
  return bVar3;
}

