/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1403192af */

void FUN_1403192af(float *param_1,float param_2)

{
  longlong lVar1;
  
  if (param_2 < 0.0) {
    return;
  }
  lVar1 = *(longlong *)(DAT_14062a630 + 0x1608);
  if ((param_2 != 0.0) || (NAN(param_2))) {
    if (0.0 < param_2) {
      param_2 = param_2 + (*(float *)(lVar1 + 0x60) - *(float *)(lVar1 + 0xd4));
    }
  }
  else {
    param_2 = *(float *)(lVar1 + 0x2a0);
  }
  FUN_140313933(param_2 - *param_1,DAT_1404bda40);
  return;
}

