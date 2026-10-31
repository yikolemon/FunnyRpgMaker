/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180119eca */

void FUN_180119eca(undefined8 *param_1)

{
  longlong lVar1;
  
  lVar1 = DAT_180419160;
  *(undefined1 *)(*(longlong *)(DAT_180419160 + 0x1608) + 0x10b) = 1;
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

