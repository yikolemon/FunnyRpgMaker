/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14007a641 */

ulonglong FUN_14007a641(ulonglong param_1,float param_2)

{
  ulonglong uVar1;
  
  param_2 = param_2 * *(float *)(DAT_140f2a910 + 0xdb4);
  uVar1 = param_1 & 0xffffffff;
  if (param_2 < DAT_1401c86c8) {
    uVar1 = (ulonglong)
            ((int)(longlong)(param_2 * (float)((uint)(param_1 >> 0x18) & 0xff)) << 0x18 |
            (uint)param_1 & 0xffffff);
  }
  return uVar1;
}

