/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1400953f3 */

void FUN_1400953f3(void)

{
  bool bVar1;
  
  if (*(longlong *)(DAT_140f2a910 + 0x24f8) == 0) {
    bVar1 = *(longlong *)(*(longlong *)(DAT_140f2a910 + 0x1608) + 0x208) == 0;
  }
  else {
    bVar1 = false;
  }
  *(bool *)(*(longlong *)(DAT_140f2a910 + 0x1608) + 0x1b8) = bVar1;
  return;
}

