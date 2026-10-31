/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1408d66d0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1408d66d0(void)

{
  uint uVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  undefined8 unaff_RSI;
  
  uVar2 = (ulonglong)&stack0xfffffffffffffff8 & 0xffffffff;
  uVar4 = (ulonglong)((int)&stack0xfffffffffffffff8 - 0x14);
  *(undefined8 *)(uVar4 - 8) = unaff_RSI;
  uVar1 = *(uint *)(uVar2 + 8);
  if (uVar1 == 0xfffffffe) {
    uVar2 = (ulonglong)*(uint *)(uVar2 + 0xc);
    *(undefined4 *)(uVar2 + 0x20) = 0;
    *(undefined1 *)(uVar2 + 0x24) = 1;
    *(undefined1 *)(uVar2 + 0x1c) = 1;
    *(undefined4 *)(uVar2 + 0x18) = 9;
  }
  else {
    if (((-1 < (int)uVar1) && (uVar1 < _DAT_150c7bb33)) &&
       ((*(byte *)((ulonglong)*(uint *)((ulonglong)(uint)((int)uVar1 >> 6) * 4 + 0x103a5230) + 0x28
                  + (ulonglong)((uVar1 & 0x3f) * 0x38)) & 1) != 0)) {
      *(uint *)(uVar2 - 8) = uVar1;
      *(int *)(uVar2 - 0x14) = (int)&stack0xfffffffffffffff8 + 8;
      *(undefined4 *)(uVar2 - 0x10) = *(undefined4 *)(uVar2 + 0xc);
      *(ulonglong *)(uVar4 - 0x10) = (ulonglong)((int)&stack0xfffffffffffffff8 - 8);
      *(uint *)(uVar2 - 0xc) = uVar1;
      *(ulonglong *)(uVar4 - 0x18) = (ulonglong)((int)&stack0xfffffffffffffff8 - 0x14);
      *(ulonglong *)(uVar4 - 0x20) = (ulonglong)((int)&stack0xfffffffffffffff8 - 0xc);
      *(undefined8 *)(uVar4 - 0x28) = 0x1408d6746;
      uVar3 = FUN_1408d6773((int)&stack0xfffffffffffffff8 + -1);
      return uVar3;
    }
    uVar2 = (ulonglong)*(uint *)(uVar2 + 0xc);
    *(ulonglong *)(uVar4 - 0x10) = uVar2;
    *(undefined8 *)(uVar4 - 0x18) = 0;
    *(undefined8 *)(uVar4 - 0x20) = 0;
    *(undefined8 *)(uVar4 - 0x28) = 0;
    *(undefined1 *)(uVar2 + 0x24) = 1;
    *(undefined8 *)(uVar4 - 0x30) = 0;
    *(undefined4 *)(uVar2 + 0x20) = 0;
    *(undefined1 *)(uVar2 + 0x1c) = 1;
    *(undefined8 *)(uVar4 - 0x38) = 0;
    *(undefined4 *)(uVar2 + 0x18) = 9;
    *(undefined8 *)(uVar4 - 0x40) = 0x1408d676a;
    FUN_1408cbf04();
  }
  return 0xffffffff;
}

