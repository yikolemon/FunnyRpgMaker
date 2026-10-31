/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1408cc040 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1408cc040(undefined8 param_1)

{
  uint uVar1;
  int iVar2;
  undefined8 uVar3;
  undefined4 *puVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  
  uVar1 = *(uint *)(((ulonglong)&stack0xfffffffffffffff8 & 0xffffffff) + 8);
  puVar6 = &stack0xfffffffffffffff0;
  if (uVar1 < 0xffffffe1) {
    if (uVar1 == 0) {
      uVar1 = 0;
    }
    puVar5 = &stack0xfffffffffffffff0;
    do {
      *(ulonglong *)(puVar5 + -8) = (ulonglong)uVar1;
      *(undefined8 *)(puVar5 + -0x10) = 0;
      *(undefined8 *)(puVar5 + -0x18) = _DAT_150c7129d;
      *(undefined8 *)(puVar5 + -0x20) = 0x1408cc07b;
      uVar3 = (*_DAT_150c2a07f)(param_1);
      if ((int)uVar3 != 0) {
        return uVar3;
      }
      *(undefined8 *)(puVar5 + -0x20) = 0x1408cc05d;
      iVar2 = FUN_1408db3b0();
      puVar6 = puVar5 + -0x18;
      if (iVar2 == 0) break;
      *(ulonglong *)(puVar5 + -0x20) = (ulonglong)uVar1;
      *(undefined8 *)(puVar5 + -0x28) = 0x1408cc067;
      iVar2 = FUN_1408c03a0();
      param_1 = *(undefined8 *)(puVar5 + -0x20);
      puVar6 = puVar5 + -0x18;
      puVar5 = puVar5 + -0x18;
    } while (iVar2 != 0);
  }
  *(undefined8 *)(puVar6 + -8) = 0x1408cc086;
  puVar4 = (undefined4 *)FUN_1408c0ecd();
  *puVar4 = 0xc;
  return 0;
}

