/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1408c0f1a */

ulonglong FUN_1408c0f1a(void)

{
  uint uVar1;
  longlong lVar2;
  ulonglong uVar3;
  undefined1 *puVar4;
  ulonglong auStack_28 [3];
  
  uVar1 = *(uint *)(((ulonglong)&stack0xfffffffffffffff8 & 0xffffffff) + 8);
  auStack_28[0] = (ulonglong)uVar1;
  puVar4 = &stack0xfffffffffffffff0;
  if (uVar1 != 0) {
    if (uVar1 < 0xe) {
      return (ulonglong)*(uint *)(auStack_28[0] * 8 + 0x10324bb4);
    }
    puVar4 = &stack0xfffffffffffffff0;
    if (uVar1 < 0x719) {
      auStack_28[2] = 0x2d;
      auStack_28[1] = 0x10324bb8;
      lVar2 = FUN_1408c0f9d();
      puVar4 = (undefined1 *)(ulonglong)((int)auStack_28 + 0xc);
      if ((int)lVar2 != 0) {
        return (ulonglong)*(uint *)(lVar2 + 4);
      }
    }
  }
  if (uVar1 - 0x13 < 0x12) {
    *(undefined8 *)(puVar4 + -8) = 0xd;
    uVar3 = *(ulonglong *)(puVar4 + -8);
  }
  else {
    *(undefined8 *)(puVar4 + -8) = 0xe;
    uVar3 = (ulonglong)
            ((-(uint)((uint)*(undefined8 *)(puVar4 + -8) < uVar1 - 0xbc) &
             (uint)*(undefined8 *)(puVar4 + -8)) + 8);
  }
  return uVar3;
}

