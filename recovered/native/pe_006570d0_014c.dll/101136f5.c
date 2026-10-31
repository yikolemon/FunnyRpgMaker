/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101136f5 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101136f5(uint param_1,float *param_2,float *param_3)

{
  int iVar1;
  float fVar2;
  
  iVar1 = DAT_1039d74c;
  fVar2 = *(float *)(DAT_1039d74c + 0x94);
  if ((param_1 & 0xe) == 8) {
    *param_2 = fVar2 * _DAT_102b8d90;
    fVar2 = *(float *)(iVar1 + 0x98) * DAT_102b8d94;
  }
  else if ((param_1 & 0xe) == 4) {
    *param_2 = fVar2 * _DAT_102b8d90;
    fVar2 = *(float *)(iVar1 + 0x98) * DAT_102b7114;
  }
  else {
    *param_2 = fVar2;
    fVar2 = *(float *)(iVar1 + 0x98);
  }
  *param_3 = fVar2;
  return;
}

