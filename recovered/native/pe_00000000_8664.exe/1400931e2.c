/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1400931e2 */

void FUN_1400931e2(undefined8 *param_1)

{
  longlong lVar1;
  
  lVar1 = DAT_140f2a910;
  *(undefined1 *)(*(longlong *)(DAT_140f2a910 + 0x1608) + 0x10b) = 1;
  lVar1 = *(longlong *)(lVar1 + 0x1608);
  *(ulonglong *)(lVar1 + 0x158) =
       CONCAT44((float)((ulonglong)*param_1 >> 0x20) +
                ((float)((ulonglong)*(undefined8 *)(lVar1 + 0x60) >> 0x20) -
                (float)((ulonglong)*(undefined8 *)(lVar1 + 0xd4) >> 0x20)),
                (float)*param_1 +
                ((float)*(undefined8 *)(lVar1 + 0x60) - (float)*(undefined8 *)(lVar1 + 0xd4)));
  *(undefined1 *)(lVar1 + 0x199) = 1;
  return;
}

