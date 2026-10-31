/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1408d31c8 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1408d31c8(ulonglong param_1)

{
  uint uVar1;
  ulonglong uVar2;
  
  uVar1 = *(uint *)(((ulonglong)&stack0xfffffffffffffff8 & 0xffffffff) + 8);
  uVar2 = (ulonglong)uVar1;
  if (uVar1 != 0) {
    uVar1 = *(uint *)(uVar2 + 0xc);
    if (uVar1 != _DAT_150c6e56e) {
      FUN_1408cbff0();
      param_1 = (ulonglong)uVar1;
    }
    uVar1 = *(uint *)(uVar2 + 0x10);
    if (uVar1 != _DAT_150c6e584) {
      FUN_1408cbff0(param_1);
      param_1 = (ulonglong)uVar1;
    }
    uVar1 = *(uint *)(uVar2 + 0x14);
    if (uVar1 != _DAT_150c6e59a) {
      FUN_1408cbff0(param_1);
      param_1 = (ulonglong)uVar1;
    }
    uVar1 = *(uint *)(uVar2 + 0x18);
    if (uVar1 != _DAT_150c6e5b0) {
      FUN_1408cbff0(param_1);
      param_1 = (ulonglong)uVar1;
    }
    uVar1 = *(uint *)(uVar2 + 0x1c);
    if (uVar1 != _DAT_150c6e5c6) {
      FUN_1408cbff0(param_1);
      param_1 = (ulonglong)uVar1;
    }
    uVar1 = *(uint *)(uVar2 + 0x20);
    if (uVar1 != _DAT_150c6e5dc) {
      FUN_1408cbff0(param_1);
      param_1 = (ulonglong)uVar1;
    }
    uVar1 = *(uint *)(uVar2 + 0x24);
    if (uVar1 != _DAT_150c6e5f2) {
      FUN_1408cbff0(param_1);
      param_1 = (ulonglong)uVar1;
    }
    uVar1 = *(uint *)(uVar2 + 0x38);
    if (uVar1 != _DAT_150c6e618) {
      FUN_1408cbff0(param_1);
      param_1 = (ulonglong)uVar1;
    }
    uVar1 = *(uint *)(uVar2 + 0x3c);
    if (uVar1 != _DAT_150c6e62e) {
      FUN_1408cbff0(param_1);
      param_1 = (ulonglong)uVar1;
    }
    uVar1 = *(uint *)(uVar2 + 0x40);
    if (uVar1 != _DAT_150c6e644) {
      FUN_1408cbff0(param_1);
      param_1 = (ulonglong)uVar1;
    }
    uVar1 = *(uint *)(uVar2 + 0x44);
    if (uVar1 != _DAT_150c6e65a) {
      FUN_1408cbff0(param_1);
      param_1 = (ulonglong)uVar1;
    }
    uVar1 = *(uint *)(uVar2 + 0x48);
    if (uVar1 != _DAT_150c6e670) {
      FUN_1408cbff0(param_1);
      param_1 = (ulonglong)uVar1;
    }
    if (*(int *)(uVar2 + 0x4c) != _DAT_150c6e686) {
      FUN_1408cbff0(param_1);
    }
  }
  return;
}

