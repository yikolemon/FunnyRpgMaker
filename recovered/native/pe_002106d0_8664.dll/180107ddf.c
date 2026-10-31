/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180107ddf */

void FUN_180107ddf(float *param_1,float param_2)

{
  longlong lVar1;
  
  if (param_2 < 0.0) {
    return;
  }
  lVar1 = *(longlong *)(DAT_180419160 + 0x1608);
  if ((param_2 != 0.0) || (NAN(param_2))) {
    if (0.0 < param_2) {
      param_2 = param_2 + (*(float *)(lVar1 + 0x60) - *(float *)(lVar1 + 0xd4));
    }
  }
  else {
    param_2 = *(float *)(lVar1 + 0x2a0);
  }
  FUN_180102463(param_2 - *param_1,DAT_1802ac570);
  return;
}

