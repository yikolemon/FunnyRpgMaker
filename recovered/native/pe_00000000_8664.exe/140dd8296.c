/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140dd8296 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140dd8296(ulonglong param_1)

{
  uint uVar1;
  ulonglong uVar2;
  
  uVar1 = *(uint *)(((ulonglong)&stack0xfffffffffffffff8 & 0xffffffff) + 8);
  uVar2 = (ulonglong)uVar1;
  if (uVar1 != 0) {
    uVar1 = *(uint *)(uVar2 + 0xc);
    if (uVar1 != _DAT_1412f30bc) {
      FUN_140dd41d0();
      param_1 = (ulonglong)uVar1;
    }
    uVar1 = *(uint *)(uVar2 + 0x10);
    if (uVar1 != _DAT_1412f30d2) {
      FUN_140dd41d0(param_1);
      param_1 = (ulonglong)uVar1;
    }
    uVar1 = *(uint *)(uVar2 + 0x14);
    if (uVar1 != _DAT_1412f30e8) {
      FUN_140dd41d0(param_1);
      param_1 = (ulonglong)uVar1;
    }
    uVar1 = *(uint *)(uVar2 + 0x18);
    if (uVar1 != _DAT_1412f30fe) {
      FUN_140dd41d0(param_1);
      param_1 = (ulonglong)uVar1;
    }
    uVar1 = *(uint *)(uVar2 + 0x1c);
    if (uVar1 != _DAT_1412f3114) {
      FUN_140dd41d0(param_1);
      param_1 = (ulonglong)uVar1;
    }
    uVar1 = *(uint *)(uVar2 + 0x20);
    if (uVar1 != _DAT_1412f312a) {
      FUN_140dd41d0(param_1);
      param_1 = (ulonglong)uVar1;
    }
    uVar1 = *(uint *)(uVar2 + 0x24);
    if (uVar1 != _DAT_1412f3140) {
      FUN_140dd41d0(param_1);
      param_1 = (ulonglong)uVar1;
    }
    uVar1 = *(uint *)(uVar2 + 0x38);
    if (uVar1 != _DAT_1412f3166) {
      FUN_140dd41d0(param_1);
      param_1 = (ulonglong)uVar1;
    }
    uVar1 = *(uint *)(uVar2 + 0x3c);
    if (uVar1 != _DAT_1412f317c) {
      FUN_140dd41d0(param_1);
      param_1 = (ulonglong)uVar1;
    }
    uVar1 = *(uint *)(uVar2 + 0x40);
    if (uVar1 != _DAT_1412f3192) {
      FUN_140dd41d0(param_1);
      param_1 = (ulonglong)uVar1;
    }
    uVar1 = *(uint *)(uVar2 + 0x44);
    if (uVar1 != _DAT_1412f31a8) {
      FUN_140dd41d0(param_1);
      param_1 = (ulonglong)uVar1;
    }
    uVar1 = *(uint *)(uVar2 + 0x48);
    if (uVar1 != _DAT_1412f31be) {
      FUN_140dd41d0(param_1);
      param_1 = (ulonglong)uVar1;
    }
    if (*(int *)(uVar2 + 0x4c) != _DAT_1412f31d4) {
      FUN_140dd41d0(param_1);
    }
  }
  return;
}

