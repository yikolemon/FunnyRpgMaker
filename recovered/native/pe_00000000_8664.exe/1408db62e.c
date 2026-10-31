/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1408db62e */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

byte FUN_1408db62e(void)

{
  uint uVar1;
  undefined4 *puVar2;
  
  uVar1 = *(uint *)(((ulonglong)&stack0xfffffffffffffff8 & 0xffffffff) + 8);
  if (uVar1 == 0xfffffffe) {
    puVar2 = (undefined4 *)FUN_1408c0ecd();
    *puVar2 = 9;
  }
  else {
    if ((-1 < (int)uVar1) && (uVar1 < _DAT_150c80a82)) {
      return *(byte *)((ulonglong)*(uint *)((ulonglong)(uVar1 >> 6) * 4 + 0x103a5230) + 0x28 +
                      (ulonglong)((uVar1 & 0x3f) * 0x38)) & 0x40;
    }
    puVar2 = (undefined4 *)FUN_1408c0ecd();
    *puVar2 = 9;
    FUN_1408cbd78();
  }
  return 0;
}

