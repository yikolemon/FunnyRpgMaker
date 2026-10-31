/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14032d607 */

void FUN_14032d607(void)

{
  bool bVar1;
  
  if (*(longlong *)(DAT_14062a630 + 0x24f8) == 0) {
    bVar1 = *(longlong *)(*(longlong *)(DAT_14062a630 + 0x1608) + 0x208) == 0;
  }
  else {
    bVar1 = false;
  }
  *(bool *)(*(longlong *)(DAT_14062a630 + 0x1608) + 0x1b8) = bVar1;
  return;
}

