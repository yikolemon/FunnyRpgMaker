/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 1400a1504 */

undefined4 FUN_1400a1504(void)

{
  BOOL in_EAX;
  
  if (DAT_14013bbf0 != 0xffffffff) {
    in_EAX = FlsFree(DAT_14013bbf0);
    DAT_14013bbf0 = 0xffffffff;
  }
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}

