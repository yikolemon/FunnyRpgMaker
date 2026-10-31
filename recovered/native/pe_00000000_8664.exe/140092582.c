/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140092582 */

void FUN_140092582(uint param_1,undefined4 param_2,undefined4 param_3)

{
  if ((param_1 >> 0xc & 1) != 0) {
    FUN_140092507(0x1000,param_2,param_3);
  }
  if ((param_1 >> 0xd & 1) != 0) {
    FUN_140092507(0x2000,param_2,param_3);
  }
  if ((param_1 >> 0xe & 1) != 0) {
    FUN_140092507(0x4000,param_2,param_3);
  }
  if ((short)param_1 < 0) {
    FUN_140092507(0x8000,param_2,param_3);
  }
  if ((param_1 & 0xffff0fff) != 0) {
    FUN_140092507(param_1 & 0xffff0fff,param_2,param_3);
    return;
  }
  return;
}

