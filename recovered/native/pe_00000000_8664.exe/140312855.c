/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140312855 */

ulonglong FUN_140312855(ulonglong param_1,float param_2)

{
  ulonglong uVar1;
  
  param_2 = param_2 * *(float *)(DAT_14062a630 + 0xdb4);
  uVar1 = param_1 & 0xffffffff;
  if (param_2 < DAT_1404bda40) {
    uVar1 = (ulonglong)
            ((int)(longlong)(param_2 * (float)((uint)(param_1 >> 0x18) & 0xff)) << 0x18 |
            (uint)param_1 & 0xffffff);
  }
  return uVar1;
}

