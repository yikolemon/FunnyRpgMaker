/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1408cdc60 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1408cdc60(undefined8 param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined4 *puVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  ulonglong uVar6;
  uint uVar7;
  
  uVar6 = (ulonglong)&stack0xfffffffffffffff8 & 0xffffffff;
  uVar7 = *(uint *)(uVar6 + 8);
  if ((uVar7 == 0) ||
     (puVar5 = &stack0xfffffffffffffff0,
     *(uint *)(uVar6 + 0xc) <= (uint)(0xffffffe0 / (ulonglong)uVar7))) {
    uVar7 = uVar7 * *(int *)(uVar6 + 0xc);
    if (uVar7 == 0) {
      uVar7 = 0;
    }
    puVar4 = &stack0xfffffffffffffff0;
    do {
      *(ulonglong *)(puVar4 + -8) = (ulonglong)uVar7;
      *(undefined8 *)(puVar4 + -0x10) = 8;
      *(undefined8 *)(puVar4 + -0x18) = _DAT_150c72ecc;
      *(undefined8 *)(puVar4 + -0x20) = 0x1408cdcaa;
      uVar2 = (*_DAT_150c2bcae)(param_1);
      if ((int)uVar2 != 0) {
        return uVar2;
      }
      *(undefined8 *)(puVar4 + -0x20) = 0x1408cdc8c;
      iVar1 = FUN_1408db3b0();
      puVar5 = puVar4 + -0x18;
      if (iVar1 == 0) break;
      *(ulonglong *)(puVar4 + -0x20) = (ulonglong)uVar7;
      *(undefined8 *)(puVar4 + -0x28) = 0x1408cdc96;
      iVar1 = FUN_1408c03a0();
      param_1 = *(undefined8 *)(puVar4 + -0x20);
      puVar5 = puVar4 + -0x18;
      puVar4 = puVar4 + -0x18;
    } while (iVar1 != 0);
  }
  *(undefined8 *)(puVar5 + -8) = 0x1408cdcb5;
  puVar3 = (undefined4 *)FUN_1408c0ecd();
  *puVar3 = 0xc;
  return 0;
}

