/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140dd85b1 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140dd85b1(ulonglong param_1)

{
  uint uVar1;
  uint *puVar2;
  
  uVar1 = *(uint *)(((ulonglong)&stack0xfffffffffffffff8 & 0xffffffff) + 8);
  puVar2 = (uint *)(ulonglong)uVar1;
  if (uVar1 != 0) {
    uVar1 = *puVar2;
    if (uVar1 != _DAT_1412f33c6) {
      FUN_140dd41d0();
      param_1 = (ulonglong)uVar1;
    }
    uVar1 = puVar2[1];
    if (uVar1 != _DAT_1412f33dc) {
      FUN_140dd41d0(param_1);
      param_1 = (ulonglong)uVar1;
    }
    uVar1 = puVar2[2];
    if (uVar1 != _DAT_1412f33f2) {
      FUN_140dd41d0(param_1);
      param_1 = (ulonglong)uVar1;
    }
    uVar1 = puVar2[0xc];
    if (uVar1 != _DAT_1412f342c) {
      FUN_140dd41d0(param_1);
      param_1 = (ulonglong)uVar1;
    }
    if (puVar2[0xd] != _DAT_1412f3442) {
      FUN_140dd41d0(param_1);
    }
  }
  return;
}

