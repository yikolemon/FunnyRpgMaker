/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180101385 */

ulonglong FUN_180101385(ulonglong param_1,float param_2)

{
  ulonglong uVar1;
  
  param_2 = param_2 * *(float *)(DAT_180419160 + 0xdb4);
  uVar1 = param_1 & 0xffffffff;
  if (param_2 < DAT_1802ac570) {
    uVar1 = (ulonglong)
            ((int)(longlong)(param_2 * (float)((uint)(param_1 >> 0x18) & 0xff)) << 0x18 |
            (uint)param_1 & 0xffffff);
  }
  return uVar1;
}

