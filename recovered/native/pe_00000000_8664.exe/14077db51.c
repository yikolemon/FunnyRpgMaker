/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14077db51 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_14077db51(void)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = *(int *)((ulonglong)_DAT_150b1b2a3 + 0x2308);
  if (iVar1 == 0) {
    uVar2 = *(int *)((ulonglong)_DAT_150b1b2a3 + 0x14cc) + 0xfe;
  }
  else {
    uVar2 = iVar1 + 0x200;
  }
  return CONCAT31((int3)(uVar2 >> 8),*(undefined1 *)(ulonglong)uVar2);
}

