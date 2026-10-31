/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1400810f7 */

void FUN_1400810f7(float *param_1,float param_2)

{
  longlong lVar1;
  
  if (param_2 < 0.0) {
    return;
  }
  lVar1 = *(longlong *)(DAT_140f2a910 + 0x1608);
  if ((param_2 != 0.0) || (NAN(param_2))) {
    if (0.0 < param_2) {
      param_2 = param_2 + (*(float *)(lVar1 + 0x60) - *(float *)(lVar1 + 0xd4));
    }
  }
  else {
    param_2 = *(float *)(lVar1 + 0x2a0);
  }
  FUN_14007b71f(param_2 - *param_1,DAT_1401c86c8);
  return;
}

