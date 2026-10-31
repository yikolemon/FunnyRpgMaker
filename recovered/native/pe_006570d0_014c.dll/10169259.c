/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10169259 */

void __fastcall FUN_10169259(int param_1,int param_2,char param_3)

{
  float *pfVar1;
  float fVar2;
  
  if (param_2 < 0) {
    param_2 = *(int *)(param_1 + 0xc);
  }
  pfVar1 = (float *)(param_2 * 0x1c + *(int *)(param_1 + 100));
  if (param_3 == '\0') {
    fVar2 = pfVar1[7] - *pfVar1;
  }
  else {
    fVar2 = pfVar1[8] - pfVar1[1];
  }
  FUN_10169019(param_1,fVar2);
  return;
}

