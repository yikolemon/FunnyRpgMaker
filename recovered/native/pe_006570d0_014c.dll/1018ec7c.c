/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1018ec7c */

void FUN_1018ec7c(int param_1)

{
  float fVar1;
  
  fVar1 = *(float *)(*(int *)(param_1 + 8) + 0x60);
  if ((fVar1 != DAT_1028b430) || (NAN(fVar1) || NAN(DAT_1028b430))) {
    FUN_1018eca8(param_1,fVar1);
  }
  return;
}

