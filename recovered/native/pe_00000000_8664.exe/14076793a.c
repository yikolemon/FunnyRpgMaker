/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14076793a */

void FUN_14076793a(float *param_1)

{
  float fVar1;
  float *pfVar2;
  float fVar3;
  float fVar4;
  uint unaff_retaddr;
  
  pfVar2 = (float *)(ulonglong)unaff_retaddr;
  fVar1 = param_1[1];
  fVar3 = pfVar2[1];
  if ((pfVar2[1] <= fVar1) && (fVar3 = pfVar2[3], fVar1 <= pfVar2[3])) {
    fVar3 = fVar1;
  }
  fVar1 = *param_1;
  fVar4 = *pfVar2;
  if ((*pfVar2 <= fVar1) && (fVar4 = pfVar2[2], fVar1 <= pfVar2[2])) {
    fVar4 = fVar1;
  }
  *param_1 = fVar4;
  param_1[1] = fVar3;
  fVar1 = param_1[3];
  fVar3 = pfVar2[1];
  if ((pfVar2[1] <= fVar1) && (fVar3 = pfVar2[3], fVar1 <= pfVar2[3])) {
    fVar3 = fVar1;
  }
  fVar1 = param_1[2];
  fVar4 = *pfVar2;
  if ((*pfVar2 <= fVar1) && (fVar4 = pfVar2[2], fVar1 <= pfVar2[2])) {
    fVar4 = fVar1;
  }
  param_1[2] = fVar4;
  param_1[3] = fVar3;
  return;
}

