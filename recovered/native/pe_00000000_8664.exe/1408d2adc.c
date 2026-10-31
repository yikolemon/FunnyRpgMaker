/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1408d2adc */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1408d2adc(void)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  undefined4 *puVar4;
  ulonglong uVar5;
  
  uVar1 = *(uint *)(((ulonglong)&stack0xfffffffffffffff8 & 0xffffffff) + 8);
  if ((-1 < (int)uVar1) && (uVar1 < _DAT_150c77f21)) {
    uVar5 = (ulonglong)((uVar1 & 0x3f) * 0x38);
    uVar3 = (ulonglong)*(uint *)((ulonglong)(uVar1 >> 6) * 4 + 0x103a5230);
    if (((*(byte *)(uVar5 + 0x28 + uVar3) & 1) != 0) && (*(int *)(uVar5 + 0x18 + uVar3) != -1)) {
      iVar2 = FUN_1408de7fd();
      if ((iVar2 == 1) && (((uVar1 == 0 || (uVar1 == 1)) || (uVar1 == 2)))) {
        (*_DAT_150c30bf2)();
      }
      *(undefined4 *)((ulonglong)*(uint *)((ulonglong)(uVar1 >> 6) * 4 + 0x103a5230) + 0x18 + uVar5)
           = 0xffffffff;
      return 0;
    }
  }
  puVar4 = (undefined4 *)FUN_1408c0ecd();
  *puVar4 = 9;
  puVar4 = (undefined4 *)FUN_1408c0ee2();
  *puVar4 = 0;
  return 0xffffffff;
}

