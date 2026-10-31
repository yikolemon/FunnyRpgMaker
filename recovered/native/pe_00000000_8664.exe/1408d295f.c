/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1408d295f */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_1408d295f(void)

{
  uint uVar1;
  undefined4 *puVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  
  uVar1 = *(uint *)(((ulonglong)&stack0xfffffffffffffff8 & 0xffffffff) + 8);
  if (uVar1 == 0xfffffffe) {
    puVar2 = (undefined4 *)FUN_1408c0ee2();
    *puVar2 = 0;
    puVar2 = (undefined4 *)FUN_1408c0ecd();
    *puVar2 = 9;
  }
  else {
    if ((-1 < (int)uVar1) && (uVar1 < _DAT_150c77dbb)) {
      uVar4 = (ulonglong)((uVar1 & 0x3f) * 0x38);
      uVar3 = (ulonglong)*(uint *)((ulonglong)(uVar1 >> 6) * 4 + 0x103a5230);
      if ((*(byte *)(uVar3 + 0x28 + uVar4) & 1) != 0) {
        return *(undefined4 *)(uVar3 + 0x18 + uVar4);
      }
    }
    puVar2 = (undefined4 *)FUN_1408c0ee2();
    *puVar2 = 0;
    puVar2 = (undefined4 *)FUN_1408c0ecd();
    *puVar2 = 9;
    FUN_1408cbd78();
  }
  return 0xffffffff;
}

