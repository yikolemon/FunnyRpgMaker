/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140763df2 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_140763df2(void)

{
  ulonglong uVar1;
  
  uVar1 = (ulonglong)_DAT_150b01544;
  if ((*(uint *)(uVar1 + 0x1e88) & 0x20) != 0) {
    return (*(uint *)(uVar1 + 0x1e88) & 0x40) >> 6;
  }
  if (*(int *)(uVar1 + 0x1e80) == 0 || *(int *)(uVar1 + 0x1554) != *(int *)(uVar1 + 0x1e80)) {
    return 0;
  }
  return CONCAT31((int3)((uint)*(int *)(uVar1 + 0x1558) >> 8),
                  *(int *)(uVar1 + 4) <= *(int *)(uVar1 + 0x1558));
}

