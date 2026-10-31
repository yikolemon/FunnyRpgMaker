/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 00496193 */

undefined4 FUN_00496193(void)

{
  DWORD DVar1;
  
  DVar1 = DAT_0051ae80;
  if (DAT_0051ae80 != 0xffffffff) {
    DVar1 = FUN_0049692b(DAT_0051ae80);
    DAT_0051ae80 = 0xffffffff;
  }
  return CONCAT31((int3)(DVar1 >> 8),1);
}

