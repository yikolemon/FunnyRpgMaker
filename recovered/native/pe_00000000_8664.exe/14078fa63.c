/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14078fa63 */

byte FUN_14078fa63(uint param_1,uint param_2)

{
  byte bVar1;
  int iVar2;
  ulonglong unaff_RBX;
  undefined1 *puVar3;
  ulonglong uStack_30;
  ulonglong uStack_28;
  ulonglong uStack_20;
  uint uVar4;
  
  if ((param_1 >> 9 & 1) == 0) {
    return 0;
  }
  puVar3 = &stack0xffffffffffffffe8;
  uVar4 = (uint)(unaff_RBX >> 0x20);
  iVar2 = (int)unaff_RBX;
  if (iVar2 == 0 && uVar4 == 0) {
LAB_14078faa0:
    bVar1 = 0;
  }
  else {
    if (iVar2 == 0 || uVar4 == 0) {
      if (iVar2 == 0) {
        return 1;
      }
      if (uVar4 == 0) {
        return 1;
      }
    }
    else {
      uStack_30 = (ulonglong)param_2;
      uStack_28 = unaff_RBX & 0xffffffff;
      uStack_20 = (ulonglong)uVar4;
      iVar2 = FUN_14078c6b7();
      puVar3 = (undefined1 *)(ulonglong)((int)&uStack_30 + 0xc);
      if (iVar2 < 0) {
        return 1;
      }
      if (iVar2 != 0) goto LAB_14078faa0;
    }
    *(ulonglong *)(puVar3 + -8) = unaff_RBX & 0xffffffff;
    *(ulonglong *)(puVar3 + -0x10) = (ulonglong)param_2;
    *(undefined8 *)(puVar3 + -0x18) = 0x14078fab5;
    bVar1 = FUN_14078c9e3();
    bVar1 = bVar1 ^ 1 | (byte)(param_1 >> 10) & 1;
  }
  return bVar1;
}

