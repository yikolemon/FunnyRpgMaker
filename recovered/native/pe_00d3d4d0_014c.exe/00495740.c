/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 00495740 */

undefined4 FUN_00495740(void)

{
  uint uVar1;
  BOOL BVar2;
  uint extraout_EAX;
  int iVar3;
  
  BVar2 = InitializeCriticalSectionEx((LPCRITICAL_SECTION)&DAT_00521adc,4000,0);
  if (BVar2 != 0) {
    DAT_00521af4 = DAT_00521af4 + 1;
    return CONCAT31((int3)((uint)BVar2 >> 8),1);
  }
  uVar1 = 0;
  for (iVar3 = DAT_00521af4; iVar3 != 0; iVar3 = iVar3 + -1) {
    DeleteCriticalSection((LPCRITICAL_SECTION)(&DAT_00521ac4 + iVar3 * 0x18));
    DAT_00521af4 = DAT_00521af4 + -1;
    uVar1 = extraout_EAX;
  }
  return uVar1 & 0xffffff00;
}

