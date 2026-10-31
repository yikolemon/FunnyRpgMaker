/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14009316a */

void FUN_14009316a(undefined8 *param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(DAT_140f2a910 + 0x1608);
  *param_1 = CONCAT44(((float)((ulonglong)*(undefined8 *)(lVar1 + 0x158) >> 0x20) -
                      (float)((ulonglong)*(undefined8 *)(lVar1 + 0x60) >> 0x20)) +
                      (float)((ulonglong)*(undefined8 *)(lVar1 + 0xd4) >> 0x20),
                      ((float)*(undefined8 *)(lVar1 + 0x158) - (float)*(undefined8 *)(lVar1 + 0x60))
                      + (float)*(undefined8 *)(lVar1 + 0xd4));
  return;
}

