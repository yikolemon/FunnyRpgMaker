/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1408d056e */

undefined4 FUN_1408d056e(void)

{
  uint uVar1;
  undefined4 *puVar2;
  
  uVar1 = *(uint *)(((ulonglong)&stack0xfffffffffffffff8 & 0xffffffff) + 8);
  if (uVar1 == 0) {
    puVar2 = (undefined4 *)FUN_1408c0ecd();
    *puVar2 = 0x16;
    FUN_1408cbd78();
    return 0xffffffff;
  }
  return *(undefined4 *)((ulonglong)uVar1 + 0x10);
}

