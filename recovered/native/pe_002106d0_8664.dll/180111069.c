/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180111069 */

void FUN_180111069(undefined8 *param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = *(longlong *)(DAT_180419160 + 0x1608);
  lVar2 = 0x2a0;
  if ((*(longlong *)(lVar1 + 0x208) == 0) && (*(longlong *)(DAT_180419160 + 0x24f8) == 0)) {
    lVar2 = 0x2d0;
  }
  *param_1 = CONCAT44((float)((ulonglong)*(undefined8 *)(lVar1 + lVar2) >> 0x20) -
                      (float)((ulonglong)*(undefined8 *)(lVar1 + 0x158) >> 0x20),
                      (float)*(undefined8 *)(lVar1 + lVar2) - (float)*(undefined8 *)(lVar1 + 0x158))
  ;
  return;
}

