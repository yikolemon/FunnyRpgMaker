/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18022bb80 */

longlong FUN_18022bb80(longlong param_1,uint param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  
  if (0xffff < param_2) {
    return 0;
  }
  lVar1 = param_1 + 0x206;
  if (param_2 >> 8 == 0) {
    if (*(char *)(param_1 + 7 + (ulonglong)param_2 * 2) != '\0' ||
        *(char *)(param_1 + 6 + (ulonglong)param_2 * 2) != '\0') {
      return 0;
    }
  }
  else {
    uVar2 = (ulonglong)(*(byte *)(param_1 + 7 + (ulonglong)(param_2 >> 8) * 2) & 0xfffffff8) |
            (ulonglong)*(byte *)(param_1 + 6 + (ulonglong)(param_2 >> 8) * 2) << 8;
    if (uVar2 == 0) {
      return 0;
    }
    lVar1 = lVar1 + uVar2;
  }
  return lVar1;
}

