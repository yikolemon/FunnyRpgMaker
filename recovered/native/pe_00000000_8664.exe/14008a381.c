/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14008a381 */

void FUN_14008a381(undefined8 *param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = *(longlong *)(DAT_140f2a910 + 0x1608);
  lVar2 = 0x2a0;
  if ((*(longlong *)(lVar1 + 0x208) == 0) && (*(longlong *)(DAT_140f2a910 + 0x24f8) == 0)) {
    lVar2 = 0x2d0;
  }
  *param_1 = CONCAT44((float)((ulonglong)*(undefined8 *)(lVar1 + lVar2) >> 0x20) -
                      (float)((ulonglong)*(undefined8 *)(lVar1 + 0x158) >> 0x20),
                      (float)*(undefined8 *)(lVar1 + lVar2) - (float)*(undefined8 *)(lVar1 + 0x158))
  ;
  return;
}

