/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1403299ad */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1403299ad(uint param_1,float *param_2,float *param_3)

{
  longlong lVar1;
  float fVar2;
  
  lVar1 = DAT_14062a630;
  fVar2 = *(float *)(DAT_14062a630 + 0xa8);
  if ((param_1 & 0xe) == 8) {
    *param_2 = fVar2 * _DAT_1404efd34;
    fVar2 = *(float *)(lVar1 + 0xac) * DAT_1404ed040;
  }
  else if ((param_1 & 0xe) == 4) {
    *param_2 = fVar2 * _DAT_1404efd34;
    fVar2 = *(float *)(lVar1 + 0xac) * DAT_1404ed000;
  }
  else {
    *param_2 = fVar2;
    fVar2 = *(float *)(lVar1 + 0xac);
  }
  *param_3 = fVar2;
  return;
}

