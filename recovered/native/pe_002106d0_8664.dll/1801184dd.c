/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1801184dd */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1801184dd(uint param_1,float *param_2,float *param_3)

{
  longlong lVar1;
  float fVar2;
  
  lVar1 = DAT_180419160;
  fVar2 = *(float *)(DAT_180419160 + 0xa8);
  if ((param_1 & 0xe) == 8) {
    *param_2 = fVar2 * _DAT_1802de864;
    fVar2 = *(float *)(lVar1 + 0xac) * DAT_1802dbb70;
  }
  else if ((param_1 & 0xe) == 4) {
    *param_2 = fVar2 * _DAT_1802de864;
    fVar2 = *(float *)(lVar1 + 0xac) * DAT_1802dbb30;
  }
  else {
    *param_2 = fVar2;
    fVar2 = *(float *)(lVar1 + 0xac);
  }
  *param_3 = fVar2;
  return;
}

