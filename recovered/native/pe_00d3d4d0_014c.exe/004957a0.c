/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 004957a0 */

undefined4 FUN_004957a0(void)

{
  undefined4 in_EAX;
  undefined4 extraout_EAX;
  int iVar1;
  
  for (iVar1 = DAT_00521af4; iVar1 != 0; iVar1 = iVar1 + -1) {
    DeleteCriticalSection((LPCRITICAL_SECTION)(&DAT_00521ac4 + iVar1 * 0x18));
    DAT_00521af4 = DAT_00521af4 + -1;
    in_EAX = extraout_EAX;
  }
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}

