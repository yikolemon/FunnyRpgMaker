/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140dd45c4 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140dd45c4(ulonglong param_1)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  
  uVar3 = (ulonglong)*(uint *)(((ulonglong)&stack0xfffffffffffffff8 & 0xffffffff) + 8);
  if (*(int *)(uVar3 + 0x4c) != 0) {
    param_1 = *(ulonglong *)(uVar3 + 0x4c);
    FUN_140dd8e6c();
    uVar1 = *(uint *)(uVar3 + 0x4c);
    if (((uVar1 != _DAT_1412f6175) && (uVar1 != 0x51ae88)) &&
       (*(int *)((ulonglong)uVar1 + 0xc) == 0)) {
      FUN_140dd8eed(param_1);
      param_1 = (ulonglong)uVar1;
    }
  }
  iVar2 = *(int *)(((ulonglong)&stack0xfffffffffffffff8 & 0xffffffff) + 0xc);
  *(int *)(uVar3 + 0x4c) = iVar2;
  if (iVar2 != 0) {
    FUN_140dd8def(param_1);
  }
  return;
}

