/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 00494510 */

uint FUN_00494510(void)

{
  BOOL BVar1;
  DWORD DVar2;
  
  DAT_0051ae60 = FlsAlloc((PFLS_CALLBACK_FUNCTION)&LAB_00494670);
  DVar2 = DAT_0051ae60;
  if (DAT_0051ae60 != 0xffffffff) {
    BVar1 = FlsSetValue(DAT_0051ae60,&DAT_00521ab4);
    if (BVar1 != 0) {
      return CONCAT31((int3)((uint)BVar1 >> 8),1);
    }
    DVar2 = DAT_0051ae60;
    if (DAT_0051ae60 != 0xffffffff) {
      DVar2 = FlsFree(DAT_0051ae60);
      DAT_0051ae60 = 0xffffffff;
    }
  }
  return DVar2 & 0xffffff00;
}

