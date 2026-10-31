/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 00494560 */

undefined4 FUN_00494560(void)

{
  DWORD DVar1;
  
  DVar1 = DAT_0051ae60;
  if (DAT_0051ae60 != 0xffffffff) {
    DVar1 = FlsFree(DAT_0051ae60);
    DAT_0051ae60 = 0xffffffff;
  }
  return CONCAT31((int3)(DVar1 >> 8),1);
}

