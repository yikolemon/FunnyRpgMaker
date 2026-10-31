/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180119e52 */

void FUN_180119e52(undefined8 *param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(DAT_180419160 + 0x1608);
  *param_1 = CONCAT44(((float)((ulonglong)*(undefined8 *)(lVar1 + 0x158) >> 0x20) -
                      (float)((ulonglong)*(undefined8 *)(lVar1 + 0x60) >> 0x20)) +
                      (float)((ulonglong)*(undefined8 *)(lVar1 + 0xd4) >> 0x20),
                      ((float)*(undefined8 *)(lVar1 + 0x158) - (float)*(undefined8 *)(lVar1 + 0x60))
                      + (float)*(undefined8 *)(lVar1 + 0xd4));
  return;
}

