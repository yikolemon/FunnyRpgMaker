/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1408d6804 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1408d6804(void)

{
  uint uVar1;
  undefined4 *puVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  undefined8 unaff_RSI;
  
  uVar5 = (ulonglong)&stack0xfffffffffffffff8 & 0xffffffff;
  uVar4 = (ulonglong)((int)&stack0xfffffffffffffff8 - 0x10);
  *(undefined8 *)(uVar4 - 8) = unaff_RSI;
  uVar1 = *(uint *)(uVar5 + 8);
  if (uVar1 == 0xfffffffe) {
    *(undefined8 *)(uVar4 - 0x10) = 0x1408d681a;
    puVar2 = (undefined4 *)FUN_1408c0ecd();
    *puVar2 = 9;
  }
  else {
    if (((-1 < (int)uVar1) && (uVar1 < _DAT_150c7bc5c)) &&
       ((*(byte *)((ulonglong)*(uint *)((ulonglong)(uint)((int)uVar1 >> 6) * 4 + 0x103a5230) + 0x28
                  + (ulonglong)((uVar1 & 0x3f) * 0x38)) & 1) != 0)) {
      *(uint *)(uVar5 - 8) = uVar1;
      *(int *)(uVar5 - 0xc) = (int)&stack0xfffffffffffffff8 + 8;
      *(uint *)(uVar5 - 0x10) = uVar1;
      *(ulonglong *)(uVar4 - 0x10) = (ulonglong)((int)&stack0xfffffffffffffff8 - 8);
      *(ulonglong *)(uVar4 - 0x18) = (ulonglong)((int)&stack0xfffffffffffffff8 - 0xc);
      *(ulonglong *)(uVar4 - 0x20) = (ulonglong)((int)&stack0xfffffffffffffff8 - 0x10);
      *(undefined8 *)(uVar4 - 0x28) = 0x1408d6869;
      uVar3 = FUN_1408d6881((int)&stack0xfffffffffffffff8 + -1);
      return uVar3;
    }
    *(undefined8 *)(uVar4 - 0x10) = 0x1408d6870;
    puVar2 = (undefined4 *)FUN_1408c0ecd();
    *puVar2 = 9;
    *(undefined8 *)(uVar4 - 0x10) = 0x1408d687b;
    FUN_1408cbd78();
  }
  return 0xffffffff;
}

