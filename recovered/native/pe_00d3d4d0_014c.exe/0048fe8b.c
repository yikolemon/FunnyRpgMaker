/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 0048fe8b */

undefined4 FUN_0048fe8b(void)

{
  undefined4 in_EAX;
  undefined4 extraout_EAX;
  int iVar1;
  LPCRITICAL_SECTION lpCriticalSection;
  
  if (DAT_00521aa0 != 0) {
    lpCriticalSection = (LPCRITICAL_SECTION)(&DAT_00521920 + DAT_00521aa0 * 0x18);
    iVar1 = DAT_00521aa0;
    do {
      DeleteCriticalSection(lpCriticalSection);
      DAT_00521aa0 = DAT_00521aa0 + -1;
      lpCriticalSection = lpCriticalSection + -1;
      iVar1 = iVar1 + -1;
      in_EAX = extraout_EAX;
    } while (iVar1 != 0);
  }
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}

