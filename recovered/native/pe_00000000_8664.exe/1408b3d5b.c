/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1408b3d5b */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint * FUN_1408b3d5b(uint param_1)

{
  uint uVar1;
  undefined4 uVar2;
  longlong lVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  uint *puVar6;
  
  puVar6 = (uint *)(ulonglong)param_1;
  uVar1 = *(uint *)(((ulonglong)&stack0xfffffffffffffff8 & 0xffffffff) + 8);
  *(undefined1 *)(puVar6 + 3) = 0;
  puVar5 = (undefined4 *)(ulonglong)(param_1 + 4);
  if (uVar1 == 0) {
    if (_DAT_150c58d84 != 0) {
      lVar3 = FUN_1408cc29d();
      *puVar6 = (uint)lVar3;
      *puVar5 = *(undefined4 *)(lVar3 + 0x4c);
      *(undefined4 *)(ulonglong)(param_1 + 8) = *(undefined4 *)(lVar3 + 0x48);
      FUN_1408cc7ed();
      FUN_1408cc81a();
      uVar1 = *(uint *)((ulonglong)*puVar6 + 0x350);
      if ((uVar1 & 2) != 0) {
        return puVar6;
      }
      *(uint *)((ulonglong)*puVar6 + 0x350) = uVar1 | 2;
      *(undefined1 *)(puVar6 + 3) = 1;
      return puVar6;
    }
    uVar4 = 0;
    uVar2 = _DAT_b4c40d8b1039b4c0;
  }
  else {
    uVar4 = ((undefined4 *)(ulonglong)uVar1)[1];
    uVar2 = *(undefined4 *)(ulonglong)uVar1;
  }
  *puVar5 = uVar2;
  puVar5[1] = uVar4;
  return puVar6;
}

