/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18011926a */

void FUN_18011926a(uint param_1,undefined4 param_2,undefined4 param_3)

{
  if ((param_1 >> 0xc & 1) != 0) {
    FUN_1801191ef(0x1000,param_2,param_3);
  }
  if ((param_1 >> 0xd & 1) != 0) {
    FUN_1801191ef(0x2000,param_2,param_3);
  }
  if ((param_1 >> 0xe & 1) != 0) {
    FUN_1801191ef(0x4000,param_2,param_3);
  }
  if ((short)param_1 < 0) {
    FUN_1801191ef(0x8000,param_2,param_3);
  }
  if ((param_1 & 0xffff0fff) != 0) {
    FUN_1801191ef(param_1 & 0xffff0fff,param_2,param_3);
    return;
  }
  return;
}

