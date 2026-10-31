/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1400917f5 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1400917f5(uint param_1,float *param_2,float *param_3)

{
  longlong lVar1;
  float fVar2;
  
  lVar1 = DAT_140f2a910;
  fVar2 = *(float *)(DAT_140f2a910 + 0xa8);
  if ((param_1 & 0xe) == 8) {
    *param_2 = fVar2 * _DAT_1402115c4;
    fVar2 = *(float *)(lVar1 + 0xac) * DAT_1402115c8;
  }
  else if ((param_1 & 0xe) == 4) {
    *param_2 = fVar2 * _DAT_1402115c4;
    fVar2 = *(float *)(lVar1 + 0xac) * DAT_1401c86dc;
  }
  else {
    *param_2 = fVar2;
    fVar2 = *(float *)(lVar1 + 0xac);
  }
  *param_3 = fVar2;
  return;
}

