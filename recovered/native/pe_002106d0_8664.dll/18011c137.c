/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18011c137 */

void FUN_18011c137(void)

{
  bool bVar1;
  
  if (*(longlong *)(DAT_180419160 + 0x24f8) == 0) {
    bVar1 = *(longlong *)(*(longlong *)(DAT_180419160 + 0x1608) + 0x208) == 0;
  }
  else {
    bVar1 = false;
  }
  *(bool *)(*(longlong *)(DAT_180419160 + 0x1608) + 0x1b8) = bVar1;
  return;
}

